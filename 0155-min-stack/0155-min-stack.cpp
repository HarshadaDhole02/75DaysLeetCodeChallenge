class MinStack {
private:
    stack<long long> st;  
    long long mini;

public:
    MinStack() {}

    void push(int val) {
        if (st.empty()) {
            st.push(val);
            mini = val;
        }
        else if (val < mini) {
            st.push(2LL * val - mini);
            mini = val;
        }
        else {
            st.push(val);
        }
    }

    void pop() {
        if (st.empty()) return;

        long long x = st.top();
        st.pop();

        if (x < mini) {
            mini = 2LL * mini - x; // restore previous min
        }
    }

    int top() {
        if (st.empty()) return -1;

        long long x = st.top();
        if (x < mini)
            return (int)mini;
        else
            return (int)x;
    }

    int getMin() {
        if (st.empty()) return -1;
        return (int)mini;
    }
};
