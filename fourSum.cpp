// a+b+c+d=target
//1st approach : 3 pointers and Binary search: O(n*n*n log n)
//2nd approach: 2 pointer approach:sort the aray and use 2 pointers :i=0,j=i+1, left=j+1 and right =n-1; O(n*n*n), SC: O(1)







vector<vector<int>>fourSum(vector<int>&nums, int target){
    vector<vector<int>>res;
    sort(nums.begin(),nums.end());
    for(int i=0;i<nums.size();i++){
        for(int j=i+1;j<nums.size();j++){
            int left=j+1;
            int right=nums.size()-1;
            int target2=target-nums[i]-nums[j];
            
            while(left<right){
                int twosum=nums[left]+nums[right];
                if(twosum<target2){
                    left++;
                }
                else if(twosum>target2){
                    right--;
                }
                else{
                    vector<int>quad(4,0);
                    quad[0]=nums[i];
                    quad[1]=nums[j];
                    quad[2]=nums[left];
                    quad[3]=nums[right];
                    res.push_back(quad);
                    
                    while(left<right && nums[left]==nums[2]){
                        ++left;
                    }
                    while(lef<right && num[right]==nums[3]){
                        --right;
                    }
                }
            }
            while(j+1<n && nums[j+1]==nums[j]){
                ++j;
            }
            
            
        }
        while(i+1<n && nums[i+1]==nums[i]){
            ++i;
        }
    }
    return res;
}

