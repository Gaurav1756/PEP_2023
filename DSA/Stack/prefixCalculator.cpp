#include<iostream>
#include<stack>
using namespace std;

void prefixCalculator(string str) {
    stack<int> s;
    int a,b;
    for(int i = str.length()-1; i >= 0; i--) {
        if(isdigit(str[i])) {
            s.push(str[i] - '0');
        }
        else {
            if(s.size() >= 2) {
                a = s.top();
                s.pop();
                b = s.top();
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
    }
    cout<<s.top();
}

int main() {
    string str = "-+7*45+20";
    prefixCalculator(str);
}