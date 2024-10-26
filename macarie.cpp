#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void findDivisors(int num, vector<int>& divisors) {
    for (int i = 1; i * i <= num; ++i) {
        if (num % i == 0) {
            divisors.push_back(i);
            if (i != num / i) {
                divisors.push_back(num / i);
            }
        }
    }
}

int main() {
    int N, Q;
    cin >> N >> Q;

    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    vector<int> Poz(Q);
    for (int i = 0; i < Q; ++i) {
        cin >> Poz[i];
    }


    vector<int> divisors;
    for (const int& num : A) {
        findDivisors(num, divisors);
    }

    sort(divisors.begin(), divisors.end());

    vector<int> results(Q);
    for (int i = 0; i < Q; ++i) {
        results[i] = divisors[Poz[i] - 1]; 
    }


    for (const int& result : results) {
        cout << result << " ";
    }
    cout << endl;

    return 0;
}
