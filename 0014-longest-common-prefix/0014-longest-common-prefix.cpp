class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";
        
        string prefix=strs[0];
        
        for(auto x: strs)
        {
            while(x.find(prefix)!=0)
                prefix=prefix.substr(0,prefix.length()-1);
            
        }
        return prefix;
        // sort(strs.begin(),strs.end());
        // int n=strs.size();
        // int m=strs[n-1].size();
        // for(int i=0;i<m;i++)
        // {
        //     if()
        // }
    }
};