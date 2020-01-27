# DSU & MST

## Disjoint-Set Union Find data structure(並查集)

### Question
+ 考慮問題有N個人，初始每個人自己組成一集合
+ 接下來進行一系列操作
  每次操作選兩個人，若它們屬於不同集合，即將它們兩個的集合合併成一個
+ 問最後分組狀況
  有幾個集合，每個集合分別有哪些人

### Disjoint-set union-find algorithm
+ 兩大操作
  + Find(查詢): 確定某元素屬於哪一組別
  + Union(合併): 將兩個組別合併為一個

### Disjoint set
+ 資料結構是一張有向圖
+ 每個節點有一個出邊(out-degree)，代表每個節點的參考對象。初始時，指向自己
+ 查詢時，
  + 若遇到指向自己的節點，代表它不需要參考對象了，即回傳自己。
  + 否則要繼續查找參考對象的答案再回傳
+ 在合併的時後，會更改out-degree指向的對象，來完成操作
![](https://i.imgur.com/vYpgrNX.png)

### Find
+ 先利用一個陣列d[maxn]表示我想知道某人的資訊必須查誰。
+ 如果d[x]=x代表不需要繼續問(已經查到此東西的組別了)
+ 初始時，還沒合併過，所以大家都自己為一個集合。
+ 每個x的d[x]=x，表示每個人屬於編號為自己號碼的集合

```
int find(int x){
    return d[x]==x? x:find(d[x]); //若d[x] =自己，表示找到了;否則要去問別人
}
```

### Union
+ 首先需要找到x,y兩人的集合編號
+ 如果相同，則不做事
+ 否則將其中一個即和編號的參考對象設成另一個
```
void Union(int x,int y){
    int g1 = find(x);
    int g2 = find(y);
    if(g1!=g2) d[g1] = g2 //查g1屬於哪一組要去查g2
}
```
+ Union後，本來屬於x集合的那些人 做find時，就會查到y的集合=>兩者合併
+ 選擇哪個當合併對象都可以
+ 全部的合併結束後，對每個節點做find即可找到他所屬的組別
+ 可在此過程中統計每個組別有多少人
#### 將路徑壓平
+ 若一個group合併很多次，要找到最後指向自己的那個節點，必須經過很多次遞迴查詢
+ 所以可以在查詢的時候，順便修改路徑上每個點的參考對象
```
int Find(int x){
    return d[x]==x? x:d[x]=Find(x)
}
//此即為disjoint set的核心程式碼
```
#### 寫法2可以連帶查詢size
```
int Find(int x){
    return d[x]<0? x:d[x]=Find(x)
}
```

```
void Union(int x,int y){
    int g1=Find(x), g2=Find(y);
    
    if(g1!=g2){
        d[g1]+=d[g2];
        d[g2]=x;
    }
}
```

```
    int g = Find(x);
    int size = -d[g];
```
## Minimum Spanning Tree最小生成樹

### Question
給定一張有權無向圖，在這張圖選一些邊的子集，形成一棵包含所有節點的樹，所選的邊權重總合要最小

Disjoint set的發明與解決此問題息息相關
![](https://i.imgur.com/3XOskYa.png)

### 將MST轉成DSU問題
+ 樹為一連通圖，所有點同屬於一個集合
+ 在初始沒選邊時，每個點自己屬於一個集合
+ 在選了一條邊使用後，即相當於兩點所屬集合，合併成一個集合
+ 若最後剩下一個集合時，代表所選的邊已經可以構成樹了

### Kruskal演算法
+ 先把所有邊按照權重從小到大sort
+ 迭代每條邊，若該邊兩點仍屬於不同集合，即使用這條邊，並合併兩點所屬的集合
+ 當所有集合已合併成只剩一個=>結束
+ 將所選的邊的權重加起來=>最小生成樹的成本

Reference
https://docs.google.com/presentation/d/1FZ9yho_Vz3GQKH6nV_eiP3doc9MlvmyzNyWaUkQf9hw/edit?fbclid=IwAR1tUJs87lod-UhF0MTs_jJ0VF6DOUQcK0xYdOIv9yO9jhZOvH846O2JzuM#slide=id.g4d9daa2e07_0_119