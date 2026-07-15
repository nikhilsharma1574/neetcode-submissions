class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        double answer;
        if(nums1.size()>=nums2.size())
        {
            for(int i=0;i<nums2.size();i++)
            {
                nums1.push_back(nums2[i]);
            }
            sort(nums1.begin(),nums1.end());
            int len=nums1.size();
            if(len%2!=0)
            {
                answer=nums1[(len/2)];
                return answer;
            }
            else
            {
                answer = (nums1[len/2] + nums1[(len-1)/2]) / 2.0;
                return answer;
            }
        }
        else
        {
            for(int i=0;i<nums1.size();i++)
            {
                nums2.push_back(nums1[i]);
            }
            sort(nums2.begin(),nums2.end());
            int len=nums2.size();
            if(len%2!=0)
            {
                answer = nums2[len/2];
                return answer;
            }
            else
            {
                answer = (nums2[len/2] + nums2[(len-1)/2]) / 2.0;
                return answer;
            }
        }
    }
};
