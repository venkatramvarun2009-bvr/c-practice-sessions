class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        if(s1==s2)
            return true;
        int n=s1.length();
        for( int i=0;i<n;i++){
            char temp;
            for( int j=1;j<n;j++){
                temp=s2[j];
                s2[j]=s2[i];
                s2[i]=temp;
                if(s1==s2)
                    return true;
                temp=s2[j];
                s2[j]=s2[i];
                s2[i]=temp;
            }
        }
    return false;
    }
};