#include <iostream>
using namespace std;

int main() {
    int n, min, min2 = 10e9 + 1;
    cin >> n; 
    min = n; 
    while (n > 0) {
        cin >> n;
        if (n == 0) {
            break;
        }
        if (n <= min){
            min2 = min;
            min = n;
        } else if (n < min2) {
            min2 = n;
        }
    }
    cout << min2;


    return 0;
}