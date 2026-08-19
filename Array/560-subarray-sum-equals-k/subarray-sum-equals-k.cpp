class Solution {
public:
    int subarraySum(vector<int>& nums, int k) { 
        unordered_map<int,int>mpp;
        int count =0;
        int prefixSum=0;
        mpp[0]=1;
        for(int num:nums){
            prefixSum+=num;
            if(mpp.find(prefixSum-k)!=mpp.end()){
                count+=mpp[prefixSum-k];
            }
            mpp[prefixSum]++;
        }
        return count;

    }
};