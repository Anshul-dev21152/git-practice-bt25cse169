#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n < 0) {
        cout << "Enter a non-negative number\n";
        return 0;
    }

    unsigned long long a = 0, b = 1;

    for (int i = 0; i < n; i++) {
        cout << a;
        if (i + 1 < n) {
            cout << " ";
        }

        unsigned long long next = a + b;
        a = b;
        b = next;
    }

    cout << '\n';
    return 0;
}
