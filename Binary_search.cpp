#include<iostream>
using namespace std;
int main()
{
    int n,key;
    int sum=0;
    cin>>n;
    int *arr;
    arr= new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    cout<<"Enter the key";
    cin>>key;
    int s=0,e=n-1;
    while(s<=e)
    {
        int mid = (s+e)/2;
        if(arr[mid] == key)
        {
            cout<<"Element found";
            break;
        }
        else if(arr[mid] < key)
        {
            s=mid+1;

        }
        else
        {
            e=mid-1;
               }
        
    }
    cout<<"Element not found";
}