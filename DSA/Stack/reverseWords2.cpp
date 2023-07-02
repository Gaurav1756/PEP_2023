#include<iostream>
using namespace std;
int main() {
    string str = "Hey, How are you?";
    for(int i = 0; i < str.length(); i++) {
        int s = 0;
        int e = 0;
        while(str[i] != ' ') {
            e++;
        }
        while(s <= e) {
            swap(str[s],str[e]);
            s++;
            e--;
        }
        s++;
        e = s;
    }
    cout<<str;
}