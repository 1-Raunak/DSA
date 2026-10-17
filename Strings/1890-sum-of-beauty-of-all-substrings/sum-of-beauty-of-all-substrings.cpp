class Solution {
public:
    int beautySum(string s) {
     int n=s.size() ;
     int total=0;
     for(int i=0;i<n;i++){
        unordered_map<char,int>mpp;
        for(int j=i;j<n;j++){
            mpp[s[j]]++;
        int maxmpp=0;
        int minmpp=n;
        for(auto it:mpp){
            maxmpp=max(maxmpp,it.second);
            minmpp=min(minmpp,it.second);
        }
        total+=maxmpp-minmpp;
     }
     }
     return total;  
    }
};  