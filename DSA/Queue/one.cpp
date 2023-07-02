#include<iostream>
#include<queue>
#include<map>
using namespace std;

string longest(string str) {
    map<char,int> m;
    queue<char> q;
    string ans = "";
    for(int i = 0; i < str.length(); i++) {
        m[str[i]]++;
        q.push(str[i]);
        while(!q.empty()) {
            if(m[q.front()] > 1) {
                q.pop();
            }
            // else {
            //     ans.push_back(q.front());
            // }
        }
    }
    for(int i = 0; i < ans.length(); i++) {
        cout<<ans[i];
    }

}

int main() {
    string str = "abcda";
    longest(str);
}