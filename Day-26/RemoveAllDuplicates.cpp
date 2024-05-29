----------------------->>>>>>>>>>>>>>> Approach <<<<<<<<<<<<<<<<<<<<<<<<<---------------------
// T.c - O(n)
// S.C - O(n)


    string removeDuplicates(string s) {
        int i =0;
        int n = s.size();
        string ans = "";
        while(i<n){
            if(ans.length()>0){
                if(ans[ans.length()-1]== s[i]){
                    ans.pop_back();
                }
                else{
                    ans.push_back(s[i]);
                }

            }
            else{
                ans.push_back(s[i]);
            }
            i++;
        }
        return ans;
        
    }
