/*

    Given a sorted integer array containing duplicate. Count occurence of given number.
    Return -1 if the elements is not present .
    Complexity should be O(log n)

*/
#include <iostream>
using namespace std;

int firstIndex(int arr[], int l, int r, int k)
{
    int res = -1;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (arr[mid] == k)
        {
            res = mid;
            r = mid - 1;
        }
        else if (arr[mid] < k)
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }

    return res;
}

int lastIndex(int arr[], int l, int r, int k)
{
    int res = -1;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (arr[mid] == k)
        {
            res = mid;
            l = mid + 1;
        }
        else if (arr[mid] > k)
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }

    return res;
}

int main()
{
    int arr[] = {1, 3, 4, 4, 4, 4, 7, 9, 12};
    int k, l, r, first, last;
    int duplicates;
    int n = sizeof(arr) / sizeof(arr[0]);
    l = 0;
    r = n - 1;
    cout << "Enter the number to count its the duplicate " << endl;
    cin >> k;
    first = firstIndex(arr, l, r, k);
    last = lastIndex(arr, l, r, k);
    if (last == -1 || first == -1)
    {
        cout << "Not Present ";
    }
    else
    {
        duplicates = last - first + 1;
        cout << " Total no. of elements = " << duplicates;
    }
    return 0;
}