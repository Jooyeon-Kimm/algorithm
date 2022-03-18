/* Matrix Mutliplication
•Problem:
Determine the product of two 𝑛×𝑛 matrices.

•Inputs:
a positive number 𝑛, two-dimensional arrays of numbers 𝐴 and 𝐵,
each of which has both its rowsand columns indexed from 1 to 𝑛.

•Outputs:
a two-dimensional array of numbers 𝐶, 
•which has both its rowsand columns indexed from 1 to 𝑛,
containing the product of 𝐴 and 𝐵.
*/
#include <iostream>
#include <vector>
using namespace std;

// 메트릭스 자료형 정의
typedef vector<vector<int>> matrix_t;

// 두 n*n 매트릭스 곱하는 함수
void matrixmult(int n,matrix_t A,matrix_t B,matrix_t& C){
    for(int i=1; i<=n; i++){
        for(int j=1;j<=n;j++){
            C[i][j]=0;
            for(int k=1; k<=n; k++)
                C[i][j] += A[i][k] * B[k][j];
        }
    }
}

int main(){
    // 매트릭스 크기 n 입력하기
    cout << "I will multiply two n*n sized matrixes A and B" << endl;
    cout << "Input n >> ";
    int n;
    cin >> n;
    
    // 세 매트릭스 선언
    matrix_t A(n+1, vector<int>(n+1));
    matrix_t B(n+1, vector<int>(n+1));
    matrix_t C(n+1, vector<int>(n+1));
    
    // 첫 번째 매트릭스 A 입력하기
    cout << "Input the first matrix A: " << endl;
    for(int i=1; i<=n; i++){
        cout << "Input row " << i << "---------------" << endl;
        for(int j=1;j<=n;j++){
            cout << "Input coloumn (" << j << ") :";
            cin >> A[i][j];
        }
        cout << endl;
    }
    
    // 두 번째 매트릭스 B 입력하기
    cout << endl << "Input the second matrix B: " << endl;
    for(int i=1; i<=n; i++){
        cout << "Input row " << i << "---------------" << endl;
        for(int j=1;j<=n;j++){
            cout << "Input coloumn (" << j << ") :";
            cin >> B[i][j];
        }
        cout << endl ;
    }
    
    // 두 매트릭스 A, B 출력하기
    cout << endl<< "Print the matrix A: " << endl;
    for(int i=1; i<=n; i++){
        for(int j=1;j<=n;j++){
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
    
    cout << endl<< "Print the matrix B: " << endl;
    for(int i=1; i<=n; i++){
        for(int j=1;j<=n;j++){
            cout << B[i][j] << " ";
        }
        cout << endl;
    }
    
    // 두 매트릭스 곱하기
    matrixmult(n,A,B,C);
    
    // 결과 매트릭스 C 출력하기
    cout << endl << "The product of matrix A and matrix B, as matrix C is: "<< endl;
     for(int i=1; i<=n; i++){
        for(int j=1;j<=n;j++){
            cout << C[i][j] << " ";
        }
         cout << endl;
     }
    
    
}