class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int j=0;
        for(int i=m;i<n+m;i++){
            nums1[i]=nums2[j];
            j++;
        }
        for (int k=0;k<nums1.size();k++){
            for (int l=k;l<nums1.size();l++)
            {
                if(nums1[k]>nums1[l]){
                    int temp=nums1[k];
                    nums1[k]=nums1[l];
                    nums1[l]=temp;
                }
            }
        }
    }
};