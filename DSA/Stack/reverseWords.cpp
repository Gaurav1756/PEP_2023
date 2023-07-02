#include<iostream>
#include<stack>
using namespace std;
int main() {
    string str = "Hey, how are you?";
    stack<string> s;
    for(int i = 0; i < str.length(); i++) {
        string ans = "";
        while(str[i] != ' ') {
            ans.push_back(str[i]);
        }
        s.push(ans);
        i++;
    }
    while(s.empty() == false) {
        cout<<s.top()<<" ";
        s.pop();
    }
}