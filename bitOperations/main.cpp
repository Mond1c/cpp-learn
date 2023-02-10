#include <iostream>
#include <string>
using namespace std;

void print(int a) {
    string str;
    while (a) {
        str = to_string(a % 2) + str;
        a /= 2;
    }
    cout << str << endl;
}

int main() {
    // & 
    int a = 2, b = 3;
    print(a);
    print(b);
    // print(a & b);
    // cout << (a & b) << endl;
    // print(a | b);
    // cout << (a | b) << endl;
    print(a ^ b); // a ^ b = 01
    cout << (a ^ b) << endl;
    return 0;
}