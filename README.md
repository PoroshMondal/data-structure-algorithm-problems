# Data Structure and Algorithms

## Arrays
- LinearArray
    - Traverse LinearArray
    - Item Insertion in LA
    - Item Deletion in LA
    - Bubble sort in Linear Array
    - Linear Search in LA
    - Binary Search in LA
 
### Bubble Sort
**Algorithm:** (Bubble Sort) BUBBLE (DATA, N) </br>
Here DATA is an array with N elements. This algorithm sorts the elements in DATA.

```
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
```

**Notes:** The technique of Bubble Sort is to pass the largest elements to the last.
If the elements or item N=8, total passes are N-1 = 8-1 = 7.

### Linear Search
**Algorithm:** (Linear Search) LINEAR (DATA, N, ITEM, LOC) </br>
Here DATA is a Linear Array with N elements, and ITEM is a given search element of information. This algorithm finds the location of the search ITEM in the DATA or sets LOC:=0 if the search is unsuccessful.

```
1. Set DATA[N+1] = ITEM [Insert ITEM at the end of DATA]
2. Set LOC:=1 [Initialize counter]
3. Repeat while LOC<=N and DATA[LOC]!=ITEM [Serach/looking the ITEM in the DATA]
       set LOC:= LOC + 1
   [End of loop]
4. [successful?] If LOC = n+1, then set LOC:=0
5. Exit. 
```

**Note:** The technique of Linear Search is to set the ITEM to the end of the Array and start searching by comparing the item to each element of DATA(Linear Array) 

### Binary Search
**Algorithm:** (Binary Search) BINARY(DATA, LB, UB, ITEM, LOC) </br>
Here DATA is a sorted array with lower bound LB and upper bound UB, and ITEM is a given element of information to be searched in the array. The variables BEG, END, and MID denote respectively the beginning, end, and middle location of a segment of the elements of DATA. So, this algorithm finds the location LOC of ITEM in the array DATA or sets the location LOC=NULL

```
1. Set BEG:= LB, END:= UB and MID = INT((BEG+END)/2) [Initialize the segment variables]
2. Repeat Steps 3 and 4 while BEG<=END and DATA[MID]!=ITEM
3.     If ITEM<DATA[MID], then:
           set END:= MID - 1
       Else
           Set BEG:= MID + 1
   [End of If Statement]
4. Set MID := INT((BEG + END)/2)
  [End of Step 2 loop]
5. If DATA[MID] = ITEM, then,
          set LOC:= MID
   Else
          set LOC:= NULL
   [End of If structure]
 6. Exit.
```

**Note:** The technique of Binary Search is to Divide the array in the middle and decide whether the ITEM exists in the middle, if not then decide whether the ITEM is on the left or right side by comparing the ITEM value with DATA[MID]. It will do it until the condition of BEG<=END gets false. This means, that the algorithm eventually arrives at the stage BEG = END = MID and at that time the BEN value is larger than END BEN>END.

**Limits:** The DATA array or list must be sorted. To resolve this some other Data Structure can be used such as Linked List, Binary Search Tree (BST) to store the data.

### Multidimensional Arrays
A two-dimensional m*n array A is a collection of m.n data elements.

Two-dimensional arrays are called matrices in mathematics and tables in business applications; hence two-dimensional arrays are sometimes called matrix arrays.

For a three-dimensional array, suppose B is a three-dimensional 2*4*3 array containing 24 elements which appear in three layers called pages where each page consists of the 2*4 rectangular array of elements with the same third subscript. So, the subscripts of a three-dimensional array are called, respectively, the row, column, and pages.

**Algorithm:** (Matrix Multiplication) MATMUL(A, B, C, M, P, N) </br>
Here A is an M * P matrix array, and B is a P * N matrix array. This algorithm stores the product of A and B in an M * N matrix array C. P is used as a column in matrix A and as a row in matrix B. M is used for the number of rows in matrix A, and N is used as the number of columns in matrix B.

```
1. Repeat steps 2 to 4 for I = 1 to M:
2.     Repeat steps 3 and 4 for J = 1 to N:
3.         Set C[I,J] := 0 [Initialize C[I,J] ]
4.         Repeat for K = 1 to P:
               C[I,J] := C[I,J] + A[I,K] * B[K,J]
5. Exit
```

**Note**: Multiplication rules for two matrices is that the matrices A and B can be multiplied if the number of columns of matrix A is equal to the rows of matrix B. 
