class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        long long  sum=0;
        long long  maxi=0;
        unordered_map<int,int>mpp;
        for(int i=0;i<k;i++){
            sum+=nums[i];
            mpp[nums[i]]++;
        }
        if(mpp.size()==k){
            maxi=sum;
        }
        for(int i=k;i<nums.size();i++){
            mpp[nums[i-k]]--; //map me value gahtta hai aise 
            if(mpp[nums[i-k]]==0){//ye condition se hm key (yani jo bhi value array me hoga usko hta denge )
                mpp.erase(nums[i-k]);
            }
            mpp[nums[i]]++;//value  added next 
            sum=sum-nums[i-k]+nums[i];
            if(mpp.size()==k){//repeated value me size nhi badhta hai map me so ,check the condition 
                maxi=max(maxi,sum);
            }
        }
        return maxi;
    }
};