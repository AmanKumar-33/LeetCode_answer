// writing an code for the problem of finding the number of ways to reach the top of the stairs


// using concept of Brute force

#include <bits/stdc++.h>
using namespace std;

// int countways(int n){
//     if(n==0 ||n ==1){
//         return 1;
//     }
//     else if(n ==2){
//         return 2;
//     }
//     else{
//         return countways(n-1)+countways(n-2);
//     }
// }

        //              using Bottom-up approach
// int countways(int n){
//     int dp[n+1];
//     dp[0] = 1;
//     dp[1] = 1;
//     for(int i =2;i<=n;i++){
//         dp[i] = dp[i-1]+dp[i-2];

//     }
//     return dp[n];
// }

                                                               //    fibonacci series
int countways(int n){
    if(n == 1){
        return 1;
    }
    
        int first = 1;
        int second = 2;
        for(int i =3;i<=n;i++){
            int third = first + second;
            cout<<third<<endl;
            int first = second;
            cout<<first<<endl;
            int second = third;
            cout<<second<<endl;
             
        }
        return second;
    

}

int main(){
    int n;
    cout<<"Enter the number of stairs: ";
    cin>>n;
    cout<<"The number of ways to reach the top of the stairs are: ";
    cout<<countways(n)<<endl;
    return 0;
}