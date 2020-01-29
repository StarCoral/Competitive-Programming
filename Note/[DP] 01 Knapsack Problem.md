# [DP] 01 Knapsack Problem

## Define
有N件物品和一個重量為M的背包。  
第i件物品的重量是w[i]，價值是v[i]。  
求哪些物品裝入背包可使價值總和最大。  
  
0/1: 每種物品只會放進背包零個或一個，且不可分割。  
此為經典的NP-complete

### Key

關鍵點在於如何有效利用**背包的剩餘重量**，找出最好的物品組合方式。

---

## Solution

+ 一件物品不放進背包，背包價值不變、背包耐重不變
+ 一件物品放進背包，背包價值上升、背包耐重下降

遞迴公式為：

**dp(n, w) = max( dp(n-1, w), dp(n-1, w-weight[n]) + cost[n] )**

```
n：第0個到第n個物品要放進背包內。
w：背包耐重限制。
dp(n, w)：只有第0個到第n個物品，耐重限制為w，此時的背包問題答案。
weight[n]：第n個物品的重量。
cost[n]：第n個物品的價值。
````
考慮邊界條件，例如耐重不足的情況、沒有物品的情況：
```
dp(n, w) = -INF     # if w < 0 || n < 0
         = 0        # if n = 0 && w >= 0
         = max( dp(n-1, w), dp(n-1, w-weight[n]) + cost[n] ) #if n > 0 && w >= 0
```
避免存取負的物品、負的耐重：
```
dp(n, w) = 0                # if n = 0
         = dp(n-1,w)        # if n > 0 && w-weight[n] < 0
         = max( dp(n-1, w), dp(n-1, w-weight[n]) + cost[n] ) #if n > 0 && w-weight[n] >= 0
```
[Top-down]
```cpp=
const int N = 100;      // 物品總數上限
const int W = 100000;   // 背包耐重上限
                        //（可以使用物品的總重量作為此值）
int cost[N], weight[N]; // 物品的價值與重量
int dp[N + 1][W + 1];    // DP表格
 
// n為物品個數，w為背包耐重限制。
int knapsack(int n, int w)
{
    if (w < 0) return -1e9; // 耐重能力不足，故只能不放。
    if (n == 0) return 0;   // 沒有物品時，就沒有cost。
 
    // memoization，直接讀取記憶體的答案。
    if (dp[n][w]) return dp[n][w];
 
    // 遞迴求得小問題的答案
    return dp[n][w] = max(
        knapsack(n-1, w-weight[n]) + cost[n],
        knapsack(n-1, w)
    );
}
```
[Bottom-up]
```cpp=
const int N = 100, W = 100000;
int cost[N], weight[N];
int dp[N + 1][W + 1];
 
void knapsack(int n, int w)
{
    memset(c, 0, sizeof(c));
 
    for (int i = 0; i < n; ++i)     // 窮舉每種物品
        for (int j = 0; j <= w; ++j)// 窮舉每種重量
            if (j - weight[i] < 0)
                // 耐重能力不足，故只能不放。
                dp[i+1][j] = dp[i][j];
            else
                // 耐重能力足夠，可以放或不放。
                dp[i+1][j] = max(dp[i][j],dp[i][j - weight[i]] + cost[i]);
 
    cout << "最高的價值為" << dp[n][w];
}
```
[改善]
仔細觀察計算順序與表格，每次計算只需要**上方**和**左上方**的格子。  
我們可以**重複利用記憶體**，建立一條陣列就夠了；  
不過計算順序要改成由**陣列後端**開始，才不會覆蓋左上方的格子。  

```cpp=
const int N = 100, W = 100000;
int cost[N], weight[N];
int dp[W + 1];   // 一條陣列就夠了
 
void knapsack(int n, int w)
{
    memset(dp, 0, sizeof(c));
 
    for (int i = 0; i < n; ++i)
        for (int j = w; j - weight[i] >= 0; --j)    // 由後往前
            dp[j] = max(dp[j], dp[j - weight[i]] + cost[i]);
 
    cout << "最高的價值為" << c[w];
}
```

Reference
http://www.csie.ntnu.edu.tw/~u91029/KnapsackProblem.html