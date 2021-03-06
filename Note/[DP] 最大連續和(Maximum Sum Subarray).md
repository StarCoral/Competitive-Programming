# [DP] 最大連續和(Maximum Sum Subarray)

## Define
輸入一串長度為n的整數序列，求最大連續和的值

### Input
第一行有一個數字n (1<=n<=100)
第二行有n個數字

### Output
最大的連續和

### Example Input
5
2 -1 5 -4 3

### Example Output
6

---

## Explain

以表格來看

Input: 2  -1  5  -4   3

|     |  2 | -1 |  5 | -4 |  3 |
| --- | -- | -- | -- | -- | -- |
| sum |  2 |  1 |  6 |  2 |  5 |
| max |  2 |  2 |  6 |  6 |  6 |


Input: -3   1  4   3   -1

|     | -3 |  1 |  4 |  3 | -1 |
| --- | -- | -- | -- | -- | -- |
| sum | -3 |  1 |  5 |  8 |  7 | 
| max | -3 |  1 |  5 |  8 |  8 |

`// sum<0時 sum歸零`


針對連續元素和
考量前面的元素和有兩種作法：
1. 不要前面的元素和，從自己開始算
2. 要前面的元素和，並且把自己加進去

=> 歸零的原因：
   當前面的元素和是負數時，就不要加，
   加入反而會變小

```
kadane(Array){

    generalMaximum = currentMaximum = Array[0]

    for (i = 1 until n) {
        currentMaximum = maximum of(Array[i], currentMaximum + Array[i]);
        if(currentMaximum >= generalMaximum) 
            generalMaximum = currentMaximum;
    }

    return generalMaximum;

}
```
Reference
https://aikosenoo.pixnet.net/blog/post/7442660
http://bedirtapkan.com/Kadane%27s-Algorithm-2/