------------->>>>>>>>>>>>>>>> Approach -1 <<<<<<<<<<<<<<<<<<<<<---------------------
//    Time Complexity: O(n)
//   Space Complexity: O(n)



 vector<int> singleNumber(vector<int>& nums) {
        int n  = nums.size();
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }

        vector<int> arr;

         for (const auto &pair : mp) {
            if (pair.second == 1) {
                arr.push_back(pair.first);
            }
        }
        return arr;
        
 }


 --------------------->>>>>>>>>>>>>>> Approach -2 <<<<<<<<<<<<<<<<<<<<<<--------------------

 //    Time Complexity: O(n)
//   Space Complexity: O(1)

 vector<int> singleNumber(vector<int>& nums) {
         // Step 1: XOR all elements to get XOR of the two unique numbers
        int xorAll = 0;
        for (int num : nums) {
            xorAll ^= num;
        }

        // Step 2: Find any bit that is set in xorAll (rightmost set bit)
        int setBit = 1;
        while ((xorAll & setBit) == 0) {
            setBit <<= 1;
        }

        // Step 3: Divide elements into two groups based on the set bit
        int num1 = 0, num2 = 0;
        for (int num : nums) {
            if (num & setBit) {
                num1 ^= num; // XOR of first group
            } else {
                num2 ^= num; // XOR of second group
            }
        }

        // num1 and num2 are the two unique numbers
        return {num1, num2};
}