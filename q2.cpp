/*

Perform Binary Search using Recursion

*/

#include<iostream>
using namespace std;

int binarySearch(int arr[],int l,int r,int target){
    
    while(l<=r){
        int mid=l +(r-l)/2;
        if(arr[mid]==target){
            return mid;
        }
        else if(arr[mid]>target){
            r=mid-1;
            return binarySearch(arr,l,mid-1,target);
        }
        else{
            l=mid+1;
            return binarySearch(arr,mid+1,r,target);
        }
    }
    return -1;
}

int main(){
    int a[]={1,2,3,5,7,9,12};
    int n=sizeof(a)/sizeof(a[0]);
    int flag;
    int target;
    int l=0;
    int r=n-1;
    cout<<"Enter the no. to search "<<endl;
    cin>>target;
    flag=binarySearch(a,l,r,target);
    cout<<"The ELement is present at index "<<flag;

    return 0;
}