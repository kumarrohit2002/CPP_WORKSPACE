#include <iostream>
#include <stack>
using namespace std;

void insertAtAnyindex(stack<int> &st, int idx, int x) {
    stack<int> temp;
    int n = st.size();
    int count = 0;
    while (count < n - idx) { // fixed typo here
        count++;
        int curr = st.top();
        st.pop();
        temp.push(curr);
    }
    st.push(x);
    while (not temp.empty()) {
        int curr = temp.top();
        temp.pop();
        st.push(curr);
    }
}

int main() {
    stack<int> st;
    st.push(2);
    st.push(4);
    st.push(6);
    st.push(8);
    insertAtAnyindex(st, 2, 0);
    while (not st.empty()) {
        cout << st.top() << endl;
        st.pop();
    }
    return 0;
}

