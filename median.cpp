    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
                if (nums1.size()>nums2.size())  return findMedianSortedArrays(nums2, nums1);
        int X=nums1.size(), Y=nums2.size();
        int s=0, e=X;
        while (s<=e){
            int px = (s+e)/2;
            int py = (X+Y+1)/2-px;
            int maxLeftX = px==0? INT_MIN: nums1[px-1];
            int maxLeftY = py==0? INT_MIN: nums2[py-1];
            int minRightX = px==X? INT_MAX: nums1[px];
            int minRightY = py==Y? INT_MAX: nums2[py];
            if (maxLeftX <= minRightY && maxLeftY <= minRightX){
                if ((X+Y)%2==0){
                    return (double)(min(minRightX, minRightY)+max(maxLeftX, maxLeftY))/2.0;
                }
                return max(maxLeftX, maxLeftY);
            }
            else if (maxLeftX > minRightY)    e=px-1;
            else s=px+1;
        }
        return 1.0;
    }
