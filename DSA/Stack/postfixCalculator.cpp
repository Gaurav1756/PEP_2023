#include<iostream>
#include<stack>
using namespace std;

void postfixCalculator(string str) {
    stack<int> s;
    for(int i = 0; i < str.length(); i++) {
        if(isdigit(str[i])) {
            s.push(str[i] - '0');
        }
        else {
            int a = s.top();
            s.pop();
            int b = s.top();
            s.pop();
            switch(str[i]) {
                case '+':
                s.push(a + b);
                break;
                case '-':
                s.push(a - b);
                break;
                case '*':
                s.push(a * b);
                break;
                case '/':
                s.push(a / b);
                break;
            }
        }
    }
    cout<<s.top();
}

int main() {
    string str = "234*+";
    postfixCalculator(str);
}