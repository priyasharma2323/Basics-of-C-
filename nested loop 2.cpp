#include <iostream>
#include <sstream>
#include <string>
using namespace std;

string nestedForLoop(int n) {
    ostringstream res;
    // Loop i = 1, 2, ..., n-1, n
    for (int i = 1; i <= n; ++i) {
        // Loop j = 1, 2, ..., n-1, n
        for (int j = 1; j <= n; ++j) {
            res << "(" << i << ", " << j << "), ";
        }
    }
    return res.str();
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    string result = nestedForLoop(n);
    cout << "The pairs are: " << result << endl;

    return 0;
}
