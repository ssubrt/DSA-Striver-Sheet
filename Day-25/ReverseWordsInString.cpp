------------>>>>>>>>>>>>>> Approach <<<<<<<<<<<<<<<<<-----------------
// T.C - O(n)
// S.c - O(n)


string reverseWords(string s) {
        stack<string>st;
        string str;
        for(auto ch:s){
            if(ch==' '){
// IF WE GET A SPACE AND ALSO STR IS EMPTY THEN DO NOTHING.
// BUT IF WE GET SPACE AND STR IS NOT EMPTY THEN PUSH STR INTO STACK AND CLEAR THE STR STRING.
                if(!str.empty()){
                st.push(str);
                str.clear();
                }
            }
// IF WE FOUND CHARACTER OTHER THAN SPACE THEN CONCATENATE THAT CHARCTER INTO STR.
            else{
                str+=ch;
            }
        }
// AFTER COMING OUT OF THE LOOP PUSH STR INTO STACK IF STR IS NOT EMPTY.
// DRY RUN 1ST TEST CASE TO UNDERSTAND THIS CONDITION.
        if(!str.empty()){
            st.push(str);
        }
// AT LAST POP THE STACK AND CONCATENATE ALL WORDS INTO NEW STRING ANS AND DON'T FORGET TO ADD SPACE.
        string ans;
        while(!st.empty()){
            ans+=st.top();
            st.pop();
            if(!st.empty()){
                ans+=' ';
            }
        }
        return ans;
    }