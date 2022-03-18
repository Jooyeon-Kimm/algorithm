#include <iostream>
#include <vector>
using namespace std;
void mergesort(int n,vector<int>& S);
void merge(int h,int m, vector<int>& U,vector<int>& V,vector<int>& S);

/*
merge의 시간복잡도
O(h+m): 선형 시간복잡도
O(n)

mergesort의 시간복잡도
𝑊𝑛=𝑊ℎ+ℎ+𝑚−1
𝑊(𝑛)=2𝑊(𝑛/2)+𝑛−1
𝑊𝑛=𝑛lg𝑛−𝑛−1∈Θ(𝑛lg𝑛)

mergesort의 공간복잡도
S(n) = 2n
을
S(n) = n 으로 줄이는 방법?
둘다 O(n) = n
*/

// 메인함수
int main(){
    cout << "Input the vector size n >>";
    int n; // vector size
    cin >> n;
    
    // 벡터 V 선언
    vector<int> V;
    
    // 랜덤 수 V에 집어넣기
    for(int i=0; i<=n; i++){
        int a = (rand()%100 - 10);
        V.push_back(a);
    }
    
    // 벡터 출력
    cout << "Randomly created vector is: " << endl;
    for(int i=1; i<=n; i++){
        cout << V[i] << " ";
    }
    cout << endl << endl;
    
    // 벡터 합병 정렬
    mergesort(n, V);
    
    // 벡터 정렬 결과 출력
    cout <<"The result of merge sort is: " << endl;
    for(int i=1; i<=n; i++){
        cout << V[i] << " ";
    }
}


void mergesort(int n, vector<int>& S){
    if(n>1){
        int h=n/2, m=n-h;
        vector<int> U(h+1),V(m+1);
        
        //copy S[1] through S[h] to U[1] through U[h]
        for(int i=1;i<=h;i++)
            U[i]=S[i];
        
        //copy S[h+1] through S[n] to V[1] through V[m]
        for(int i=h+1;i<=n;i++)
            V[i-h]=S[i];
        
        // 나눠진 배열 U와 V 각각 정렬
        mergesort(h,U);
        mergesort(m,V);
        
        // 배열 U, V를 비교 합병 정렬
        merge(h,m,U,V,S);
    }
}


void merge(int h,int m, vector<int>& U,vector<int>& V,vector<int>& S){
    int i = 1, j = 1, k = 1;
    while(i <= h && j <= m) // 둘 중 하나가 끝날 때까지
        S[k++]= (U[i]<V[j]) ? U[i++]:V[j++]; // 복사한 다음에 인덱스 증가시킴
    
    if(i>h) //i>h: V에 남은 놈을 S로 옮겨라...
        // copy V[j] through V[m] to S[k] through S[h+m]
        while(j<=m)
            S[k++]=V[j++];
    
    else //j>m : U에 남아있는 놈을 S로 옮겨라...
        //copy U[i] through U[h] to S[k] through S[h+m]
        while(i<=h)
            S[k++]=U[i++];
}



