--------------------->>>>>>>>>>>>>>>>>> Approach <<<<<<<<<<<<<<<<<<<<<<<<<<<<--------------------------
//  time complexity of this code is O(n)
//  space complexity of this code is also O(n)

class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char> st;
        string ans;

        for(char ch :s){
            if(ch == '('){
                if(!st.empty()){
                    ans += ch;
                }
                st.push(ch);
            }
            else if(ch==')'){
                st.pop();
                if(!st.empty()){
                    ans += ch;
                }
            }
        }
        return ans;
    }
};



--------------------------------------------->>>>>>>>>>>>>>>>>> Approach - 2 <<<<<<<<<<<<<<<<<<<<<<<<<<<<--------------------------

//  time complexity of this code is O(n)
//   space complexity of this code is also O(n)


class Solution {
public:
    string removeOuterParentheses(string s) {
        string result;
        int depth = 0;

        for (char ch : s) {
            if (ch == '(') {
                if (depth > 0) {
                    result += ch; // Append only if it's not an outermost '('
                }
                depth++;
            } else if (ch == ')') {
                depth--;
                if (depth > 0) {
                    result += ch; // Append only if it's not an outermost ')'
                }
            }
        }

        return result;
    }
};
