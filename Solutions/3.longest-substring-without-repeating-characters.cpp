class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left=0,right=0,maxlen=INT_MIN;
        unordered_set<char>seen;
        while(right<s.size()){
            while(left<=right && seen.count(s[right])){
                seen.erase(s[left]);
                left++;
            }
            maxlen=max(maxlen,right-left+1);
            seen.insert(s[right]);
            right++;
        }
        if(maxlen==INT_MIN) return 0;
       else return maxlen;
    }
};