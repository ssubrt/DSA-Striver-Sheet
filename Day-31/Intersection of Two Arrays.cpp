------------------->>>>>>>>>>>>>>>>> Approach-1 <<<<<<<<<<<<<<<<<<<<<<<<<-----------------------------
// Time Complexity - O(n + m)
// Space COmplexity  - O(min(n, m)



class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        // Insert all elements of nums1 into a set for fast lookup
        set<int> set1(nums1.begin(), nums1.end());
        
        // Set to store the result, ensuring unique elements
        set<int> ans;

        // Iterate over elements of nums2
        for(int num : nums2) {
            // Check if the current element of nums2 is in set1
            if(set1.count(num)) {
                // If present, add it to the answer set
                ans.insert(num);
            }
        }

        // Convert the set to a vector and return
        return vector<int>(ans.begin(), ans.end());
    }
};

------------------->>>>>>>>>>>>>>>>> Approach-2 <<<<<<<<<<<<<<<<<<<<<<<<<-----------------------------


// Time Complexity - O(nlogn+mlogm)
// Space Complexity  - O(k)

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        // Sort both arrays
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());

        vector<int> ans;
        int i = 0, j = 0;

        while (i < nums1.size() && j < nums2.size()) {
            if (nums1[i] == nums2[j]) {
                // Avoid duplicates in the result
                if (ans.empty() || ans.back() != nums1[i]) {
                    ans.push_back(nums1[i]);
                }
                i++;
                j++;
            } else if (nums1[i] < nums2[j]) {
                i++;
            } else {
                j++;
            }
        }

        return ans;
    }
};

