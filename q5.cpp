/*

    Given an array of sorted characters consisting of lowercase alphabets and a particular target value,
    say k, the task is to find the smallest elements in the list that is larger than k, Print -1 if such
    element is not present.

*/

#include <iostream>
using namespace std;

int solve_bs(char a[], int n, char k)
{
    int l = 0;
    int r = n - 1;
    int mid;
    int res = -1;
    while (l <= r)
    {
        mid = l + (r - l) / 2;
        if (a[mid] == k)
        {
            l = mid + 1;
        }
        else if (a[mid] > k)
        {
            res = mid;
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
    char arr[] = {'b', 'c', 'f', 'h', 'i'};
    char k;
    cout << " Enter the target Element " << endl;
    cin >> k;
    int n = sizeof(arr) / sizeof(arr[0]);
    int val = solve_bs(arr, n, k);
    if(val==-1){
        cout<<" No such elements exists "<<endl;
    }
    else{
        cout<<"The smallest element greater than "<<k<<" is = "<<arr[val]<<endl;
    }
    return 0;
}