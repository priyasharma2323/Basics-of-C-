#include <iostream>
using namespace std;

int whileLoopII(int n) {
    int res = 0;
    int i = 1; 
    // Loop sum 1, 4, 10, ...
    while (i <= n) {
        res += i;
        i++;
        i *= 2;
    }
    return res;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int result = whileLoopII(n);
    cout << "The sum of the sequence up to " << n << " is " << result << endl;

    return 0;
}
