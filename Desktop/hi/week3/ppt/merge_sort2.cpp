/*
    mergesort2와 비교했을 때
    공간복잡도가 절반으로 줄어듦
    
    mergesort는 원래 배열 S를 
    배열 U와 배열 V, 두개의 배열로 나눔
    
    mergesort2는 원래 배열 S를 사용하면서
    배열 U, 배열 하나만 사용한다.
    
    merge sort의 문제점: n개의 extra space를 사용해야함
    > quick sort보다 느리다.
    
    S(n)을 O(1)으로 바꿀 수 없을까? 
    > 퀵 정렬 (SWAP 으로 반띵 정렬)
    컴바인할 필요 없다. SWAP하면서 이미 합병되어있음
*/

#include <iostream>
#include <vector>
using namespace std;

void mergesort2(int low, int high);
void merge2(int low, int mid, int high);

void mergesort2(int low,int high){
    if(low < high){
        int mid=(low+high)/2;
        mergesort2(low,mid);
        mergesort2(mid+1,high);
        merge2(low,mid,high);
    }
}

void merge2(int low,int mid,int high){
    cnt++;
    int i=low, j=mid+1, k=0;
    vector<int> U(high-low+1);
    
    while(i<=mid && j<=high)
        U[k++]=(S[i]<S[j]) ? S[i++]:S[j++];
    
    if(i>mid)
        //move S[j] through S[high] to U[k] through U[high]
        while(j<=high)
            U[k++]=S[j++];
    
    else //j>high
        //move S[i] through S[mid] to U[k] through U[high]
        while(i<=mid)
            U[k++]=S[i++]; 
    
    //move U[0] through U[high-low+1] to S[low] through S[high]
    for(int t=low; t<=high; t++)
        S[t] = U[t-low];
    
}
