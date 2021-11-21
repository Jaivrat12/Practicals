/*
Write a function template for finding the minimum value contained in an array.
*/
#include <iostream>
using namespace std;

int find_min(int* arr, int size) {

    int min_n = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < min_n) {
            min_n = arr[i];
        }
    }
    return min_n;
}

int main() {

    int size;
    cout << "Enter size of the array: ";
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    cout << "Minimum element is: " << find_min(arr, size);
}