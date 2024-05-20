---------------->>>>>>>>>>>>>>>>>>>>>> Approach -1 Brute Force <<<<<<<<<<<<<<<<<<<<<<<<<---------------------

// Time Complexity - O(N+M)
// Space Complexity - O(N+M)

void merge(vector<int>& nums1,vector<int>& nums2, vector<int>& nums3) {
        int n = nums1.size();
        int m = nums2.size();
        nums3.resize(n + m);

        int i = n - 1;
        int j = m - 1;
        int k = n + m - 1;

        while (i >= 0 && j >= 0) {
            if (nums1[i] > nums2[j]) {
                nums3[k--] = nums1[i--];
            } else {
                nums3[k--] = nums2[j--];
            }
        }

        while (i >= 0) {
            nums3[k--] = nums1[i--];
        }

        while (j >= 0) {
            nums3[k--] = nums2[j--];
        }
    }

    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> nums3;
        merge(nums1, nums2, nums3);

        int n = nums3.size();
        if (n % 2 == 0) {
            return (nums3[n/2 - 1] + nums3[n/2]) / 2.0;
        } else {
            return nums3[n/2];
        }

    }