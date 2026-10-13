class Solution {
public:
    int myAtoi(string s) {
        int i=0;
        int n=s.size();
        int sign =1;
        long long result=0;
 //skip the white-space
        while(i<n&&s[i]==' '){
            i++;
        }
        if(i<n && s[i]=='-'){
            sign=-1;
            i++;
        }
        else if(i<n&&s[i]=='+'){
            i++;
        }
        long long limit=(sign==1)?INT_MAX:2147483648LL;
        while(i<n&&s[i]>='0'&& s[i]<='9'){
            int digit=s[i]-'0';
            if(result>(limit-digit)/10){
                return (sign==1)?INT_MAX:INT_MIN;
            }
            result=result*10+digit;
            i++;
        }
        return (int)(sign *result);
    }
};