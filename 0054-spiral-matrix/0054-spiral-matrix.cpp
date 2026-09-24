class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
    vector<int> result;
    int m = matrix.size();
    int n = matrix[0].size();
       int sr=0,er=m-1;
       int sc=0,ec=n-1;
       while(sr<=er && sc<=ec){
        for(int i=sc;i<=ec;i++){
            result.push_back(matrix[sr][i]);
        }
        sr++;
        for(int i=sr;i<=er;i++){
            result.push_back(matrix[i][ec]);
        }
        ec--;
        if(er<sr){
                break;
            }
        for(int i=ec;i>=sc;i--){
            result.push_back(matrix[er][i]);
            
        }
        er--;
        if(ec<sc){
                break;
            }
        for(int i =er;i>=sr;i--){
            result.push_back(matrix[i][sc]);
            
        }
        sc++;
       }
    return result;}
};