#include<iostream>
using namespace std;
int selectionsort(int Arr[],int n)
{
    cout<<"Enter sorting for selection:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>Arr[i];
    }
    for(int i=0;i<n-1;i++)
    {
        int min=i;
        for(int j=i+1;j<n;j++)
        {
            if(Arr[j]<Arr[min])
            {
                min=j;
            }
        }
        if(min!=i)
        {
            int temp;
            temp=Arr[i];
            Arr[i]=Arr[min];
            Arr[min]=temp;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<Arr[i]<<" ";
    }
}
int main()
{
    int Arr[5];
    int size=sizeof(Arr)/sizeof(int);
    int p=selectionsort(Arr,size);

}