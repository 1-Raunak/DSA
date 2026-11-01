
class Solution {
public:
    string shortestPalindrome(string s) {

        string rev = s;
        reverse(rev.begin(), rev.end());

        // Combine original + separator + reversed string
        string temp = s + "#" + rev;

        int n = temp.size();

        // Build LPS array
        vector<int> lps(n, 0);

        int len = 0;
        int i = 1;

        while(i < n) {

            if(temp[i] == temp[len]) {
                len++;
                lps[i] = len;
                i++;
            }
            else {
                if(len != 0) {
                    len = lps[len - 1];
                }
                else {
                    lps[i] = 0;
                    i++;
                }
            }
        }

        // Longest palindromic prefix length
        int longest = lps[n - 1];

        // Extract unmatched characters
        string remaining = s.substr(longest);

        reverse(remaining.begin(), remaining.end());

        return remaining + s;
    }
};
