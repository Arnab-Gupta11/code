#include <bits/stdc++.h>
using namespace std;

class myStack {
public:
    vector<int> v;

    void push(int val) {
        v.push_back(val);
    }

    void pop() {
        if (!v.empty()) {
            v.pop_back();
        }
    }

    int top() {
        return v.back();
    }

    bool isEmpty() {
        return v.empty();
    }
};

class myQueue {
public:
    vector<int> v;
    int front_idx = 0;

    void push(int val) {
        v.push_back(val);
    }

    void pop() {
        if (front_idx < v.size()) {
            front_idx++;
        }
    }

    int front() {
        return v[front_idx];
    }

    bool isEmpty() {
        return front_idx >= (int)v.size();
    }
};

int main() {

    int n, m;
    cin >> n >> m;

    myStack st;
    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        st.push(val);
    }

    myQueue q;
    for (int i = 0; i < m; i++) {
        int val;
        cin >> val;
        q.push(val);
    }

    if (n != m) {
        cout << "NO" << endl;
        return 0;
    }

    bool is_same = true;
    while (!st.isEmpty() && !q.isEmpty()) {
        if (st.top() != q.front()) {
            is_same = false;
            break;
        }
        st.pop();
        q.pop();
    }

    if (is_same) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}