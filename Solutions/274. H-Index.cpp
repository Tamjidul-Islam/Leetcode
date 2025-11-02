class Solution {
public:
    int hIndex(vector<int>& citations) {
        int count=0;
        
        sort(citations.rbegin(),citations.rend());
        for(int i=0;i<citations.size();i++){
           if(i+1<=citations[i]) count++; 
        }
        return count;
    }
};