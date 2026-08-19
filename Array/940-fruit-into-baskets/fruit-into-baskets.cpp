class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int,int>mpp;
        int n=fruits.size();
        int left=0;
        int maxlen=0;
        for(int i=0;i<n;i++){
            mpp[fruits[i]]++;
            while(mpp.size()>2){
                mpp[fruits[left]]--;
                if(mpp[fruits[left]]==0){
                    mpp.erase(fruits[left]);
                }
                left++;
            }
            maxlen=max(maxlen,i-left+1);
        }
        return maxlen;
    }
};