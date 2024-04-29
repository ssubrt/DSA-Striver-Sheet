 -------->>>>>>>>>> Approach 1 Brute Force   <<<<<<<<<--------------------
// Time Complexity: O(N*logN) + O(2*N)
// Space Complexity: O(N)



vector<vector<int>> mergeOverlappingIntervals(vector<vector<int>> &arr){
	 int n = arr.size();
        vector<vector<int>> ans;
        sort(arr.begin(),arr.end());

        for(int i=0;i<n;i++){
            int start = arr[i][0];
            int end = arr[i][1];

            if(!ans.empty() && end<=ans.back()[1])  continue;

            for(int j = i+1;j<n;j++){
                if(arr[j][0]<=end){
                    end = max(end,arr[j][1]);
                }
                else{
                    break;
                }
            }
            ans.push_back({start,end});
        }
        return ans;
	
}

---------->>>>>>>>>>>>> Approach 2 Optimal <<<<<<<<<<<<<<-----------------
// Time Complexity: O(N*logN) + O(N)
// Space Complexity: O(N)

vector<vector<int>> merge(vector<vector<int>>& arr) {
        int n = arr.size(); // size of the array

    //sort the given intervals:
    sort(arr.begin(), arr.end());

    vector<vector<int>> ans;

    for (int i = 0; i < n; i++) {
        // if the current interval does not
        // lie in the last interval:
        if (ans.empty() || arr[i][0] > ans.back()[1]) {
            ans.push_back(arr[i]);
        }
        // if the current interval
        // lies in the last interval:
        else {
            ans.back()[1] = max(ans.back()[1], arr[i][1]);
        }
    }
     return ans;
}

