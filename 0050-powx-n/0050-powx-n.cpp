class Solution {
public:
    double myPow(double x, int n) {
        long bn=n;
        double ans=1;
        if(x==0){
            return 0;
        }
        if(bn<0){
            x=1/x;
            bn=-bn;
        }

        while(bn>0){
            if(bn % 2 ==1){
                ans*=x;
            }
            x*=x;
            bn/=2;
        }
        return ans;
    }
};