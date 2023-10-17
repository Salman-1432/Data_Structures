/* #include<iostream>
using namespace std;
int bubblesort(int A[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int flag=0;
        for(int j=0;j<n-1-i;j++)
        {
            if(A[j]>A[j+1])
            {
                int tamp;
                tamp=A[j];
                A[j]=A[j+1];
                A[j+1]=tamp;
                flag=1;
            }
        }
        if(flag==0)
        break;
    }
}
int main()
{
    int A[50],n;
    cout<<"Enter the numer of the Array:"<<endl;
    cin>>n;
    cout<<"\n";
    cout<<"Enter the step by step:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    cout<<"\n";
    bubblesort(A,n);
    cout<<"show the bubble short:"<<endl;
    for(int i=0;i<n-1;i++)
    {
        cout<<A[i]<<endl;
    }
} */
#include<iostream>
using namespace std;
int fun1(int A[],int n,int k)
{
    for(int i=k-1;i>=0;i--)
    {
        cout<<A[i]<<" ";
    }
    cout<<endl;
    for(int i=n-1;n>k-1;i--)
    {
        cout<<A[i]<<" ";
    }
    cout<<endl;

}
int main()
{
    int A[5]={1,2,3,4,5};
    int size=sizeof(A)/sizeof(A[0]);
    int k=3;
    fun1(A,size,k);

}