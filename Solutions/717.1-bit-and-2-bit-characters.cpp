class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        int i=0;
      for( i;i<bits.size()-1;i++){
        if(bits[i]==1) i++;
      }
     if(i<bits.size() && bits[i]==0) return true;
     else return false; 
    }
};