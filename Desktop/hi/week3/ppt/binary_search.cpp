#include <iostream>
#include <vector>
using namespace std;

int binsearch2(int low,int high){
    int mid;
    if(low > high) 
        return0;
    else {
        mid=(low+high)/2;
        if (x == S[mid])
            return mid;
        else if(x < S[mid])
            return binsearch2(low,mid-1);
        else //x>S[mid]
            return binsearch2(mid+1,high);
    }
}
