#include <iostream>
#include <vector>
using namespace std;

//배열에서 최대원소, 최소원소 찾기
int main(){
    int n;
    cin >> n;
    
    int num;
    int max = 1, min = 10000;
    
    for(int i=0; i<n; i++){
        cin >> num;
        if (num > max)
            max = num;
        
        if (num < min)
            min = num;
    }
    
    cout << "min: " << min << endl;
    cout << "max: " << max << endl;
}