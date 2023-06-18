#include<iostream>
using namespace std;

string reverse(string name, int length) {
    int s = 0;
    int e = length-1;
    while(s <= e) {
        swap(name[s],name[e]);
        s++;
        e--;
    }
    return name;
}

bool isPalindrome(string name, string ans, int length) {
    for(int i = 0; i < length; i++) {
        if(name[i] == ans[i]) {
            continue;
        }
        else {
            return false;
        }
    }
    return true;
}

int main() {
    string name;
    cin>>name;
    int length = name.length();
    string ans = reverse(name,length);
    bool value = isPalindrome(name,ans,length);
    if(value) {
        cout<<"string is palindrome";
    }
    else {
        cout<<"string is not palindrome";
    }
}