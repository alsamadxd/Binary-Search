/*

First index of occurence of an elements

*/

#include <iostream>
using namespace std;

int binarySearch(int a[], int l, int r, int k)
{
    int res = -1; // to store the first index

    while (l <= r)
    {

        int mid = l + (r - l) / 2;
        if (a[mid] == k) // check if target == element at a[mid]
        {
            res = mid; // to store the index
            r = mid - 1;
        }
        else if (a[mid] > k)
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return res; // return the first index of the element
}

int main()
{

    int a[] = {1, 2, 2, 3, 5, 5, 5, 5, 7, 9, 12};
    int n = sizeof(a) / sizeof(a[0]); // Calculate the size of array
    int index;
    int target;
    int l = 0;
    int r = n - 1;
    cout << "Enter the no. to search " << endl;
    cin >> target; // Get the element whose first index we have to find
    index = binarySearch(a, l, r, target);
    cout << "The ELement is present at index " << index;

    return 0;
}