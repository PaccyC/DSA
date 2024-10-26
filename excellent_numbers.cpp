#include <iostream>
#include <string>

using namespace std;

int main() {
    int N;
    cin >> N;

    for (int y = 0; y <= N; ++y) {
        int x = N - y;
        int sum = x + 5 * y;

        if (sum % 3 == 0) {
            // Construct the number
            string result = string(x, '1') + string(y, '5');
            cout << result << endl;
            return 0; // Found a valid excellent number
        }
    }

    // If no valid number is found
    cout << -1 << endl;
    return 0;
}
