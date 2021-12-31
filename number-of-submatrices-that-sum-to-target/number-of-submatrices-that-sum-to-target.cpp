class Solution {
public:
    int numSubmatrixSumTarget(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();
        int n=matrix[0].size();
        int res=0;
        for(int i=0;i<m;i++)
        {
            for(int j=1;j<n;j++)
            {
                matrix[i][j]+=matrix[i][j-1];
            }
        }
        unordered_map<int,int>ma;
        for(int i=0;i<n;i++)
        {
            for(int j=i;j<n;j++)
            {
                ma={{0,1}};
                int curr=0;
                for(int k=0;k<m;k++)
                {
                    curr+=matrix[k][j]-(i>0?matrix[k][i-1]:0);
                    res+=ma.find(curr-target)!=ma.end()?ma[curr-target]:0;
                    ma[curr]++;
                }
            }
        }
        return res;
        
    }
};