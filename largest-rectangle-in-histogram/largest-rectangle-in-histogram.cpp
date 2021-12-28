class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        int rah[n];
        int lah[n];
        stack<int>s;
        for(int i=n-1;i>=0;i--)
        {
            int c=0;
            while(s.size()&&heights[s.top()]>=heights[i])
            {
                c+=rah[s.top()]+1;
            s.pop();
            }
            rah[i]=c;
        s.push(i);    
        }
        while(s.size())
        {
            s.pop();
        }
        for(int i=0;i<n;i++)
        {
            int c=0;
            while(s.size()&&heights[s.top()]>=heights[i])
            {
                c+=lah[s.top()]+1;
                s.pop();
                
            }
            lah[i]=c;
            s.push(i);
        }
        
        for(int i=0;i<n;i++)
        {cout<<rah[i]<<" "<<lah[i]<<endl;
            lah[i]+=rah[i]+1;}
        
        int ma=INT_MIN;
        for(int i=0;i<n;i++)
        {
            ma=max(ma,heights[i]*lah[i]);
        }
        return ma;
        
    }
};