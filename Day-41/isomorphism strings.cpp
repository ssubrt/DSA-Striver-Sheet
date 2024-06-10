------------------------------>>>>>>>>>>>>>>>>>>> Approach <<<<<<<<<<<<<<<<<<<<<<<<<<--------------------------
// time complexity of the given code is O(n)
// space complexity of the given code is O(1)





class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int hash[256]={0};
        bool isCharsMapped[256]={0};

        for(int i=0;i<s.size();i++){
            if(hash[s[i]]==0 && isCharsMapped[t[i]]==0){
                hash[s[i]] = t[i];
                isCharsMapped[t[i]] = true;
            }
        }


        for(int i=0;i<s.size();i++){
            if(char(hash[s[i]] != t[i])){
                return false;
            }
        }

        return true;
        
    }
};