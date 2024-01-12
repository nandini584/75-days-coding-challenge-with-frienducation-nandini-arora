class Solution {
public:
    bool isPalindrome(string s) {
        string nstr="";
        int temp=0;
        for(int i=0;i<s.size();i++){
            if(s[i]>='A' && s[i]<='Z'){
                nstr+=s[i]+32;
            }else if((s[i]>='a' && s[i]<='z') || (s[i]>='0' && s[i]<='9')){
                nstr+=s[i];
            }
        }
        for(int i=0; i<nstr.size();i++){
            if(nstr[i]!=nstr[nstr.size()-i-1]){
                temp++;
            }
        }
        if(temp==0){
            return true;
        }else{
            return false;
        }
    }
};