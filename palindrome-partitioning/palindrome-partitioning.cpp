class Solution {
  int ifpalindrome(string s)
  {
      int n=s.size();
      int i=0;
      for(i=0;i<n/2;i++)
      {
          if(s[i]!=s[n-i-1])
          {return false;}
      }
      return true;
  }
    vector<vector<string>>vec;
   void findans(string s,vector<string>&v) 
   {
      if(s.size()==0)
      {
          vec.push_back(v);
          return;
      }
       for(int i=0;i<s.size();i++){
     string pre=s.substr(0,i+1);
           string left=s.substr(i+1);
           if(ifpalindrome(pre)){
               v.push_back(pre);
               findans(left,v);
               v.pop_back();
           }
     
       }
   }
    
    
    public:
    vector<vector<string>> partition(string s) {
    vector<string>a;
        findans(s,a);
    return vec;    
    }
};