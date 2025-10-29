class Solution {
public:
    int smallestNumber(int n) {
      int bits=0,result=0;
      while(n!=0){
       int r=n%2;
        n=n/2;
        bits++;
      }
      for(int i=0;i<bits;i++){
        result+=pow(2,i);
      }
      return result;  
    }
};