------------------->>>>>>>>>>>>>>>> Approach <<<<<<<<<<<<<<<<<<<<------------------

//T.C- O(n)
// S.C - O(n)

class Solution {
public:
    int maxDepth(string s) {
        int ans =0;

        stack<char> st;

        for(char ch:s){
            if(ch=='('){
                st.push(ch);
            }else if(ch==')'){
                st.pop();
            }

            ans = max(ans,(int)st.size());
        }

        return ans;
    }
};


---------------------->>>>>>>>>>>>>>>>>>>>> Approach <<<<<<<<<<<<<<<<<<<---------------------------
//T.C- O(n)
// S.C - O(1)

class Solution {
public:
    int maxDepth(string s) {
        int ans =0;

        int openBrackets =0;

        for(char ch:s){
            if(ch=='('){
                openBrackets++;
            }else if(ch==')'){
                openBrackets--;
            }

            ans = max(ans,openBrackets);
        }

        return ans;
    }
};
