#include <iostream>

using namespace std;

void merge(int a[], int lb, int mid, int ub) {
    int i = lb;e input array (n) i
    int j = mid + 1;
    int k = lb;
    int b[10];

    while (i <= mid && j <= ub) {
        if (a[i] <= a[j]) {
            b[k] = a[i];
            i++;
        } else {
            b[k] = a[j];
            j++;
        }
        k++;
    }

    if (i > mid) {
        while (j <= ub) {
            b[k] = a[j];
            j++;
            k++;
        }
    }

    while (i <= mid) {
        b[k] = a[i];
        i++;
        k++;
    }

    for (k = lb; k <= ub; k++) {
        a[k] = b[k];
    }
}

void mergeSort(int a[], int lb, int ub) { // Fixed parameter type and added square brackets to indicate an array
    if (lb < ub) {
        int mid = (lb + ub) / 2;
        mergeSort(a, lb, mid);
        mergeSort(a, mid + 1, ub);

        merge(a, lb, mid, ub);
    }
}

int main() {
    int a[] = {5, 2, 7, 1,40, 3, 8, 4, 6,}; // Example array to be sorted
    int n = sizeof(a) / sizeof(a[0]); // Calculate the size of the array

    mergeSort(a, 0, n - 1); // Call mergeSort function

    // Print the sorted array
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    return 0;
}
