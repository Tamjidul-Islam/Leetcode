class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        unordered_set<int>sset(nums.begin(),nums.end());
        while(sset.count(original)){
            original*=2;
        }
        return original;
        }
};