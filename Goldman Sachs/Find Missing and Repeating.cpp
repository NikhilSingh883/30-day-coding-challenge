class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        
        int xo=0,set,x=0,y=0;
        for(int i=0;i<n;i++) xo^=arr[i];
        for(int i=1;i<=n;i++) xo^=i;
        
        set = xo & ~(xo-1);
        
        for(int i=0;i<n;i++)
            if(arr[i] & set)
                x^= arr[i];
            else
                y^= arr[i];
                
        for(int i=1;i<=n;i++)
            if(i & set)
                x^= i;
            else
                y^= i;
                
        int *a = new int[2];
        a[0] = x;
        a[1] = y;
        
        for(int i=0;i<n;i++) if(arr[i] == x) return a;
        a[0] = y;
        a[1] = x;
        
        return a;
    }
};