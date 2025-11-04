class Solution {
public:
    vector<int> findXSum(vector<int>& nums, int k, int x) {
        int index=0;
        for(int i=0;i<=nums.size()-k;i++){
       priority_queue<pair<int,int>>pq;
       unordered_map<int,int>frequency;
        for(int j=i;j<i+k;j++){
            frequency[nums[j]]++;
        }
        for(auto [num,freq]:frequency) pq.push({freq,num});
        int sum=0;
        int p=0;
        while(p<x && !pq.empty()){
            sum+=pq.top().first*pq.top().second;
            p++;
            pq.pop();
        }
        nums[index]=sum;
        index++;
       }
       nums.resize(index);
       return nums; 
    }
};