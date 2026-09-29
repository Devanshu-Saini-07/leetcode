class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> st;

        for (string op : operations) {

            if (op == "C") {
                st.pop_back();
            }
            else if (op == "D") {
                st.push_back(st.back() * 2);
            }
            else if (op == "+") {
                st.push_back(st[st.size() - 1] + st[st.size() - 2]);
            }
            else {
                st.push_back(stoi(op));
            }
        }

        int sum = 0;

        for (int x : st) {
            sum += x;
        }

        return sum;
    }
};