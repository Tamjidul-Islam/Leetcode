class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxproduct,minproduct,result;
        maxproduct=minproduct=result=nums[0];
       for(int i=1;i<nums.size();i++){
        int num=nums[i];
        if(num<0) swap(maxproduct,minproduct);
        maxproduct=max(maxproduct*num,num);
        minproduct=min(minproduct*num,num);
        result=max(result,maxproduct);
       }
       return result;
    }
};