#include <iostream>
#include <cstdint>
#include <cmath>
using namespace std;

int main() {
    short a; // 
    int b; // 4 bytes -2^31..2^31-1
    long long c; // 8 bytes
    
    float f1 = 2.5; // 4 bytes
    //double d1 = 1.2; // 8 bytes

    char ch = 'a'; // 1 byte
    string str = "hello world"; // string

    double d1 = sqrt(2), d2 = sqrt(2);
    cout << (abs(d1 - d2) < 0.00000001) << endl;
    //cout << str << endl; 

    // int a1;
    // std::cin >> a1;
    // bool boolean = a1 >= 0 && a1 < 10; // && - and (И)
    // cout << boolean << endl;

    // int a2;
    // std::cin >> a2;
    // bool boolean = a2 % 3 == 0 || a2 % 7 == 0 || a2 % 2 == 0; // || - or (ИЛИ)
    // cout << boolean << endl;

    int a2;
    std::cin >> a2;
    if (a2 % 3 == 0 || a2 % 7 == 0 || a2 % 2 == 0)  {
        cout << "YES" << endl;
    } // || - or (ИЛИ)
    return 0;
}