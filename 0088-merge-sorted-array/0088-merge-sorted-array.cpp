class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        long i=m-1;
        long j=n-1;
        //cout<<nums1.size()<<endl;
        int k=m+n-1;
//         while(i>=0){
//             if(nums1[i]>nums2[j])
//             {
//                 nums1[k]=nums1[i];
//                // cout<<" Nums1 "<<nums1[k]<<" nums1k "<<k<<" "<<nums1[k]<<endl;
//                 i--;
//                 k--;
               
//             }
//             else if(nums1[i]<nums2[j])
//             {
//                 nums1[k]=nums2[j];
//                 //cout<<" nums2 "<<nums2[j]<<" nums1k "<<k<<" "<<nums1[k]<<endl;
//                 j--; 
//                 k--;
               
//             }
//             else if(nums1[i]==nums2[j])
//             {
//                 if(i>j)
//                 {   nums1[k]=nums1[i];
//                     i--;
//                     k--;
//                 }
//                 else {nums1[k]=nums2[j];j--;k--;}
//             }
                
                
        
//         }
//         while(j!=-1)
//         {
//             if(i==0)
//             {
//                 nums1[k]=nums2[j];
//                 j--;
//                 k--;
//             }
//             else if(j==0)
//             {
//                 nums1[k]=nums1[i];
//                 i--;
//                 j--;
//             }
            
//         }
        while (j >= 0) {
            if (i >= 0 && nums1[i] > nums2[j]) {
                nums1[k--] = nums1[i--];
            } else {
                nums1[k--] = nums2[j--];
            }
        }
        
    }
};