class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        
        vector<int>Adj[numCourses];
        int n=prerequisites.size();
        if(prerequisites.size()==0)
        {
            vector<int>p;
            for(int i=numCourses-1;i>=0;i--)
            {p.push_back(i);}
            return p;
            
        }
        
             for(int i=0;i<n;i++)
        {
            Adj[prerequisites[i][1]].push_back(prerequisites[i][0]);
        }
        vector<int> outdeg(numCourses, 0);
        for (auto adj : Adj) {
            for (int v : adj) {
                outdeg[v]++;
            }
        }
        
        
        
        
         vector<int> order;
        for (int i = 0; i < numCourses; i++) {
            int j =0;
            for (; j < numCourses; j++) {
                if (!outdeg[j]) {
                    order.push_back(j);
                    break;
                }
            }
            if (j == numCourses) {
                return {};
            }
            outdeg[j]--;
            for (int v : Adj[j]) {
                outdeg[v]--;
            }
        }        
        return order;
        
    }
};