/* W.A.P. to find largest, second largest and third largest in a given array */
#include <iostream>
using namespace std;

int main() {

    int size;
    cout << "Enter size of array: ";
    cin >> size;
    int arr[size];
    cout << "Enter elements of the array: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int first = 0, second = -1, third = -1;
    for (int i = 1; i < size; i++) {

        if (arr[first] < arr[i]) {
            third = second;
            second = first;
            first = i;
        } else if (arr[i] != arr[first] && (second == -1 || arr[second] < arr[i])) {
            third = second;
            second = i;
        } else if (arr[i] != arr[second] && (third == -1 || arr[third] < arr[i])) {
            third = i;
        }
    }

    cout << "\nFirst  largest: " << arr[first]
         << "\nSecond largest: " << arr[second]
         << "\nThird  largest: " << arr[third];
}