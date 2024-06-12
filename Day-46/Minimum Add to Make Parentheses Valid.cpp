----------------->>>>>>>>>>>>>>> Approach <<<<<<<<<<<<<<<<<<<<<------------------------------

// T.C- O(n)
//S.C- O(n)

class Solution {
public:
   int minAddToMakeValid(string s) {
        stack<char> st;
        int unmatchedClosing = 0;

        for (char c : s) {
            if (c == '(') {
                st.push(c);
            } else if (c == ')') {
                if (!st.empty() && st.top() == '(') {
                    st.pop();
                } else {
                    unmatchedClosing++;
                }
            }
        }

        // The size of the stack represents the number of unmatched opening parentheses
        int unmatchedOpening = st.size();

        return unmatchedOpening + unmatchedClosing;
    }
};
        stack<char> st;
        int unmatchedClosing = 0;

        for (char c : s) {
            if (c == '(') {
                st.push(c);
            } else if (c == ')') {
                if (!st.empty() && st.top() == '(') {
                    st.pop();
                } else {
                    unmatchedClosing++;
                }
            }
        }

        // The size of the stack represents the number of unmatched opening parentheses
        int unmatchedOpening = st.size();

        return unmatchedOpening + unmatchedClosing;
    }
};