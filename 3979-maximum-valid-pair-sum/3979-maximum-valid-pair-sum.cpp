class Solution {
public:
    int maxValidPairSum(vector<int>& nums, int k) {
       int i,j,sum=0,ans=INT_MIN,bestLeft;
       for (int j = k; j < nums.size(); ++j) {
            bestLeft = max(bestLeft, nums[j - k]);
            ans = max(ans, bestLeft + nums[j]);
        }
       
       return ans;
    }
};