------------------->>>>>>>>>>>> Approach <<<<<<<<<<<<<<------------------------
//T.C - O(n^2)
// S.C - O(1)

class Solution {
public:
    
int beautySum(string& s) {
    int totalBeauty = 0;

    for (int i = 0; i < s.length(); ++i) {
        unordered_map<char, int> freqMap;
        for (int j = i; j < s.length(); ++j) {
            freqMap[s[j]]++;

            // Calculate max and min frequencies in the current substring
            int maxFreq = INT_MIN;
            int minFreq = INT_MAX;
            for (const auto& entry : freqMap) {
                if (entry.second > maxFreq) {
                    maxFreq = entry.second;
                }
                if (entry.second < minFreq) {
                    minFreq = entry.second;
                }
            }

            totalBeauty += (maxFreq - minFreq);
        }
    }

    return totalBeauty;
}
};



------------------------------->>>>>>>>>>>>>>>>>>>>>>> Approach <<<<<<<<<<<<<<<<<<<<<-----------------------
//T.C - O(n^2)
// S.C - O(n)

class Solution {
public:
   vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
    // Step 1: Store the order of elements in arr2
    unordered_map<int, int> orderMap;
    for (int i = 0; i < arr2.size(); ++i) {
        orderMap[arr2[i]] = i;
    }

    // Step 2: Custom sort function
    auto comparator = [&orderMap](int a, int b) {
        // If both elements are in arr2
        if (orderMap.count(a) && orderMap.count(b)) {
            return orderMap[a] < orderMap[b];
        }
        // If only a is in arr2
        if (orderMap.count(a)) {
            return true;
        }
        // If only b is in arr2
        if (orderMap.count(b)) {
            return false;
        }
        // If neither is in arr2, sort by natural order
        return a < b;
    };

    // Step 3: Sort arr1 using the custom comparator
    sort(arr1.begin(), arr1.end(), comparator);

    return arr1;
}
};
