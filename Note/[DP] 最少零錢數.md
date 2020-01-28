# [DP] 最少零錢數

## Define
給定n元，找最少零錢數

### Input
硬幣面額種類和要換的零錢金額

ex 硬幣面額種類= {33,24,12,5,1}
   要換的零錢金額 = 36
### Output
所需攜帶最少的硬幣數目

上述例子答案為2 (24+12)

### Intuition(Wrong)

**[Wrong]**
先選最大面額硬幣，因此挑選面額33元，剩下3元只能全部換成面額1元
=> 共需1+3 = 4個硬幣

**[Correct]**
再細心觀察，會發現只需要一個面額24元和12元的硬幣
=> 共需2個硬幣

### How to find the correct answer?

+ 先思考如果每個面額的硬幣都試試看會如何?

    36 = `33`+3 = `24`+12 = `12`+24 = `5`+31 = `1`+35

    其中`{33,24,12,5,1}`就是可兌換的所有硬幣面額，
    而剩下的3、12、24、31、35，也可以分別寫成可以兌換的面額組合。
    
    Ex:  3 = `1`+2 ，
        12 = `12` = `5`+7
        以此類推，直到所有可以兌換的硬幣組合列出為止。

+ 找出兌換硬幣的最少數目:
    
    因此36元能兌換的硬幣數目可以如此表示:

    **f(36) = min(1+f(3),1+f(12),1+f(24),1+f(31),1+f(35))**

    f(N): 表示兌換N元所需的最小硬幣數目
    上式中的1分別表示兌換面額33元、24元、12元、5元及1元硬幣數目

    因為1是共同項，可以簡化為:

    **f(36) = 1 + min(f(3),f(12),f(24),f(31),f(35))**

+ 歸納->規則:

f(0) = 0  
f(n) = 1+ min(f(n-c1),....,f(n-ck)) 
其中 n > ci  (1<i<k) 且 ci為硬幣面額


```
coin_changing{
    step1: if(z<=0) f(z) = 0;
    step2: for(int k= 1 ; k <= n ; k++){
                f(z) = 1+min({f(z-c1),f(z-c2),...,f(z-ck)});
            }
}
```

+ 例題:
[GreenJudge](https://github.com/StarCoral/Competitive-Programming/blob/master/GreenJudge/b028.cpp)


Reference
https://docs.google.com/presentation/d/1F7Yo3WkBMYPqHTgG9gBnUI3f-Utdil2mAmUGsFHFftM/pub?start=false&loop=false&delayms=3000&source=post_page-----5727805e9e42----------------------&slide=id.g1aeab16313_2_56
