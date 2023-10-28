class Solution {
public:
    
    void help(vector<int>& nums, vector<int>& arr,vector<vector<int>>& ans, int n,vector<int>& freq )
    {
        if(n==arr.size())
        {
            ans.push_back(arr);
            return;
        }
        
        for(int i=0;i<n;i++)
        {
            if(!freq[i])
            {
                arr.push_back(nums[i]);
                freq[i]=1;
                help(nums,arr,ans,n,freq);
                
                freq[i]=0;
                arr.pop_back();
            }
        }
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> arr;
        vector<vector<int>> ans;int n=nums.size();
        vector<int> freq(n,0);
        
        for(int i=0;i<n;i++)
        {
            cout<<freq[i];
        }
        
        
        
        help(nums,arr,ans,n,freq);
        return ans;
    }
};