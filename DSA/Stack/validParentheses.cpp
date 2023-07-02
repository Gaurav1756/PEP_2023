#include<iostream>
#include<stack>
using namespace std;

bool match(char a, char b) {
        return ((a == '{' && b == '}') || 
        (a == '[' && b == ']' ) ||
        (a == '(' && b == ')'));
    }
bool isValid(string s) {
    stack<char> st;
    for(int i = 0; i < s.length(); i++) {
        if(s[i] == '{' || s[i] == '[' || s[i] == '(') {
            st.push(s[i]);
        }
        else {
            if(st.empty() == true) return false;
            if(match(st.top(), s[i]) == false) return false;
            else {
                st.pop();
            }
        }
    }
    return (st.empty() == true);
}
int main() {
    string str = "{{[]}}";
    bool ans = isValid(str);
    if(ans) {
        cout<<"yes";
    }
    else {
        cout<<"No";
    }
}