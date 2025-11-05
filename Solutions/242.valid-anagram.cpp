class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int>vec(26,0);
        if(s.size()!=t.size()) return false;
        for(auto ch :s){
            vec[ch-'a']++;
        }
        for(auto ch:t){
            vec[ch-'a']--;
            if(vec[ch-'a']<0) return false;
        }
        return true;
    }
};