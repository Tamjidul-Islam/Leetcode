class Solution {
public:
    int jump(vector<int>& nums) {
      int currentindex=0,furthestindex=0,jump=0;
      for(int i=0;i<nums.size()-1;i++){
        furthestindex=max(furthestindex,i+nums[i]);
        if(i==currentindex){
            jump++;
            currentindex=furthestindex;
        }
      }
      return jump;  
    }
};