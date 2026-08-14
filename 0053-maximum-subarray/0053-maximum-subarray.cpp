class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxsa,sum=0;
        maxsa=INT_MIN;
        for(int i:nums){
            sum +=i;
            maxsa=max(maxsa,sum);
            if(sum<0){
                sum=0;
            }
        }
        return maxsa;
    }
};