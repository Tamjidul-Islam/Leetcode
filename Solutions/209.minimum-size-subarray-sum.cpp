class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left=0,right=0,minlen=INT_MAX,sum=0;
        while(right<nums.size()){
            sum+=nums[right];
            while(left<=right && sum>=target){
                minlen=min(minlen,right-left+1);
                sum-=nums[left];
                left++;
            }
            right++;
        }
        if(minlen==INT_MAX) return 0;
        else return minlen;
    }
};