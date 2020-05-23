#Question

Akansha has done the first task. Now, her mother tells her to help her Grandfather. Her Grandfather has weak vision.  
   
He wants to read an article. Article contains characters, these characters can be letters of the English alphabet, digits and ‘.’ character. She had an app, which used to scan each character and replace that by a matrix of ZR rows and ZR columns.   

All the characters of the matrix with dimensions ZR and ZC are same and equal to that scanned character.  
  
Can you help Akansha by writing a programme which enlarges the input matrix of characters in the same as her app used to do.

###Input Format:

The first line of input contains 4 integers R, C, ZR, ZC. R and C denotes the dimensions of input matrix and ZR and ZC are the dimension of matrix to which each character is enlarged to.
The following R lines contains C space separated characters.

###Constraints:

Time Limit: 1 second
1 <= R
C <= 50 
1 <= ZR
ZC <= 5

###Output format:

Print the enlarged matrix of dimensions: R * ZR rows, C * ZC columns

####Sample Input:

```
3 3 1 2 
.x. 
x.x 
.x.
```

####Sample Output:

```
..xx.. 
xx..xx 
..xx..  
```
