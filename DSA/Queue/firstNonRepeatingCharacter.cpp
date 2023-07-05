#include<iostream>
#include<unordered_map>
#include<queue>
using namespace std;

string firstNonRepeating(string s) {
    unordered_map<char,int> m;
    queue<int> q;
    string ans = "";
    for(int i = 0; i < s.length(); i++) {
        m[s[i]]++;
        q.push(s[i]);
    }
    while(!q.empty()) {
        if(m[q.front()] > 1) {
            q.pop();
        }
        else {
            ans.push_back(q.front());
            break;
        }
    }
    if(q.empty()) {
        ans.push_back('#');
    }
    return ans;
}

int main() {
    string str = "loveleetcode";
    string ans = firstNonRepeating(str);
    cout<<ans;
}