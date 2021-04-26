#include<iostream>
using namespace std;
void reversearray(int n,int arr[])
{
    int start=0,End=n-1;
    while(start<End)
    { int temp=arr[start];
    arr[start]=arr[End];
    arr[End]=temp;
    start++;
    End--;
    }
}
int main()
{
    int arr[100],n,i;
    cout<<"Enter the size of array :";
    cin>>n;
    for(i=0;i<n;i++)
        cin>>arr[i];
        reversearray(n,arr);
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }

}
