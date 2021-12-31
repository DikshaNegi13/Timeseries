class Solution {
//     void solve(vector<string>&res,string nums,string t,int lastval,int currval,int target)
//     {
//         if(nums.size()==0&&currval==target)
//         {res.push_back(t);
//          return;}
        
//         for(int i=1;i<=nums.size();i++)
//         {
//             string num=nums.substr(0,i);
//             if(num.size()>1&&num[0]=='0')
//             {return;}
            
//             string nextnum=nums.substr(i);
            
            
//             if(t.length()>0){
//              solve(res,nextnum,t+'+'+num,stoll(num),currval+stoll(num),target);
//              solve(res,nextnum,t+'-'+num,-stoll(num),currval-stoll(num),target);
//              solve(res,nextnum,t+'*'+num,lastval*stoll(num),currval-lastval+stoll(num)*lastval,target);
   
             
//             }
//             else{
//                          solve(res,nextnum,num,stoll(num),stoll(num),target);
    
//             }
            
            
//         }
        
//     }
    void addOperators(vector<string>& result, string nums, string t, long long last, long long curVal, int target) {
	if (nums.length() == 0) {
		if (curVal == target)
			result.push_back(t);
		return;
	}

	for (int i = 1; i<=nums.length(); i++) {
		string num = nums.substr(0, i);
		if(num.length() > 1 && num[0] == '0')
		    return;
		
		string nextNum = nums.substr(i);

		if (t.length() > 0) {
			addOperators(result, nextNum, t + "+" + num, stoll(num), curVal + stoll(num), target);
			addOperators(result, nextNum, t + "-" + num, -stoll(num), curVal - stoll(num), target);
			addOperators(result, nextNum, t + "*" + num, last * stoll(num), (curVal - last) + (last * stoll(num)), target);
		}
		else 
			addOperators(result, nextNum, num, stoll(num), stoll(num), target);
	}
}    
    
    
    

    
public:
    vector<string> addOperators(string num, int target) {
        // vector<string>res;
        // solve(res,num,"",0,0,target);
        // return res;
        vector<string> result;
	addOperators(result, num, "", 0, 0, target);
	return result;

    }
};