#include<iostream>
using namespace std;

// void myFunc() {
//     cout<<"This is my Function"<<endl;
// }

// void myFunc2() {
//     myFunc();
// }

// int main() {
//     myFunc2();
// }

// int main() {
//     int a,b;
//     cin>>a>>b;
//     int ans = 1;
//     for(int i = 1; i <= b; i++) {
//         ans = ans * a;
//     }
//     cout<<ans;
// }

// int power(int base, int power) {
//     int ans = 1;
//     for(int i = 1; i <= power; i++) {
//         ans = ans * base;
//     }
//     return ans;
// }

// int main() {
//     int a,b;
//     cin>>a>>b;
//     int ans = power(a,b);
//     cout<<ans;
// }

void test(int n) {
    n++;
    cout<<"test method n is : "<< n <<endl;
}

int main() {
    int n;
    cin>>n;
    test(n);
    cout<<"main method n is : "<< n <<endl;
}