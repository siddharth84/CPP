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
    int arr[8];
    cout << "Enter array elements ";
    for (int i = 0; i < 8; i++)
    {
        cin >> arr[i];
    }
    int n = sizeof(arr) / sizeof(arr[0]);
    int k;
    cout << "Enter the number to find ";
    cin >> k;

    int position = binarySearch(arr, n, k);

    if (position != -1)
    {
        cout << "Element " << k << " is found at position " << position << endl;
    }
    else
    {
        cout << "Element " << k << " is not found in the array." << endl;
    }

    return 0;
}
