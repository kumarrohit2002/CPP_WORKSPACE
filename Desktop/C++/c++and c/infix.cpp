#include<iostream>
#include<stack>
#include<math.h>
using namespace std;

int cal(int v1, int v2, char ch) {
    if (ch == '^') return pow(v1, v2);
    if (ch == '/') return v1 / v2;
    if (ch == '*') return v1 * v2;
    if (ch == '+') return v1 + v2;
    return v1 - v2;
}

int precedence(char ch) {
    if (ch == '^') return 3;
    else if (ch == '*' || ch == '/') return 2;
    else if (ch == '+' || ch == '-') return 1;
    else return -1;
}

int eval(string &str) {
    stack<int> nums;
    stack<char> ops;
    for (int i = 0; i < str.size(); i++) {
        char ch = str[i];
        if (isdigit(ch) || (ch == '-' && (i == 0 || str[i - 1] == '('))) {
            int num = 0;
            int sign = 1;

            if (ch == '-') {
                sign = -1;
                i++; // Move to the next character
            }

            while (i < str.size() && isdigit(str[i])) {
                num = num * 10 + (str[i] - '0');
                i++;
            }

            i--; // Decrement i to account for the extra increment in the loop
            nums.push(num * sign);
        }
        else if (ch == '(') {
            ops.push('(');
        }
        else if (ch == ')') {
            while (!ops.empty() && ops.top() != '(') {
                char op = ops.top();
                ops.pop();
                int v2 = nums.top();
                nums.pop();
                int v1 = nums.top();
                nums.pop();
                nums.push(cal(v1, v2, op));
            }
            if (!ops.empty()) ops.pop(); // Remove the open parenthesis
        }
        else {
            while (!ops.empty() && precedence(ops.top()) >= precedence(ch)) {
                char op = ops.top();
                ops.pop();
                int v2 = nums.top();
                nums.pop();
                int v1 = nums.top();
                nums.pop();
                nums.push(cal(v1, v2, op));
            }
            ops.push(ch);
        }
    }
    while (!ops.empty()) {
        char op = ops.top();
        ops.pop();
        int v2 = nums.top();
        nums.pop();
        int v1 = nums.top();
        nums.pop();
        nums.push(cal(v1, v2, op));
    }
    return nums.top();
}

int main() {
    string s = "1+(2*(3-1))+2";
    cout << eval(s); // Output should be 7
    return 0;
}

