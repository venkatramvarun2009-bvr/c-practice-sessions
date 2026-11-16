class Solution {
public:
    bool closeStrings(string word1, string word2){
        int a1[26]={0},a2[26]={0}; 
        if(word1.length()!=word2.length())
            return false;
        for(int i=0;i<word1.length();i++){
            a1[word1[i]-'a']++;
            a2[word2[i]-'a']++;
        }
        for(int i=0;i<26;i++){
            if(a1[i]!=0 &&a2[i]==0)
                return false;
        }
        for(int i=0;i<26;i++){
        if(a1[i] == 0)
                continue;
            int j; 
            for (j=0;j<26;j++)
                if(a1[i]!=0 && a1[i]==a2[j]){
                    a1[i]=0;
                    a2[j]=0;
                    break;
                }
            if(j==26)
                return false;
        }
        return true;

    }
};