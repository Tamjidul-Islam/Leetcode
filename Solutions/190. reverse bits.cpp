class Solution {
public:
     int reverseBits(int n) {
       unsigned int result=0;
        for(int i=0;i<32;i++){
            int rem=n%2;
            n/=2;
            result=result*2+rem;
        }
        return result;
    }
};