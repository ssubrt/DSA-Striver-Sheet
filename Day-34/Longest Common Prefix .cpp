---------------------->>>>>>>>>>>>> Approach <<<<<<<<<<<<<<<<<<-----------------------
// time complexity of the code is O(n * m * log(n))
// space complexity of the code is O(1)

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        if(n==0)  return "";

        if(n==1)  return strs[0];

        sort(strs.begin(),strs.end());
        string start = strs[0];  string last  = strs[n-1];

        int mini = min(start.length(),last.length());
        int i=0;
        while(i<mini && start[i]==last[i]){
            i++;
        }
         string pre = start.substr(0,i);
          return pre;

    }
};