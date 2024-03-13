#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int *array = new int[size];

    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < size; ++i) {
        cin >> array[i];
    }

    int n, m;
    cout << "Enter the value of n (nth smallest): ";
    cin >> n;
    cout << "Enter the value of m (mth largest): ";
    cin >> m;

    sort(array, array + size);
    int nthSmallest = array[n - 1];
    int mthLargest = array[size - m];

    int sum = nthSmallest + mthLargest;
    cout << "The sum of the " << n << "th smallest and " << m << "th largest elements is: " << sum << endl;
cout<<"Siidharth 22BCS16071";
    delete[] array;
    
    return 0;
}
