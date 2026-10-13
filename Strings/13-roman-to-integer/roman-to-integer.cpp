class Solution {
public:
    int romanToInt(string s) {
        int sum=0;
     for(int i=0;i<s.size();i++){
        int curr;
        if(s[i]=='I'){
         curr= 1;
        }
         if(s[i]=='V'){
         curr= 5;
        }
         if(s[i]=='X'){
         curr= 10;
        }
         if(s[i]=='L'){
         curr= 50;
        }
         if(s[i]=='C'){
         curr= 100;
        }         if(s[i]=='D'){
         curr=500;
        }
         if(s[i]=='M'){
         curr= 1000;
        }

            if (i + 1 < s.size()) {
                int next;

                if (s[i + 1] == 'I') next = 1;
                else if (s[i + 1] == 'V') next = 5;
                else if (s[i + 1] == 'X') next = 10;
                else if (s[i + 1] == 'L') next = 50;
                else if (s[i + 1] == 'C') next = 100;
                else if (s[i + 1] == 'D') next = 500;
                else next = 1000;

                if (curr < next)
                    sum -= curr;
                else
                    sum += curr;
            } 
            else {
                sum += curr;
            }
        
     }
     return sum;   
    }
};