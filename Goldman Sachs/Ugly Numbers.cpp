#define ll long long int
class Solution{
public:	
	// #define ull unsigned long long
	/* Function to get the nth ugly number*/
	ull getNthUglyNo(int n) {
       set <ll> s;
       s.insert(1);
       n--;
       while(n--){
            auto it = s.begin();
            ll x = *it;
            s.erase(it);
            
            s.insert(x*2);
            s.insert(x*3);
            s.insert(x*5);
        } 
           return *s.begin();
	}
};