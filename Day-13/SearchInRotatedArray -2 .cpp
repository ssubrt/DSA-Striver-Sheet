// ------------------>>>>>>>>>>>>>>> Approach -1 <<<<<<<<<<<<<<<<<<<<<<<-----------------------
 bool search(vector<int>& nums, int target) {
         vector<pair<int, int>> indexedNums;
        for (int i = 0; i < nums.size(); ++i) {
            indexedNums.push_back({nums[i], i});
        }
        sort(indexedNums.begin(), indexedNums.end());
        int n = indexedNums.size();
        int start = 0; 
        int end = n - 1;

        while (start <= end) {
            int mid = (start + end) / 2;
            if (indexedNums[mid].first == target) {
                return true;
            } else if (indexedNums[mid].first > target) {
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }
        return false;
}


// ------------------>>>>>>>>>>>>>>> Approach -2 <<<<<<<<<<<<<<<<<<<<<<<-----------------------
 bool search(vector<int>& nums, int target) {
          int n = nums.size();
        int low =0;
        int high = n-1;
        while(low<=high){
            int mid = (low+high)/2;

            if(nums[mid]==target) return true;

            if(nums[low]==nums[mid] && nums[mid]==nums[high]){
                low = low+1;
                high = high -1;
                continue;
            }

            if(nums[low]<=nums[mid]){
                if(nums[low]<=target && target <= nums[mid]){
                    high = mid-1;
                }
                else{
                    low =mid +1;
                }
            }
            else{
                if(nums[mid]<=target && target<= nums[high]){
                    low = mid+1;
                }
                else{
                    high =mid -1;
                }
            }
            
        }
        return false;

}