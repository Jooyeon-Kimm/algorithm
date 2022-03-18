/* Fibonacci sequence
is defined recursively as follows:
    𝑓0=0
    𝑓1=1
    𝑓𝑛=𝑓𝑛−1+𝑓𝑛−2 for 𝑛≥2
*/

#include <iostream>
using namespace std;

// 피보나치 수열 구하는 함수
typedef unsigned long long LongInt;
LongInt fib(LongInt n){
    if(n<=1)
        return n;
    else
        return fib(n-1)+fib(n-2);
}

int main(){
    cout << "I'll let you know the nth numeber of Fibonacci Sequencne." << endl;
    cout << "Input n >> ";
    int n;
    cin >> n;
    
    cout << fib(n) << endl;
}

/*
T(n) >= 2^ (n/2)
지수식의 시간복잡도는 풀기 어렵다.
왜? 중복 호출 때문에
*/