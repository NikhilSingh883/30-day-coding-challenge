class Solution {
  public:
    int doOverlap(int L1[], int R1[], int L2[], int R2[]) {
       return min(R1[0],R2[0])>=max(L1[0],L2[0]) && min(L1[1],L2[1])>=max(R1[1],R2[1]);
    }
};