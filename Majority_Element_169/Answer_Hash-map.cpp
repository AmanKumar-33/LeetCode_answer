// writing code for majority of elemets preent in array more than two times.
// Time Complexity: O(n)
// Space Complexity: O(1)
int majority_element(vector<int>& nums){
    int n = nums.size();
    unordered_map<int, int>m;
    for(int i =0;i<n;i++){
        m[nums[i]]++;
    }
    n = n//2;
    for(auto x :m){
        if(x.second >n){
            return x.first;
        }
    }
    return 0;

} 
