#include <iostream>
#include <unordered_map>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while (t--) {
        long long n;
        cin >> n;

        unordered_map<long long, long long> count_map;
        long long max_occurrences = 0;
        long long most_frequent_number = 0;

    
        while (n != 1) {
            count_map[n]++;
        
            if (count_map[n] > max_occurrences || (count_map[n] == max_occurrences && n > most_frequent_number)) {
                max_occurrences = count_map[n];
                most_frequent_number = n;
            }

            
            if (n % 2 == 0) {
                n /= 2; 
            } else {
                n = 3 * n + 1; 
            }
        }
        
        count_map[1]++;
        if (count_map[1] > max_occurrences || (count_map[1] == max_occurrences && 1 > most_frequent_number)) {
            most_frequent_number = 1;
        }

        cout << most_frequent_number << "\n";
    }

    return 0;
}
