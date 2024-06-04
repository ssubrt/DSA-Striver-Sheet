------------->>>>>>>>>>>>>>> Approach <<<<<<<<<<<<<<<<<<<<<<<<--------------------
// T.c - O(n^2)
// S.C - O(1)

class Solution {
public:
    int expandCount(string &s,int i,int j){
        int n = s.length();
        int count = 0 ; 
        while(i>=0 && j<n && s[i]==s[j]){
            count++;
            i--;
            j++;
        }
        return count;
    }
    

    int countSubstrings(string s) {
        int n = s.length();
        int count =0 ;
        for(int i=0;i<n;i++){
            int oddAns = expandCount(s,i,i);
            count = count + oddAns;

            int evenAns = expandCount(s,i,i+1);
            count = count + evenAns;
        }
        return count;
    }
};