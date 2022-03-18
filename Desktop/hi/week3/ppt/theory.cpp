/*
1. 분할 정복
2. 
3. 
4. 
5. 
6. 
*/



/*
2.1   Binary Search
2.2   Mergesort
2.3   The Divide-and-Conquer Approach
2.4   Quicksort (Partition Exchange Sort)
2.5   Strassen’s Matrix Multiplication Algorithm
2.6   Arithmetic with Large Integers << 매우 어렵다
2.7   Determining Thresholds
2.8   When Not to Use Divide-and-Conquer
*/

/*
재귀 (Divide&Conquer) -> 반복 (Dynamic Programming)


재귀:
1. exit condition
2. 
*/



/*
마스터 정리 암기 (재귀함수)
T(n) == T(n/2) 이면
O(log n)

𝑊(𝑛)=lg𝑛+1∈Θ(lg𝑛)
*/


/*
1.
for (i=1; i<n; i++)
    basic operation;
시간복잡도: T(n-1) >> O(n)

2.
for (i=1; i<n; i++)
    for (k=1; k<n; k++)
        basic operation;
시간복잡도: O(n^2)

3.
for (i=1; i<n; i++)
    basic operation;
for (k=1; k<n; k++)
    basic operation;
시간복잡도: O(n)

4.
for (i=1; i<n; i++)
    basic operation;
for (k=1; k<m; k++)
    basic operation;
시간복잡도: O(n+m)

5.
for (i=1; i<n; i++)
    for (k=1; k<m; k++)
        basic operation;
시간복잡도: O(n*m) << 2차 시간복잡도


6.
for (i=1; i<n; i*=2)
    basic operation;
시간복잡도: O(log2 n)

7.
for (i=1; i<n; i*=2
    for (k=m; k>1; k/=2)
        basic operation;
T(n) = (log n)^2
*/

