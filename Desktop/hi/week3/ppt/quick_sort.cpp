/*
    퀵 정렬의 Worst Case: 이미 정렬되어있는 수 다시 정렬할 때
    O(n) = n^2
    
    퀵 정렬의 Average Case: O(n/2)
*/

void quicksort(int low,int high){
    int pivotpoint;
    if(low < high){
        partition(low, high, pivotpoint);
        quicksort(low, pivotpoint-1);
        quicksort(pivotpoint+1, high);
    }
} 

void partition(int low,int high,int& pivotpoint){
    int pivotitem = S[low];
    int j = low;
    
    for(int i=low+1; i<=high; i++)
        if(S[i] < pivotitem){
            j++;
            swap(S[i],S[j]);
        }
    pivotpoint = j;
    swap(S[low],S[pivotpoint]);
}
