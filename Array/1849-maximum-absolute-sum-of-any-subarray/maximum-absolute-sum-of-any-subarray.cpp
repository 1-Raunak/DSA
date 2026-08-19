class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int currMax=0,maxSum=nums[0];
        int currMin=0,minSum=nums[0];
        for(int num:nums){
            currMax=max(currMax+num,num);
            maxSum=max(maxSum,currMax);
            currMin=min(currMin+num,num);
            minSum=min(currMin,minSum);

        }
        return max(maxSum,abs(minSum));
        
    }
};