class Solution{
    int mod = 1e9+7;
	public:
		int CountWays(string str){
		    int n = str.size();
		    int dp[n+1];
		    memset(dp,0,sizeof dp);
		    dp[0] = 1;
		    dp[1] = str[0] == '0'?0:1;
		    
		    for(int i=2;i<=n;i++){
		        int num = (str[i-1]-'0')+10*(str[i-2]-'0');
		        if(num >=10 && num <=26){
		            dp[i]+=dp[i-2];
		            dp[i]%=mod;
		        }
		        if(str[i-1]-'0' >= 1){
		            dp[i]+=dp[i-1];
		            dp[i]%=mod;
		        }
		    }
		    
		    return dp[n];
		}
};