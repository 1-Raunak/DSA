
class Solution {
public:
    string countAndSay(int n) {
        string ans = "1";

        for (int i = 1; i < n; i++) {
            string temp = "";
            int j = 0;

            while (j < ans.size()) {
                int count = 1;

                while (j + 1 < ans.size() &&
                       ans[j] == ans[j + 1]) {
                    count++;
                    j++;
                }

                temp += to_string(count);
                temp += ans[j];

                j++;
            }

            ans = temp;
        }

        return ans;
    }
};
