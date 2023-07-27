/*
            Using Loop

Given a sorted array of integers and an elements k, write a function which returns the index on which k is present,
using Loop.

*/

#include<iostream>
using namespace std;

int binarySearch(int arr[],int n,int target){
    
    int l=0;
    int r=n-1;
    while(l<=r){
        int mid=l +(r-l)/2;
        if(arr[mid]==target){
            return mid;
        }
        else if(arr[mid]>target){
            r=mid-1;
        }
        else{
            l=mid+1;
        }
    }
    return -1;
}

int main(){
    int a[]={1,2,3,5,7,9,12};
    int n=sizeof(a)/sizeof(a[0]);
    int flag;
    int target;
    cout<<"Enter the no. to search "<<endl;
    cin>>target;
    flag=binarySearch(a,n,target);
    cout<<"The ELements is present at index "<<flag;
}