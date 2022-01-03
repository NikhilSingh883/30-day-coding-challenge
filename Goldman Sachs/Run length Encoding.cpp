string encode(string src)
{     
  int idx=0,cnt=0;
  int n = src.size();
  string res;
  
  for(idx;idx<n;idx++){
      cnt=1;
      res += src[idx];
      while(idx+1<n && src[idx] == src[idx+1] ){
          idx++;
          cnt++;
      }
      res += to_string(cnt);
  }
  
  return res;
}