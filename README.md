# Data Structure and Algorithms

## Arrays
- LinearArray
    - Traverse LinearArray
    - Item Insertion in LA
    - Item Deletion in LA
    - Bubble sort in Linear Array
 
### Bubble Sort
** Algorithm: ** (Bubble Sort) BUBBLE (DATA, N)
Here DATA is an array with N elements. This algorithm sorts the elements in DATA.

1. Repeat steps 2 and 3 for K=1 to N-1.
2.     set PTR:= 1 [Initialize the pass pointer]
3.     Repeat while PTR<=N-K [Executes the passes]
4.         (a) If DATA[PTR]>DATA[PTR+1]
5.                 Interchange the DATA[PTR] and DATA[PTR+1]
6.             [End of if structure]
7.         (b) Set PTR:= PTR +1
8.     [End of inner loop]
9. [End of outer loop]
10. Exit.

**Notes:** The technique of Bubble Sort is passes the largest elements to the last.
If the elements or item N=8, total passes are N-1 = 8-1 = 7.
