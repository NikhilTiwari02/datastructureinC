#include<iostream>
#include<vector>
#include<process.h>
using namespace std;
int DeletionArray(vector<int> arr,int n);
int insertioninarray(vector<int>arr,int n);
int main()
{   vector <int> arr;
    int n,temp,choice;
    cout<<"Enter the size of array :"<<endl;
    cin>>n;
    cout<<"Enter the values of array"<<endl;
    for(int i=0;i<n;i++)
    { cin>>temp;
    arr.push_back(temp);}
    DeletionArray(arr,n);
    //insertioninarray(arr,n);
    return 0;
}
int insertioninarray(vector<int> arr,int n)
{   int pos,value;
    cout<<"Enter the position at which you want to add :"<<endl;
    cin>>pos;
    /*if(pos>n)
    {cout<<"Invalid choice"<<endl;
     exit(1);       }*/
    cout<<"Enter the value :"<<endl;
    cin>>value;
    for(int i=n-1;i>=pos-1;i--)
    arr[i+1]=arr[i];
    arr[pos-1]=value;
    for(int i=0;i<n+1;i++)
    cout<<arr[i]<<endl;
    return 0;
}
int DeletionArray(vector <int> arr,int n)
{
    int pos,i;
    cout<<"Enter the position at which deletion is to be performed :"<<endl;
    cin>>pos;
    for(i=pos-1;i<n-1;i++)
        arr[i]=arr[i+1];
    for(i=0;i<n-1;i++)
        cout<<arr[i]<<endl;
        return 0;
}
