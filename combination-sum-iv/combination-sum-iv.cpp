class Solution {
    int arr[1001];

    int recur(vector<int>& nums, int target)
    {        
        if(target==0){return 1;}
        if(target<0){return 0;}
        if(arr[target]!=-1)
        {return arr[target];}

        int ans=0;
        
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<=target)
            ans+=recur(nums,target-nums[i]);
        }
        arr[target]=ans;
        return ans;}
    
    
public:
    int combinationSum4(vector<int>& nums, int target) {
        
        sort(nums.begin(),nums.end());
        memset(arr,-1,sizeof(arr));
        return recur(nums,target);
    
    }
};