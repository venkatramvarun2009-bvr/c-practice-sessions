class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0,maxwater=0,ht,width=height.size()-1-i,n=height.size()-1;
        while(i<n){
            ht=min(height[i],height[n]);
            maxwater=max(maxwater,ht*width);
            if(ht==height[i]){
                 i++;
                width--;
            }          
            else{n--;
            width--;}
        }
        return maxwater;
    }
};