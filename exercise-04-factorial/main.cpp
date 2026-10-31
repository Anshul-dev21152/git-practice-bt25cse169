#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n < 0 || n > 20) {
        cout << "Enter a number from 0 to 20\n";
        return 0;
    }

    unsigned long long result = 1;

    for (int i = 1; i <= n; i++) {
        result *= i;
    }

    cout << result << '\n';
    return 0;
}
