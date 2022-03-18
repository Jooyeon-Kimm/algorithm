#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void quicksort(int low,int high);
void partition(int low,int high,int& pivotpoint);

vector<int> S, U;
int cnt = 0;

int main(){
    int n; // 정수의 개수
    cin >> n;
    
    int a; // 벡터 V의 원소
    // 원소 집어넣기
    for(int i=0; i<n; i++){
        cin >> a;
        S.push_back(a);
        U.push_back(a);
    }

    int pivot = S[0];
    partition(0, n-1, pivot);
    
    for(int i=0; i<n-1; i++){
        cout << S[i] << " ";
    } cout << S[n-1] << endl;
    cnt = 0;
    
    for(int i=0; i<n; i++){
        S[i] = U[i];
    }
    
    quicksort(0,n-1);
    cout << cnt << endl; 
    
    // 벡터 출력
    for(int i=0; i<n-1; i++){
        cout << S[i] << " ";
    } cout << S[n-1] << endl;
    
}



void quicksort(int low,int high){
    int pivotpoint;
    if(low < high){
        partition(low, high, pivotpoint);
        quicksort(low, pivotpoint-1);
        quicksort(pivotpoint+1, high);
    }
} 

void partition(int low,int high,int& pivotpoint){
    cnt++; // partition 함수 호출 횟수
    
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
