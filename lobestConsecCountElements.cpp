//  !st approch:sort and check for consectutive elements
//for sorting O(n log n)+ O(n) for linear traverse
// @nd approach big O(3n) SC: O(n)




int longestConsecElements(vector<int>&nums){
    set<int>s1;
    for(int i=0;i<nums.size();i++){
        s1.insert(nums[i]);
    }
    int ans=0;
    
    for(int i=0;i<nums.size();i++){
        if(!s1.count(nums[i]-1)){
            int currentnum=nums[i];
            int currentSteak=1;
            
            while(s1.count(currentnum+1)){
                currentSteak+=1;
                currentnum+=1;
            }
            ans=max(currentSteak,currentSteak);
        }
    }
    return ans;
}
