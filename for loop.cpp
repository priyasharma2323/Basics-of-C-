#include <iostream>
using namespace std;


int forLoop(int n) {
    int res = 0;
    // Loop sum 1, 2, ..., n-1, n
    for (int i = 1; i <= n; ++i) {
        res += i;
    }
    return res;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int result = forLoop(n);
    cout << "The sum of numbers from 1 to " << n << " is " << result << endl;

    return 0;
}
