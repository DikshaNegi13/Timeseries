class Solution {
int recur(vector<int>&nums, int target,int pos,           vector<unordered_map<int,int>>&m)
{
   
    
        if(pos==nums.size()){return target==0;}
    auto it=m[pos].find(target);
    if(it!=m[pos].end()){return it->second;}
    
    int ans=0;
    // if(pos>=nums.size()){return 0;}
    
    ans+=recur(nums,target-nums[pos],pos+1,m)+recur(nums,target+nums[pos],pos+1,m);
    m[pos][target]=ans;
    return ans;
}
    

    public:
    int findTargetSumWays(vector<int>& nums, int target) {
           vector<unordered_map<int,int>>m(nums.size());
 
    
        return recur(nums,target,0,m);
        
    }
};