# 【字串】Trie

## 常用名詞介紹

+ **長度**： s.size() 、 strlen(s)
+ **子字串(substring)**：在字串中一段連續的字串
+ **子序列(subsequence)**：在字串中一段可不連續的字串，但出現順序必須和原字串相同
+ **前綴(prefix)**：從頭開始的一段substring
+ **後綴(suffix)**：到結尾的一段substring

## Trie(字典樹)

### 介紹

+ 別名：Trie，又稱
    + 字典樹
    + 前綴樹(Prefix Tree)：common prefix相等的「關鍵字」在 Trie Tree 中，前綴部分對應路徑相同
    + 單詞搜尋樹
    + 鍵樹
+ 一種很特別的樹狀資料結構，如同其名，它就像一本字典，可以讓你快速的依照字母插入、尋找字串，由於高效的特性，特別適用於大量字串出現的時候。

![](https://i.imgur.com/raTsU2p.png)


從上圖可以歸納出Trie樹的基本性質：

+ 根節點：根節點不包含字符，除根節點外的每一個子節點都包含一個字符。
+ 子節點：每個節點的所有子節點，包含的字符互不相同。
+ 路徑：從根節點到某一個節點，路徑上經過的字符連起來，為該節點對應的字符串。

實際場景中，每個中間節點，會設置「一個標記」，用於標識當前節點是否構成一個單詞（關鍵詞）。  

關鍵字，都存儲在「路徑」上，而沒有存儲再「節點」中。  

## 核心想法

+ 空間換時間
+ 利用字符串的【公共前綴】，來減少無謂的字符串比較，以提升查詢效率

## 例題：

Q：先給定多個字串，接著多次詢問某個字串有沒有出現過?   

+ struct

```cpp 
struct s {
    int nxt[26]={}; // 遇到a~z要往哪走
    bool flag; //是不是某個字的結尾
} node[1000005]={};

int idx = 0;
```

+ insert -> O(字串長度)

```cpp
void insert(string s){
    int cur = 0;
    for(auto i: s){
        if(node[cur].nxt[i-'a'] == 0){
            node[cur].nxt[i-'a'] = ++idx; \\開一個新的node
            cur = idx;
        }else{
            cur = node[cur].nxt[i-'a'];
        }
    }
    node[cur].flag = 1;
}
```

+ query -> O(字串長度)

```cpp
bool query(string s){
    int cur = 0;
    for(auto i: s){
        if(node[cur].nxt[i-'a'] == 0)
            return 0;
        else
            cur = node[cur].nxt[i-'a'];
    }
    return node[cur].flag;

}
```



Reference

https://docs.google.com/presentation/d/1A2Lha63Ka9NT8tZkQJ4SvnZ3XA9rDB3fZaVsPiXQjBw/edit?fbclid=IwAR1TNbv6bPbC6Y6IIqmc_gzb3g0Bf_EMiXqjVD2fjmQueFsv95thaDe-C9w#slide=id.g4da6bd6784_0_67
https://kknews.cc/zh-tw/tech/995mrpj.html