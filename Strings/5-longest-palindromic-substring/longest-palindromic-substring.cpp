class Solution {
public:
    string longestPalindrome(string s) {
        int n= s.length();
        int start=0;
        int maxlen=0;
        string ans="";
        for(int i=0;i<n;i++){
            int left=i;
            int right=i;
            while(left>=0&&right<n&&s[left]==s[right]){
                int len=right-left+1;
                if(len>maxlen){
                    maxlen=len;
                    start=left;
                }
                left--;
                right++;
            }
            // even 
            left=i;
            right=i+1;
            while(left>=0&&right<n&&s[left]==s[right]){
                int len=right-left+1;
                if(len>maxlen){
                    maxlen=len;
                    start=left;
                }
                left--;
                right++;
            }
        }
        return s.substr(start,maxlen);
    }
};