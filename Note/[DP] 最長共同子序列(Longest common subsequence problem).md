# [DP] 最長共同子序列(Longest common subsequence problem)

## Define
在序列集合中，出現在每一個序列 (亦即：每個序列都有的值) 且長度為最長，該共同序列稱為「最常共同子序列 (Longest Common Subsequence; LCS)」

## Example1

S1和S2為以下兩個序列，試求最長共同子序列。  
S1 = [2,5,7,9,4,1,3]  
  
S2 = [3,5,4,5,7]  
  
LCS(S1,S2) = [5,4,3]  

## Example2

S1、S2和S3為以下三個序列，試求最長共同子序列。  
S1 = [a,b,c,d,b,c,e,e,a]  
  
S2 = [c,a,b,d,e,f,g,a] 

S3 = [d,c,e,a]
  
LCS(S1,S2,S3) = [c,e,a],[d,e,a]  

---

## Solution

### 分割問題

+ 假設有兩個序列S1和S2，其最長共同子序列:  
  **LCS(S1,S2)**
  
+ 序列S1和S2的最後一個元素分別以e1與e2表示，剩餘部分以sub1和sub2表示，故:  
  **S1 = sub1+e1**  
  **S2 = sub2+e2**  
  
+ 由以上的兩個式子，可以將S1和S2的LCS分為4種情況討論:
  1. LCS包含e1但不含e2。  
     此情形若要找LCS只需找sub2即可。  
     **LCS(S1,S2)=LCS(S1,sub2)**
  2. LCS包含e2但不含e1。  
     此情形若要找LCS只需找sub1即可。  
     **LCS(S1,S2)=LCS(sub1,S2)**
  3. LCS包含e1且包含e2。  
     此種情形同時包含e1和e2且e1與e2都是2個序列的最後一個元素，e1 == e2，故LCS的最後一個元素必定為e1(e2)。
     **LCS(S1,S2)=LCS(sub1,sub2)+e1**
  4. LCS不含e1且不含e2。
     **LCS(S1,S2)=LCS(sub1,sub2)**
+ 上述可以簡化為以下遞迴式:
```          
LCS(S1,S2) 
= max(LCS(sub1,S2),LCS(s1,sub2))  if e1 != e2
= LCS(sub1,sub2)+e1 if e1 == e2 
```
+ 考慮初始值當s1或s2 = 空集合，則LCS空集合。

### 計算LCS的長度

```cpp
const int n1 = 7, n2 = 5;
// 為了實作方便，從陣列的第1格開始存入序列。
int s1[7+1] = {0, 2, 5, 7, 9, 3, 1, 2};
int s2[5+1] = {0, 3, 5, 3, 2, 8};

//二維陣列 length[i][j] :
//代表「 s1 前 i 個元素」和「 s2 前 j 個元素」的 LCS 長度。
int length[7+1][5+1];   // DP表格
 
void LCS()
{
    // 初始化：當s1或s2是空集合，則LCS是空集合。
    // length[x][0] = length[0][x] = 0;
    for (int i=0; i<=n1; i++) length[i][0] = 0;
    for (int j=0; j<=n2; j++) length[0][j] = 0;
 
    // 填表格：依照遞迴公式
    for (int i=1; i<=n1; i++)
        for (int j=1; j<=n2; j++)
            if (s1[i] == s2[j])
                // +1是因為e1的長度為1
                length[i][j] = length[i-1][j-1] + 1;
            else
                length[i][j] = max(length[i-1][j],
                                   length[i][j-1]);
 
    cout << "LCS的長度是" << length[n1][n2];
}
```

Reference
https://zh.wikipedia.org/wiki/%E6%9C%80%E9%95%BF%E5%85%AC%E5%85%B1%E5%AD%90%E5%BA%8F%E5%88%97
https://yungshenglu.github.io/2018/05/15/LongestCommonSubsequence1/
http://www.csie.ntnu.edu.tw/~u91029/LongestCommonSubsequence.html