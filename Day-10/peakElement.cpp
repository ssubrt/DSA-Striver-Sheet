


int findPeakElement(vector<int>& nums) {
         int n = nums.size();
        if(n==1) return 0;
        if(nums[0]>nums[1]) return 0;
        if(nums[n-1]>nums[n-2]) return n-1;

        for(int i = 1; i<nums.size()-1; i++){
            if(nums[i-1]<nums[i] && nums[i+1]<nums[i]) return i;
        }
        return -1;
    
}




int recursive_binary_search(vector<int>& nums, int low, int high){
        if(low == high){
            return low;
        }
        int mid = (low + high) >> 1;
        if(nums[mid] > nums[mid+1]){
            return recursive_binary_search(nums, low, mid);
        }
        else{
            return recursive_binary_search(nums, mid+1, high);
        }
    }
    int findPeakElement(vector<int>& nums) {
       return recursive_binary_search(nums, 0, nums.size()-1);
    }