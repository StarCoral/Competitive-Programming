# Template

## Introduction
+ 是一種將資料型態參數化的功能。
+ 將資料型態資訊自程式碼中抽離，取而代之的是簡化的符號(T1,T2,...)。
+ 再利用`編譯器`透過類似`巨集代換`的方式，根據樣板內容產生實際的程式碼。
+ 可以分為:
    + **Function Template(函式樣板)**
    + **Class Template(類別樣板)**

## Function Template

### Question
如果想要設計一些函式來列印出`不同型態`的陣列內容，這些函式的參數列定義的`資料型態`必須設定`不同的型態`，該如何設計這些函式呢?

> Solution
+ 一般函式(Function):描述**各種可能用到的型態**，每個函式取**不同的名稱**
+ 函式重載(Function Overloading):描述**各種可能用到的型態**，每個函式取**相同的名稱**
+ 函式樣板(Function Template):描述**一個型態**，**一個函數名稱**

## 一般函式(Function)

### Introduction
描述各個函式，**每個函式都取不同名稱**，將可能用到的**型態**對應到各個函式中
### Pros
一般程式語言皆支援這種語法
### Cons
+ 程式設計師不易記住所有函式名稱，造成開發程式的複雜度
+ 容易因不小心函式使用錯誤，造成程式錯誤

## 函式重載(Function Overloading)

### Introduction
描述各個函式，**每個函式都取相同名稱**，將可能用到的**型態**對應到各個函式中
### Pros
+ 程式設計師不需記一堆函式名稱
+ 編譯器會自動將呼叫的函式對應到同參數型態的函式中
### Cons
雖比起一般函式的做法方便，但差不多的程式碼還是要寫很多遍

## 函式樣板(Function Template)

### Introduction
描述一個函式，**只需一個名稱**，使用樣板參數取替資料型態。
### Pros
+ 程式設計師除了不需記一堆函式名稱之外， 也不需要寫一堆類似的程式碼
+ 編譯器**自動產生**需要的程式碼(重載函式)，然後把呼叫的函式對應到同參數型態的函式中
+ 程式碼一般**較小**(用到的型態才會產生程式)
### Cons
程式功能`缺乏彈性`(只能描述類似的程式行為)

---
## Function Template

+ 以關鍵字`template`起始一個樣版宣告，後接參數。
+ C/C++ 的程式語法，是以()括起參數。而`Template`語法，則以<>括起參數。
+ 樣板所用參數之完整稱呼是「樣本參數(templateparameters)」，慣例以T,T1,T2等作為樣版參數名稱。
+ 接著再寫上函式的程式碼樣版，又稱為原型(prototype)。
+ 函式原型的函式名稱即為函式樣板的名稱。
```
template < 樣板參數型態 樣板參數名 , …其他樣板參數 >
原型回傳型態 函式名稱(參數型態 原型參數名, ...)
{
    程式碼;
}
```
![](https://i.imgur.com/AW8nYZU.png)

+ 參數型態可用關鍵字class或typename表示泛用型態(即任何型態);或是已宣告的資料型態，ex: int、自定義類
+ 原型中的參數型態若是已宣告的資料型態，則是一種特殊化的函式樣板
```
#include<bits/stdc++.h>
using namespace std;

int Add(int a, int b){
    return a+b;
}

template<class T>
T Add(T a, T b){
    return a+b;
}

int main(){
    int c1;
    double c2;
    c1 = Add(10,20);
    c2 = Add(10.3,20.4);
    return 0;
}
```

## Class Template
+ 語法與Function Template相同，差別在其`原型為類別`。
+ 此外，樣版參數可以設定預設值
+ 套用類別樣版的語法則是以樣版名稱括起參數值，括號用<>
```
template<樣板參數型態 樣版參數名,...>
class 類別名稱 <部分特殊化型態,...>
{
   原型回傳型態 函式名稱(參數型態 原型參數名, ...) ;
   參數型態 變數名稱; 
}

template < 樣板參數型態 樣板參數名 , … >
原型回傳型態 類別名稱< 樣板參數型態 樣板參數名 , … > ::函式名稱<部份特殊化型態,…>
{
    程式碼;
}
類別名稱
```
1. Example1
```
#include<bits/stdc++.h>
using namespace std;

class myClass
{
public:
    void display(int n){
        a = n;
        cout<<a<<'\n';
    }
    int a;
};

template<class T>
class myTClass{
public:
    void display(T n)
    {
        a = n;
        cout << a << endl;
    }
    T a;
};

int main(){
    myTclass<int> a;
    myTclass<double>x;
    a.display(10);
    x.display(10.4);
    return 0;
}
```
2. Example2
```
#include<bits/stdc++.h>
using namespace std;

class myClass{
public:
    void display(int n , char ch){
        a = n;
        b = ch;
        cout<<a<<' '<<b<<'\n';
    }
    int a;
    char b;
};

template<class T1, class T2>
class myTClass
{
public: 
    void display(T1 n, T2 ch){
        a = n;
        b = ch;
        cout<<a<<' '<<b<<'\n';
    }
    T1 a;
    T2 b;
};

int main(){
    myTClass<int, char> a;
    myTClass<double, double> x;
    a.display(10, 'A');
    x.display(10.4, 20.5);
    return 0;
}
```

### Reference
http://homepage.ntu.edu.tw/~d02922022/AdvC/ppt/Part%202/08%20C++%E6%A8%A3%E6%9D%BF(Template).pdf