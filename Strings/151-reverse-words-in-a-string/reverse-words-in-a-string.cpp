class Solution {
public:
    string reverseWords(string s) {
        int n=s.size();
        vector<string>words;
        string word="";
        for(int i=0;i<n;i++){
            if(s[i]!=' '){
                word+=s[i];
            }
            else if(!word.empty()){
                //push_back the word into the words if it find " ";
                words.push_back(word);
            word="";
            }
        }
        if(!word.empty()){
             words.push_back(word);
        }
        reverse(words.begin(),words.end());
        string result="";
        for(int i=0;i<words.size();i++){
            result+=words[i];
            if(i<words.size()-1){
                result+=" ";
            }
        }
        return result;
    }
};