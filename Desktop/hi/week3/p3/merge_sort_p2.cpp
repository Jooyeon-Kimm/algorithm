#include <iostream>
#include <vector>
using namespace std;

void merge(int u_size, int v_size, vector<int>& S, vector<int>& U, vector<int>&V);
void merge_sort(int n, vector<int>& S);


// 메인함수
int main(){
    cout << "Input the vector size n >>";
    int n; // vector size
    cin >> n;
    
    // 벡터 V 선언
    vector<int> V;
    
    // n개의 수 V에 집어넣기
    cout << "Input elements of the vector V" << endl;
    for(int i=0; i<n; i++){
        int a;
        cin >> a;
        V.push_back(a);
    }
    cout << endl;
    
    // 벡터 출력
    cout << "Created vector is: " << endl;
    for(int i=0; i<=n; i++){
        cout << V[i] << " ";
        cout << "vector(" << i <<"): " << V[i] << endl;
    }

    // 벡터 합병 정렬
    merge_sort(n, V);
    
    // 벡터 정렬 결과 출력
    cout << endl << "The result of merge sort is: " << endl;
    for(int i=1; i<=n; i++){
        cout << V[i] << " ";
    }
    cout << endl;
}


// 합병정렬 함수
void merge(int u_size, int v_size, vector<int>& S, vector<int>& U, vector<int>&V){
    int k = 1; // 배열 S의 인덱스
    int i = 1; // 배열 U의 인덱스
    int j = 1; // 배열 V의 인덱스
    
    // 배열 U, V 둘 중 하나라도 탐색이 끝나기 전까지
    // 배열 S에 둘중 작은 수 넣어주기
    while(i<=u_size && j<= v_size){
        if (U[i]>=V[j]){
            S[k] = V[j];
            k++;
            j++;
        }
        else{
            S[k] = U[i];
            k++;
            i++;
        }
    }
    
    // 배열 U의 탐색이 끝났다면
    // V에 남은 수 모두 S로 옮겨오기
    if (i>u_size) {
        while(j<=v_size){
            S[k] = V[j];
            k++;
            j++;
        }
    }
    
    // 배열 V의 탐색이 끝났다면
    // U에 남은 수 모두 S로 옮겨오기
    if (j>v_size){
        while(i<=u_size){
            S[k] = U[i];
            k++;
            i++;
        }
    }

}


// 나눈 배열 정렬하고 합병정렬 함수 호출하는 함수
void merge_sort(int n, vector<int>& S){
    // 배열 U, V 생성
    int u_size = n / 2;
    int v_size = n - u_size;
    vector<int> U(u_size+1),V(v_size+1);
    
    // n이 1개 이하이면 정렬할 필요 없으므로 종료
    if (n<=1) return;
    
    // n이 2개 이상이라면
    // 배열 S의 인덱스 1부터 반 또는 반 이전까지
    // 배열 U에 집어넣는다
    for(int i=1; i<=u_size; i++){
        U[i] = S[i];
    }
    
    // 배열 S의 인덱스 반 이후 또는 반부터 끝까지
    // 배열 V에 집어넣는다
    for(int i=u_size+1; i<=n; i++){
        V[i-u_size] = S[i];
    }
    
    // 배열 U, V 정렬
    merge_sort(u_size, U);
    merge_sort(v_size, V);
    
    // 배열 U,V 합병정렬
    merge(u_size, v_size, S, U, V);
}
