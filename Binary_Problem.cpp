#include<iostream>
using namespace std;
int BS(int a[],int i,int j,int x)
{
    int mid=(i+j)/2;
    if(a[mid]==x)
        return mid;
    else if(a[mid]>x)
        BS(a,i,mid-1,x);
    else
        BS(a,i,mid+1,x);
}
int main()
{
    int a[12]={10,20,30,40,50,70,412,78,96,547,582,100};
    int x=30;
    int i=0,j=5;
    //cout<<"salman:"<<endl;
    int p=BS(a,0,11,x);
    cout<<"return value p:"<<p<<endl;
} 