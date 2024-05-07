// ---------------->>>>>>>>>>>>> Approch -1 <<<<<<<<<<<<<<<<<<<<--------------
int search(vector<int>& nums, int target) {
        int ans = -1;
        for(int i=0; i<nums.size();i++){
            if(nums[i]==target){
                ans = i;
                break;
            
            }
        }
        return ans;
}

// ---------------->>>>>>>>>>>>> Approch -2 <<<<<<<<<<<<<<<<<<<<---------------
int search(vector<int>& nums, int target) {
        int n = nums.size();
        int low =0;
        int high = n-1;
        while(low<=high){
            int mid = (low+high)/2;

            if(nums[mid]==target) return mid;

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
        return -1;
}

// ---------------->>>>>>>>>>>>> Approch -3 <<<<<<<<<<<<<<<<<<<<--------------
 int search(vector<int>& nums, int target) {
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
                return indexedNums[mid].second;
            } else if (indexedNums[mid].first > target) {
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }
        return -1;
}

// ---------------->>>>>>>>>>>>> Approch -4 <<<<<<<<<<<<<<<<<<<<--------------
 int getPivot(vector<int>& arr, int n){
    int s = 0 ;
    int e = n - 1;
    int mid = s + (e -s) / 2 ;

    while (s < e){
        if(arr[mid] >= arr[0]){
            s = mid +1 ;
        }
        else{
            e = mid;
        }
        mid = s +(e -s)/ 2;
    }
    return s;
}

int Binarysearch(vector<int>& arr , int s ,int e, int key){
    int start = s;
    int end = e;
    int mid = start + (end - start )/2;
    while(start <= end){
        if(arr[mid] == key){
            return mid;
        }
        if(key > arr[mid]){
            start = mid +1;
        }
        else {
            end = mid - 1;
        }

        mid = start + (end - start) / 2 ;
    }

    return -1;
}
    int search(vector<int>& arr, int k) {
        int n = arr.size();
            int pivot = getPivot(arr,n); 
    if(k >= arr[pivot] &&  k <=arr[n-1]){
        return Binarysearch(arr,pivot,n-1,k);
    }
    else{
        return Binarysearch(arr,0,pivot -1,k);
    }
    if(Binarysearch(arr,pivot,n-1,k)){
        return true;
    }else{
        return false;
    }

    if( Binarysearch(arr,0,pivot -1,k)){
        return true;
    }else{
        return false;
    }



}