// writing an code for the unique number of occurance of element

#include<bits/stdc++.h>
using namespace std;

// int arr[] = {2,3,5,6,8,9,12,34,45};

bool UniqueOccurance(vector<int>& arr){
    int n = arr.size();
    map<int,int>mp;
    for(int i =0;i<n;i++){
        int x = arr[i];
        mp[x]++;
    }
    map<int,int>::iterator it = mp.begin();
    while(it!= mp.end()){
         if(it->second == 1){
            cout<<"false"<<endl;
            return true;
         }
            else{
                cout<<"true"<<endl;
                return false;
            }
    }

}
int main(){
    vector<int>arr;
    int n;
    cin>>n;
    for(int i =0;i<n;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    UniqueOccurance(arr);
}