class Solution {
public:
    vector<int> findMinHeightTrees(int n, vector<vector<int>>& edges) {
        // do topological sort and then find the middle nodes
        vector<int>topo;
        vector<int>adj[n];
        vector<int>indeg(n,0);

        for(int i=0;i<edges.size();i++)
        {
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
        indeg[edges[i][0]]++;
        indeg[edges[i][1]]++;
        }

        queue<int>q;
        for(int i=0;i<n;i++)
        {
            if(indeg[i]==1){q.push(i);
                           indeg[i]--;}
        }
        vector<int>ans;
        
        while(q.size())
        {
            int s=q.size();
            ans.clear();
            for(int i=0;i<s;i++)
            {
                int curr=q.front();
                q.pop();
                ans.push_back(curr);
                for(auto it:adj[curr])
                {
                    indeg[it]--;
                    if(indeg[it]==1){q.push(it);}
                }
            }
            
            
        }
        if(n==1){ans.push_back(0);}
        return ans;
        
        
        
    }
};