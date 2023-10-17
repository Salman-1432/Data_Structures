#include<iostream>
using namespace std;
int bubbleSort(int Arr[],int n)
{
    cout<<"Enter the sorting :"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>Arr[i];// for input
    }
    cout<<"bubble sort:"<<endl;
    for(int i=0;i<n-1;i++)
    {
        int flag=0;
        for(int j=0;j<n-1-i;j++)
        {
            int temp;
            if(Arr[j]<Arr[j+1]) // for reverse element // for swap number
            {
            temp=Arr[j];
            Arr[j]=Arr[j+1];
            Arr[j+1]=temp;
            flag=1;
            }
        }
        if(flag==0)
        {
            cout<<"sorted is already:"<<endl;
            break;
        }
    }
    cout<<"show the data:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<Arr[i]<<" ";// print the number;
    }
}
int main()
{
    int Arr[5];
    int size=sizeof(Arr)/sizeof(int);// declare size of the array
    int p=bubbleSort(Arr,size);// calling the function             
}
