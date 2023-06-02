class Solution {
public:
    bool isPowerOfThree(int n) {
        int a=1;
        for(int i=0;i<=20;i++){
            if(a==n){
                return true;
            }
            if(a<INT_MAX/3)
            a=a*3;
        }
        return false;
        
    }
};