class Solution {
     bool issafe(int r,int c,vector<string>&vis)
    {
        for(int i=c+1;i<vis.size();i++)
        {
            if(vis[r][i]=='Q'){return false;}
        }
        
        for(int i=0;i<r;i++)
        {
            if(vis[i][c]=='Q'){return false;}
        }
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<vis.size();j++)
            {
                if(i+j==r+c||i-j==r-c)
                {
                    if(vis[i][j]=='Q'){return false;}
                }
            }
        }
        return true;
    }
    
    
    void solve(int row,vector<vector<string>>&vis,vector<string>&v,int n)
    {
        if(row>=n){
            vis.push_back(v);
            return;}
        
        for(int i=0;i<n;i++)
        {
            if(issafe(row,i,v))
            {
                v[row][i]='Q';
                // cout<<v.back()<<row<<endl;
                solve(row+1,vis,v,n);
                v[row][i]='.';
            }
        }
        return;
    }
    
    
    
    
    
    
    
    
    
public:
    int totalNQueens(int n) {
                      vector<vector<string>>ans;
       vector<string>v;
        for(int i=0;i<n;i++)
        {string p;
            for(int j=0;j<n;j++)
            {
                p.push_back('.');
            }
         v.push_back(p);
         
        }
        
        solve(0,ans,v,n);
        return ans.size();
          
    }
};