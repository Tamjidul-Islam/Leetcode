class Solution {
public:
    bool isPalindrome(string s) {
        int j=0;
        for(int i=0;i<s.size();i++){
            if(isalnum(s[i])) s[j++]=tolower(s[i]);
        }
        s.resize(j);
        int i=0;
        j=s.size()-1;
        while(i<=j){
            if(s[i]!=s[j]) return false;
            i++;
            j--;
        }
        return true;
    }
};