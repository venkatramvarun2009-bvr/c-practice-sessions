class Solution {
public:
    bool isPalindrome(int x) {
        int digit,temp;
        long long int revx=0;
        temp=x;
        if(x<0||(x%10==0&&x!=0)){
            return false;
        }
        while(x>revx){
            digit=temp%10;
            revx=(revx*10)+digit;
            temp/=10;
        }
        if(revx==x){
            return true;
        }
        else{
            return false;
        }
    }
};