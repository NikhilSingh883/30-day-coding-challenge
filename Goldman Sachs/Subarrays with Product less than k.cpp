class Solution{
  public:
    int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        
        long long int mul=1,l=0,r=0,ans=0;
        
        while(r<n){
            mul*=a[r];
            while(l<n && mul>=k){
                mul/=a[l];
                l++;
            }
            if(mul<k) ans += r-l+1;
            r++;
        }
        
        return ans;
    }
};