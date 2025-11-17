class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
       int start=-1;
       for(int i=0;i<nums.size();i++){
        if(nums[i]==1){
            int dist=i-start-1;
            if( start!=-1 && dist<k) return false;
            start=i;
        }
       }
       return true; 
    }
};