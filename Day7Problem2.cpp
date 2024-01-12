class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> A(26,0);
        vector<int> B(26,0);
        if(s.size()!=t.size()){
            return false;
        }
        for(int i=0;i<s.size();i++){
            A[s[i]-'a']++;
        }
        for(int i=0;i<t.size();i++){
            A[t[i]-'a']++;
        }
        for(int i=0;i<26;i++){
            if(A[i]!=B[i]){
                temp++;
            }
        }
        if(temp == 0){
            return true;
        }else{
            return false;
        }

    }
};