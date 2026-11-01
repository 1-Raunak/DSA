class Solution {
public:
    string shortestPalindrome(string s) {
        string rev=s;
        reverse(begin(rev),end(rev));
        int n=s.length();
        for(int i=0;i<n;i++){
            if(!memcmp(s.c_str(),rev.c_str()+i,s.length()-i)){
                return rev.substr(0,i)+s;
            }
        }
        return rev+s;
    }
};