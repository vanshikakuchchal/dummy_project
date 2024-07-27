#include<iostream>
using namespace std;

bool search(int arr[], int n,int key)
{
    for(int i=0;i<n;i++)
    {
        if(key == arr[i])
        {
            return true;
        }
    }
    return false;
}
int main()
{
    int arr[10]={5,7,10,-34,67,788,33,22,566,-90};
    int len = sizeof(arr);
    int key=900;
    bool res;
    res = search(arr,10,key);
    cout<<res;
    return 0;
}