class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int, int> mpp;
        mpp[0] = 1;
        int prefixSum = 0;
        int count = 0;
        for (int num : nums) {
            prefixSum += num;
            int rem = prefixSum % k;
            rem=(rem+k)%k;
            if(mpp.find(rem)!=mpp.end()){
                count+=mpp[rem];
            }
            mpp[rem]++;
        }
        return count;
    }
};