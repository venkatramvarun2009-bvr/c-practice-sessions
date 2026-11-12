class Solution {
public:
    int vowelConsonantScore(string s) {
        int c=0,v=0,score=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
                v++;
            else if(s[i]>96 &&s[i]<123) c++;

        }
        if(c>0)
            score=v/c;
        return score;
    }
};