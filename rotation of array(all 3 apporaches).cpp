#include<iostream>
using namespace std;
void RotationUsingExtraSpace(int arr[],int n)
{int temp[10],i=0,ele,t;
 cout<<"Enter the no. of element to rotate :"<<endl;
 cin>>ele;
 t=ele;
 while(t--)//storing the element to temporary array
 { temp[i]=arr[i];
    i++;}
    for(i=0;i<n-ele;i++)
        arr[i]=arr[i+ele];
        int j=0;
    for(i=n-ele;i<n;i++)
      {  arr[i]=temp[j];
         j++;
      }
    for(i=0;i<n;i++)
        cout<<arr[i]<<endl;
}
void rotationWithoutExtraSpace(int arr[],int n)
{ int i=0,j=0,temp,element;
cout<<"Enter the number of element to be rotated"<<endl;
cin>>element;
while(element--)
{
    temp=arr[0];
    for(i=1;i<n;i++)
        arr[i-1]=arr[i];
    arr[n-1]=temp;
}
for(i=0;i<n;i++)
    cout<<arr[i]<<endl;
}
int rotation(int arr[],int l,int r)
{int temp;
while(l<r)
{
    temp=arr[l];
    arr[l]=arr[r];
    arr[r]=temp;
    l++;
    r--;
}
return 0;
}
void rotationusingreverse(int arr[],int n)
{ int element ;
  cout<<"Enter the no of element to be rotated :"<<endl;
  cin>>element;
  rotation(arr,0,element-1);
  rotation(arr,element,n-1);
  rotation(arr,0,n-1);
  for(int i=0;i<n;i++)
    cout<<arr[i]<<endl;

}
int main()
{
    int arr[10],n,k;
    cout<<"Enter the size of array :"<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    cin>>arr[i];
     RotationUsingExtraSpace(arr,n);
     rotationWithoutExtraSpace(arr,n);
     rotationusingreverse(arr,n);
return 0;
}
