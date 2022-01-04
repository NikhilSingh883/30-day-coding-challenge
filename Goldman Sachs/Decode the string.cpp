class Solution{
    public:
        string decodedString(string s){
            stack<char> st;
            int n = s.size();
            
            for (auto x:s) {

                if (x == ']') {
                    string temp;
                    while (!st.empty() && st.top() != '[') {
                        temp = st.top() + temp;
                        st.pop();
                    }

                    st.pop();
                    string num;

                    while (!st.empty() && isdigit(st.top())) {
                        num = st.top() + num;
                        st.pop();
                    }
                    
                    int number = stoi(num);
                    string repeat;
                    for (int j = 0; j < number; j++)
                        repeat += temp;
                    for (char c : repeat)
                        st.push(c);
                }

                else
                    st.push(x);
            }
            
            string res;
            while (!st.empty()) {
                res = st.top() + res;
                st.pop();
            }
            return res;
        }
};