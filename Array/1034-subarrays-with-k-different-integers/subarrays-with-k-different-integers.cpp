class Solution {
public:

    int atMostK(vector<int>& nums, int k) {
        int left = 0;
        int count = 0;

        unordered_map<int, int> mpp;

        for(int right = 0; right < nums.size(); right++) {

            mpp[nums[right]]++;

            while(mpp.size() > k) {
                mpp[nums[left]]--;

                if(mpp[nums[left]] == 0) {
                    mpp.erase(nums[left]);
                }

                left++;
            }

            count += right - left + 1;
        }

        return count;
    }

    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return atMostK(nums, k) - atMostK(nums, k - 1);
    }
};