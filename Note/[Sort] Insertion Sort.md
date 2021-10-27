# [Sort] Insertion Sort

## How to do?

將資料分成**已排序**、**未排序**兩部份  
依序由未排序中的第一筆(正處理的值)，插入到已排序中的適當位置  
插入時由右而左比較，直到遇到第一個比正處理的值小的值，再插入  
比較時，若遇到的值比正處理的值大或相等，則將值往右移  

### Time Complexity
+ Best Case：Ο(n)  
  當資料的順序恰好為由小到大時，每回合while-loop只需比較1次  
+ Worst Case：Ο(n^2)  
  當資料的順序恰好為由大到小時，第j回合while-loop需比j次  
+ Average Case：Ο(n^2)  
  第n筆資料，while-loop平均比較n/2次  

## Space Complexity

+ θ(n) //in-place

## Code

``` cpp
#include<bits/stdc++.h>
using namespace std;

void InsertionSort(int *arr, int size){
    ios::sync_with_stdio(0);
    cin.tie(0);
	
	for(int i = 1; i < size ; i++){
		int key = arr[i], j = i - 1;
		while(j >= 0 && arr[j] > key) {
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

    InsertionSort(arr , 6);
    cout<<"sorted: ";
    for(auto a : arr){
        cout<<a<<' ';
    }
    cout<<'\n';
}

```
