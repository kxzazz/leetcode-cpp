class Solution {
public:
    bool isValid(string s) {
        if(s.length() < 2) return false;
        stack<char> st;
        st.push('|');
        for (char c : s) {
            if (c == '(')
                st.push(')');
            else if (c == '{')
                st.push('}');
            else if (c == '[')
                st.push(']');
            else if (c == st.top())
                st.pop();
            else
                return false;
        }
        st.pop();
        return st.empty();
    }
};