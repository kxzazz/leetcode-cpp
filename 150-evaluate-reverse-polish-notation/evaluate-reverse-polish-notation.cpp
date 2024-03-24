class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for (string token : tokens) {
            if (token == "+") {
                int a = pops(st);
                int b = pops(st);
                st.push(a + b);
            }

            else if (token == "-") {
                int a = pops(st);
                int b = pops(st);

                st.push(b - a);
            }
            else if (token == "*") {
                int a = pops(st);
                int b = pops(st);

                st.push(a * b);
            }
            else if (token == "/") {
                int a = pops(st);
                int b = pops(st);

                st.push(b / a);
            } else{
                st.push(stoi(token));
            }

        }
        return st.top();
    }

    int pops(stack<int>& st) {
        int p = st.top();
        st.pop();
        return p;
    }
};