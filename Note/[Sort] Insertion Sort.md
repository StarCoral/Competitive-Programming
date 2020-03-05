# [Sort] Insertion Sort

## How to do?

將資料分成**已排序**、**未排序**兩部份  
依序由未排序中的第一筆(正處理的值)，插入到已排序中的適當位置  
插入時由右而左比較，直到遇到第一個比正處理的值小的值，再插入  
比較時，若遇到的值比正處理的值大或相等，則將值往右移  

### Time Complexity
+ Best Case：Ο(1)  
  當資料的順序恰好為由小到大時，每回合只需比較1次  
+ Worst Case：Ο(n2)  
  當資料的順序恰好為由大到小時，第i回合需比i次  
+ Average Case：Ο(n2)  
  第n筆資料，平均比較n/2次  

## Space Complexity

+ θ(1) //in-place

## Code

``` cpp
#include<bits/stdc++.h>
using namespace std;

void InsertionSort(int *arr, int size){
    ios::sync_with_stdio(0);
    cin.tie(0);
	for(int i = 1 ; i < size ; i++){
		int key = arr[i];
		int j = i - 1;
        while(key < arr[j] && j >= 0){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
	}
}

int main(){
    int arr[6] = {5,3,2,1,6,4};
    cout<<"orign: ";
    for(auto a : arr){
        cout<<a<<' ';
    }
    cout<<'\n';

    InsertionSort(arr,6);
    cout<<"sorted: ";
    for(auto a : arr){
        cout<<a<<' ';
    }
    cout<<'\n';
}
```
## Reference

http://notepad.yehyeh.net/Content/Algorithm/Sort/Insertion/1.php

