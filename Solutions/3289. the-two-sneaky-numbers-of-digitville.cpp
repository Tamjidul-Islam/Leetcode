class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
       unordered_set<int>seen;
       vector<int>sneaky;
       for(auto num:nums){
        if(seen.count(num)) sneaky.push_back(num);
        seen.insert(num);
       } 
       return sneaky;
    }
};