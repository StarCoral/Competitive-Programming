# [DP] 無限背包問題(Unbounded Knapsack Problem)

## Define
有N種物品和一個重量為M的背包。  
第i種物品的重量是w[i]，價值是v[i]。  
每一種物品都無限量供應的背包問題

---

## Solution

分割問題的方式可以仿照 0/1 背包問題。 
+ 0/1 背包問題是一個物品的去留
+ 無限背包問題則是一種物品的去留。

考慮一種物品的各種用量遞迴公式為：  

**dp(n, w) = max(
   dp(n-1, w - weight[n] ⋅ 0) + cost[n]     ,   用去零個第n種物品
   dp(n-1, w - weight[n] ⋅ 1) + cost[n] ⋅ 1 ,   用去一個第n種物品
   dp(n-1, w - weight[n] ⋅ 2) + cost[n] ⋅ 2 ,   用去兩個第n種物品
   ... ,                                       ...
)**

```
n：第0種到第n種物品要放進背包內。
w：背包耐重限制。
dp(n, w)：只有第0種到第n種物品，耐重限制為w，此時的背包問題答案。
weight[n]：第n種物品的重量。
cost[n]：第n種物品的價值。
````
更好的方式，其實仍是一個物品的去留：

**dp(n, w) = max( dp(n-1, w), dp(n, w-weight[n]) + cost[n] )**


[Algorithm]
```cpp=
const int N = 100, W = 100000;
int cost[N], weight[N];
int dp[W + 1];
 
void knapsack(int n, int w)
{
    memset(c, 0, sizeof(c));
 
    for (int i=0; i<n; ++i)
        for (int j = weight[i]; j <= w; ++j)
            dp[j] = max(dp[j], dp[j - weight[i]] + cost[i]);
 
    cout << "最高的價值為" << dp[w];
}
```


Reference
http://www.csie.ntnu.edu.tw/~u91029/KnapsackProblem.html