/* Fibonacci sequence
is defined recursively as follows:
    π0=0
    π1=1
    ππ=ππβ1+ππβ2 for πβ₯2
*/

#include <iostream>
using namespace std;

// νΌλ³΄λμΉ μμ΄ κ΅¬νλ ν¨μ
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
μ§μμμ μκ°λ³΅μ‘λλ νκΈ° μ΄λ ΅λ€.
μ? μ€λ³΅ νΈμΆ λλ¬Έμ
*/