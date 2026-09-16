class MinStack {
    stack<int> st;
    stack<int> minSt;

public:
    MinStack() {
    }

    void push(int val) {
        st.push(val);

        if (minSt.empty() || val <= minSt.top())
            minSt.push(val);
    }

    void pop() {
        if (st.top() == minSt.top())
            minSt.pop();

        st.pop();
    }

    int top() {
        return st.top();
    }

    int getMin() {
        return minSt.top();
    }
};