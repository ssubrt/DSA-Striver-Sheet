--------->>>>>>>>>>>>>  Approach 1 Brute force  <<<<<<<<<<<<<<<-----------------

// Time Complexity: O(N3)
// Space Complexity: O(1)

 int maxProduct(vector<int>& nums) {
       int prod1 = nums[0],prod2 = nums[0],result = nums[0];
    
    for(int i=1;i<nums.size();i++) {
        int temp = max({nums[i],prod1*nums[i],prod2*nums[i]});
        prod2 = min({nums[i],prod1*nums[i],prod2*nums[i]});
        prod1 = temp;
        
        result = max(result,prod1);
    }
    
    return result;
 }


 ----------------->>>>>>>>>>>>>>> Approach 2 Better <<<<<<<<<<<<<<<----------------
 // Time Complexity: O(N2)
// Space Complexity: O(1)

 int maxProduct(vector<int>& nums) {
        int result = nums[0];
        for(int i=0;i<nums.size();i++){
            int p= nums[i];
            for(int j=i+1;j<nums.size();j++){
                result = max(result,p);
                p *= nums[j];
            }
            result = max(result,p);
        } 
         return result;
}


--------------->>>>>>>>>> Approach 3 Optimial <<<<<<<<<<<<<<<----------------

// Time Complexity: O(N)
// Space Complexity: O(1)

 int maxProduct(vector<int>& arr) {
        int n = arr.size(); //size of array.

    int pre = 1, suff = 1;
    int ans = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (pre == 0) pre = 1;
        if (suff == 0) suff = 1;
        pre *= arr[i];
        suff *= arr[n - i - 1];
        ans = max(ans, max(pre, suff));
    }
    return ans;
}

--------------->>>>>>>>>>> Approach 4 Optimial-2 <<<<<<<<<<<--------------
// Time Complexity: O(N)
// Space Complexity: O(1)

 int maxProduct(vector<int>& nums) {
       int prod1 = nums[0],prod2 = nums[0],result = nums[0];
    
    for(int i=1;i<nums.size();i++) {
        int temp = max({nums[i],prod1*nums[i],prod2*nums[i]});
        prod2 = min({nums[i],prod1*nums[i],prod2*nums[i]});
        prod1 = temp;
        
        result = max(result,prod1);
    }
    
    return result;
}