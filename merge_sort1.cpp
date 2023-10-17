/* #include<iostream>
using namespace std;
#define max 100
int mergesort(int Arr1[],int Arr2[],int Arr3[],int n1,int n2)
{
    int i,j,k;
    while(i<j)
    {
        if(Arr1[i]<Arr2[j])
            Arr3[k++]=Arr1[i++];
        else
            Arr3[k++]=Arr2[i++];
    }
    while(i<n1)
    {
        Arr3[k++]=Arr1[i++];
    }
    while(j<n2)
    {
        Arr3[k++]=Arr2[j++];
    }
}
int main()
{
    int n1,n2,Arr1[max],Arr2[max],Arr3[max];
    cout<<"Enter number for first array:"<<endl;
    cin>>n1;
    for(int i=0;i<n1;i++)
    {
        cin>>Arr1[i];
    }
    cout<<"Enter numeber for secon2d array:"<<endl;
    cin>>n2;
    for(int j=0;j<n2;j++)
    {
        cin>>Arr2[j];
    }
    mergesort(Arr1,Arr2,Arr3,n1,n2);
    cout<<"show list for the mergesort:"<<endl;
    for(int i=1;i<n1+n2;i++)
    {
        cout<<Arr3[i]<<" ";
    }
} */
#include<iostream>
using namespace std;
#define max 100
int mergesort(int Arr[],int lb,int mid,int ub)
{
    int k,i,j;
    i=lb;
    j=mid+1;
    k=lb;
    int Arr2[max];
    while(i<=mid && j<=ub)
    {
        if(Arr[i]<=Arr[j])
        {
            Arr2[k]=Arr[i];
        }
        else
        {
            Arr2[k]=Arr[j];
        }
        k++;
    }
    if(i>mid)
    {
        while(j<=ub)
        {
            Arr2[k]=Arr[j];
            k++,j++;
        }
    }
    else
        {
            while(i<=mid)
            {
                Arr2[k]=Arr[i];
                k++,i++;
            }
        }
    for(int k=lb;k<ub;k++)
    {
        cout<<Arr2[k]<<" ";
    }

}
int mergesort(int Arr[],int lb,int ub)
{
    if(lb<ub)
    {
        int mid=(lb+ub)/2;
        mergesort(Arr,lb,mid);
        mergesort(Arr,mid+1,ub);
        mergesort(Arr,lb,mid,ub);
    }

}
int main()
{
    int n;
    int Arr[max];
    cout<<"Enter the number:"<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>Arr[i];
    }
    mergesort(Arr,0,n-1);
    cout<<"show the array:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<Arr[i]<<" "<<endl;
    }
  
}