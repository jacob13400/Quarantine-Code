# Question

There is a narrow escape. Only one cow can pass through it or one row of cows can pass through it. One row of cows means 'n' cows are arranged in such a way that each cow, except the first cow, is behind another cow.  

One row of cows can easily pass through the passage. The rows of cows move from both directions. The problem arises when two rows of cows, moving in opposite directions, want to pass through the passage.  

In such a case, in each second, one cow jumps over the other, in such a way, places of both cows are swapped (both the cows are still moving in opposite direction).
We want to know the order of cows after T seconds.

### Input format:

The first line of input contains two integers N1 and N2, the number of cows in each row. 
The following two lines of input contains order of cows in those rows. Each cow is uniquely characterised by an uppercase letter. This letter is unique between both rows of column.
The last line of input contains a integer T.  

### Constraints

Time Limit: 1 second  
0 <= T <= 50

### Output Format:

Print the order of cows as explained in the task. Our viewpoint is such that the first row of cows comes from our left side and the other one from our right side. 

#### Sample Input:

```
3 3
ABC
DEF
2
```

#### Sample Output:

```
 CDBEAF
```

#### Explanation:

1st row of cows, which comes from left side, is: CBA (this order is written as per the viewpoint), with cow named A leading the pack.  

2nd row of cows, which comes from right side, is: DEF, with cow named D leading the pack.  

After the 1st second, the order becomes: CBDAEF
After the 2nd second, the order becomes: CDBEAF