#include <iostream>
using namespace std;

// 피보나치 수열 함수
// 시간 복잡도: O(n)
// 공간 복잡도: O(1)
typedef unsigned long long LongInt;
LongInt fib(int n, int max){
    LongInt a, b, c;
    
   if (n<2)
       return n;
    
    else{
        int a = 0, b = 1;
        for(int i=2; i<=n; i++){
            c = (a+b) % max;
            a = b;
            b = c; // SWAP  
        }
        return b;
    }

}

// 메인 함수
int main(){
    int n, max;
    cin >> n;
    cin >> max;

    cout << fib(n, max);
}

