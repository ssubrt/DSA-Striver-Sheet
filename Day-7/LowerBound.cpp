----------------->>>>>>>>>>>>>>> Approach 1 Brute Force  <<<<<<<<<<<<<----------------
// Time Complexity: O(N)
// Space Complexity: O(1)

int lowerBound(vector<int> arr, int n, int x) {
    for (int i = 0; i < n; i++) {
        if (arr[i] >= x) {
            // lower bound found:
            return i;
        }
    }
    return n;
}



--------------------->>>>>>>>>>>>>>> Approach 2 Optimial <<<<<<<<<<<<<<<<<<<-----------------
// Time Complexity: O(N)
// Space Complexity: O(1)

int lowerBound(vector<int> arr, int n, int x) {
    int low = 0, high = n - 1;
    int ans = n;

    while (low <= high) {
        int mid = (low + high) / 2;
        // maybe an answer
        if (arr[mid] >= x) {
            ans = mid;
            //look for smaller index on the left
            high = mid - 1;
        }
        else {
            low = mid + 1; // look on the right
        }
    }
    return ans;
}