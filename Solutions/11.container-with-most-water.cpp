class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0,j=height.size()-1,maxamount=0;
        while(i<j){
           int h1=height[i];
           int h2=height[j];
           maxamount=max(maxamount,min(h1,h2)*(j-i));
           if(h2>h1) i++;
           else j--;
        }
        return maxamount;
    }
};