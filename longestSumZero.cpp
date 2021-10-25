//Largest Subaaray with 0 sum
// kadanes algo
// tc: O(n log n)  : n for traverse , log n for map
// SC: O(n)



int longest(vector<int>&nums, int n){
    unordered_map<int,int>mpp;
    int maxi=0;
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+nums[i];
        if(sum==0){
            maxi=i+1;
        }else{
            if(mpp.find(sum) != mpp.end()){  // found in map
                maxi=max(maxi,i -mpp[sum])
            }
            else{
                mpp[sum]=i;
            }
        }
    }
    return maxi;
}
