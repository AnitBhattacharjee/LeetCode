class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxi=0, finalmax=INT_MIN;
        for(auto c : nums)
        {
            maxi=max(c,c+maxi);
            finalmax=max(maxi, finalmax);
        }
        return finalmax;
    }
};