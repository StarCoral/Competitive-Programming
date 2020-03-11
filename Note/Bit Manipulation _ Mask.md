# Bit Manipulation / Mask

## Common operations
+ and    : &
+ or     : |
+ xor    : ^
+ reverse : ~
+ left shift ,fill 0 on right : <<
+ right shift : >>

### Means

+ Masking = keep/change/remove a desired part of information.
+ Bit-Masking = imposing mask over bits
  

### Bitwise ANDing 
extract a subset of the bits in the value

```
     1 1 1 0 1 1 0 1   [input]
(&)  0 0 1 1 1 1 0 0    [mask]
------------------------------
     0 0 1 0 1 1 0 0  [output]
```

中間的四個bits被保留

### Bitwise ORing
set a subset of the bits in the value


### Bitwise XORing
toggle a subset of the bits in the value

```
     1 1 1 0 1 1 0 1   [input]
(^)  0 0 1 1 1 1 0 0    [mask]
------------------------------
     1 1 0 1 0 0 0 1  [output]
```
中間的四個bits 1->0,0->1 (be flipped)

## Improve Efficiency

+ Odd or Even : x&1; // 1&1 = 1 -> odd
+ Multiply 2 : x <<=1;
+ Power of 2 : 
  + x && (!(x & (x-1))) ; //test x is power of 2? if =1 ->Yes
  + 1<<x;
+ change sign：~a+1
+ exchange：
```
    swap(a,b){
        a = a^b;
        b = a;
        a = a^b;
    }
    
    
/*
 * void Swap(int a, int b){
 *    if(a!=b){
 *        a ^= b;   ------- 1.
 *        b ^= a;   ------- 2.
 *        a ^= b;   ------- 3.
 *    }
 * }  
 * 
 *
 * 1. a^=b -> a=a^b
 *
 * 2. b^=a -> b=b^(a^b) 交換率: b=b^b^a
 *    又一數自己xor的結果為0 且 任何數與0xor不變，
 *    故b=a
 *
 * 3. a^=b -> a=a^b，由上知a=a^b,b=a,
 *    故a=(a^b)^a => a=b
 */
```

Reference
https://stackoverflow.com/questions/10493411/what-is-bit-masking