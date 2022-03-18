/* 1.2  The Importance of Developing Efficient Algorithms
▪Developing an efficientalgorithm:
We do not need to recomputethe same value over and over again.
When a value is computed, we save it in an array. (memoization)
Then, we can reusethe saved value whenever we need it.

동적 계획법: 한 번 계산한 것은 기억해라!
*/
#include <iostream>
#include <vector>
using namespace std;

// 피보나치 수열 함수
typedef unsigned long long LongInt;
LongInt fib2(int n){
    vector<LongInt> F; // 계산값 저장할 벡터
    if(n <= 1)
        return n;
    
    else{
        F.push_back(0);
        F.push_back(1);
        
        for(int i=2; i<=n; i++)
            F.push_back( F[i-1]+F[i-2] );
        return F[n];
    }
}

/*
장점: 시간 복잡도 감소
단점: 공간 복잡도 증가

시간 복잡도: O(n)
공간 복잡도: O(n)
*/

int main(){
    cout << "I'll let you know the nth numeber of Fibonacci Sequencne." << endl;
    cout << "Input n >> ";
    int n;
    cin >> n;
    
    cout << fib2(n) << endl;
}