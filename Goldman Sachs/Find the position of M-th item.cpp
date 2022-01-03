class Solution {
  public:
    int findPosition(int N , int M , int K) {
        if (M <= N - K + 1)
            return M + K - 1;
    
        M -= N - K + 1;
    
        return (M % N == 0) ? N : (M % N);
    }
};