#include <iostream>
using namespace std;
int binarySearch(int arr[], int n, int k)
{
    int left = 0;
    int right = n - 1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (arr[mid] == k)
        {
            return mid;
        }
        else if (arr[mid] < k)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    return -1;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 7;

    int position = binarySearch(arr, n, k);

    if (position != -1)
    {
        cout << "Element " << k << " is found at position " << position << endl;
    }
    else
    {
        cout << "Element " << k << " is not found in the array." << endl;
    }
    cout << "Siddharth 22BCS16071";
    return 0;
}
