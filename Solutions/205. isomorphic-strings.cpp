class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char>mapping_st;
        unordered_map<char,char>mapping_ts;
        for(int i=0;i<s.size();i++){
            if((mapping_st.count(s[i]) && mapping_st[s[i]]!=t[i]) ||
            (mapping_ts.count(t[i]) && mapping_ts[t[i]]!=s[i])) return false;
            mapping_st[s[i]]=t[i];
            mapping_ts[t[i]]=s[i];

        }
        return true;
    }
};