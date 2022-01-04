class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i=0,j=0,sum=0,res=INT_MAX;
        while(j<nums.size())
        {
            sum+=nums[j];
            if(sum>=target)
            {
                while(sum>=target)
                {
                    res=min(res,j-i+1);
                    sum-=nums[i];
                    i++;
                   
                }
            }
            j++;
                
        }
        return res!=INT_MAX?res:0;
    }
};