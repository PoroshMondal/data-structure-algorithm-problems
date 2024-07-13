# Data Structure and Algorithms

## Arrays
- LinearArray
    - Traverse LinearArray
    - Item Insertion in LA
    - Item Deletion in LA
    - Bubble sort in Linear Array
 
### Bubble Sort
**Algorithm:** (Bubble Sort) BUBBLE (DATA, N)
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
**Algorithm:** (Linear Search) LINEAR (DATA, N, ITEM, LOC)
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



