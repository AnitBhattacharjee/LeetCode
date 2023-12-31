class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currsum= nums[0];
        int sum=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            currsum=max(nums[i],currsum+nums[i]);
            
            if(currsum>sum)
            {
                sum=currsum;
            }
            if(currsum<0)
            {
                currsum=0;
            }
            
        }
        return sum;
    }
};