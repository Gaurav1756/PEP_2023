#include<iostream>
#include<stack>
using namespace std;

string reverse(string &str) {
    stack<char> s;
    string ans;
    for(int i = 0; i < str.length(); i++) {
        s.push(str[i]);
        if(str[i] == ' ') {
            while(!s.empty()) {
                ans.push_back(s.top());
                s.pop();
            }
        }
    }
    ans.push_back(' ');
    while(!s.empty()) {
        ans.push_back(s.top());
        s.pop();
    }
    return ans;
}

int main() {
    string str = "Apple is a fruit";
    string ans = reverse(str);
    cout<<ans;
}