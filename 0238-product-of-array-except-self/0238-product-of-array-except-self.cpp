class Solution {
public:    
    vector<int> productExceptSelf(vector<int>& nums) {
    int n=nums.size();
    vector <int> answer(n,1);
    vector <int> pp(n,1);
    vector <int> sp(n,1);
    for(int i=0;i<n;i++){
        if(i==0){
            pp[0]=nums[0];
        }
        else{
            pp[i]=nums[i]*pp[i-1];
        }
    }
    for(int i=n-1;i>=0;i--){
        if(i==n-1){
            sp[n-1]=nums[n-1];
        }
        else{
            sp[i]=nums[i]*sp[i+1];
        }
    }
    for(int i=0;i<n;i++){
        if(i==0){
            answer[0]=sp[1];
        }
        else if (i!=n-1){
            answer[i]=pp[i-1]*sp[i+1];
        }
        else {
            answer[n-1]=pp[n-2];
        }
    }
    return answer;
    }  
};