#include <iostream>
#include <vector>
using namespace std;

// sequential search 함수
void seqsearch(int n, vector<int> S, int x, int &location){
	location = 0;
	while(location <n && S[location] != x){
		location++;
	}
	if(location >=n){
		location -=1;
	}
}

// main 함수
int main(){
    // 리스트 원소의 개수 입력하기
    cout << "Input the number of elements >>";
	int n; // 리스트 원소의 개수
	cin >> n ;
    vector<int> S(n, 0); // variable length, on demand array (길이 조절 가능 배열)
    
    
    /* 0으로 초기화된 배열 원소 모두 출력하기
    for(int i=0; i<n; i++){
        cout << S[i] << " ";
    }
    cout << endl;
    */
    
    // 배열 원소 입력하기
    cout << "Input the elements" << endl;
    for(int i=0; i<n; i++){
        cin >> S[i]; 
    }
    
    // 배열 원소 모두 출력하기
    cout << "Print out all the elements with indexes" << endl;
    for(int i=0; i<n; i++){
        cout << "index(" << i <<"): " << S[i] << endl;
    }
    cout << endl;

    // 배열에서 인덱스 찾을 원소 x 입력하기
    cout << "Input the integer you want to find its index" << endl;
	int x;
	cin >> x;

    // x 인덱스 찾아서 출력하기
	int location;
	seqsearch(n, S, x, location);
	cout << "Index of the element " << x << " is " << location << endl;
}