#include<iostream>//this is implemented using binary search and time complexity is o(logn) for first and second
using namespace std;//index so it is most efficient way to find out
int firstindex(int arr[],int n,int x)
{
    int mid,i;
   int l=0;
   int r=n-1;
   while(l<=r)
   {
       mid=(l+r)/2;
       if(arr[mid]==x&&(mid==0||arr[mid-1]!=x))
        return mid;
       if(arr[mid]>=x)
        r=mid-1;
       else
        l=mid+1;
   }
   return -1;
}
int lastindex(int arr[],int n,int x)
{
    int mid,i;
   int l=0;
   int r=n-1;
   while(l<=r)
   {
       mid=(l+r)/2;
       if(arr[mid]==x&&(mid==0||arr[mid+1]!=x))
        return mid;
       if(arr[mid]>x)
        r=mid-1;
       else
        l=mid+1;
   }
   return -1;
}
int main()
{
    cout<<"Enter the size of array"<<endl;
    int arr[100],i,n,x;
    cin>>n;
    cout<<"Enter the values of array in sorted in order :"<<endl;
    for(i=0;i<n;i++)
        cin>>arr[i];
        cout<<"Enter the value to be searched :"<<endl;
        cin>>x;
        int left=firstindex(arr,n,x);
        int right=lastindex(arr,n,x);
        if(left==-1 ||right==-1)
            cout<<"Value is not found"<<endl;
        else
            cout<<"starting index  "<<left<<"  Ending index  "<<right;


}
