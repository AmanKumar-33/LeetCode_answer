#include <iostream>
#include <cmath>
using namespace std;

// Function to find the nth root of m
// n: The power
// m: The number
// Return the nth root of m

int power(int base, int exp){
    int result =1;
    while(exp > 0){
        if(exp %2 == 1){
            result = result * base;
        }
        base *= base;
        exp /= 2;
    }
    return result;
}




int nthRoot(int n, int m) {
    int low = 1, high = m;
    while (low <= high) {
        int mid = (low + high) / 2;
        int midpow = power(mid, n);
        if (midpow == m) {
            return mid;
        }
        else if (midpow > m) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    return -1;
}


int main(){
    int n,m;
    cin>>n>>m;
    cout<<nthRoot(n,m);
    return 0;
}