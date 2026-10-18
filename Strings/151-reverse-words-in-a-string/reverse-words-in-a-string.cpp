class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        vector<string> words;
        string word;

        while (ss >> word) { //It will automatically ignore the spaces when using >>. (it read one word at a time)
            words.push_back(word);
        }

        reverse(words.begin(), words.end());

        string ans;
        for (int i = 0; i < words.size(); i++) {
            if (i > 0) ans += " ";
            ans += words[i];
        }

        return ans;
    }
};