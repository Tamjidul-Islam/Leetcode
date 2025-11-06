class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
      unordered_set<int>sset;
      int maxlen=0;
      for(auto num:nums) sset.insert(num);
      for(auto num:sset){
        if(!sset.count(num-1)){
            int len=1;
            int currentnum=num;
            while(sset.count(currentnum+1)){
                len++;
                currentnum++;
            }
            maxlen=max(maxlen,len);
        }
      }
      return maxlen;  
    }
};