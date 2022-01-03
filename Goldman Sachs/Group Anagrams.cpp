class Solution{
  public:
    bool isPrime(int x){
        for(int i=2;i*i<=x;i++) if(x%i==0) return 0;
        return 1;
    }
    vector<vector<string> > Anagrams(vector<string>& string_list) {
        
        vector<int> pri;
        int idx=0,x=2;
        while(idx<27){
            if(isPrime(x)){
                pri.push_back(x);
                idx++;
            }
            x++;
        }
        
        map<int,vector<string>> mp;
        
        for(auto x:string_list){
            int mul=1;
            for(auto s:x) mul*=pri[s-'a'];
            mp[mul].push_back(x);
        }
        
        vector<vector<string>> ans;
        for(auto x:mp) ans.push_back(x.second);
        
        return ans;
    }
};