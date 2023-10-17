/*#include<iostream>
using namespace std;
int palindrom(int Arr[],int n)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        int temp=Arr[i];
        int rem,sum=0;
        while(Arr[i]>0)
        {
            rem=Arr[i]%10;
            sum=(sum*10)+rem;
            Arr[i]=Arr[i]/10;
        }
        if(temp=sum)
            return count++;
        else
            return 0;
    }
}
int main()
{
    int Arr[]={111,222,333,444,555};
    int size=sizeof(Arr)/sizeof(int);
    int p=palindrom(Arr,size);
    cout<<"return is "<<p<<endl;
}

#include<iostream>
using namespace std;
int main()
{
    int Arr[]={0,-1,2,-3,1,-3,1};
    int x=-2;
    int count=0;
    for(int i=0;i<7;i++)
    {
        if(Arr[i]+Arr[i+1]==x)
        {
            count++;
        }
    }
    cout<<"count:"<<count<<endl;
}
#include<iostream>
using namespace std;
int main()
{
    int Arr[]={15 ,2,45 ,12 ,7};
    for(int i=0;i<5;i++)
    {
        if(Arr[i]==i+1)
        {
            cout<<i+1<<endl;
        }
        else
        {
            cout<<"condition is not true:"<<endl;
        }
    }
}

#include<iostream>
using namespace std;

/* 
            1 2 3       1 4 7
            4 5 6 ----> 2 5 8
            7 8 9       3 6 9 
int main()
{
    int Arr[3][3]={1,2,3,4,5,6,7,8,9};
    int r,c;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<Arr[j][i]<<" ";
        }
        cout<<"\n";
    }

}*/
#include<iostream>
using namespace std;
int main()
{
    /* 5 2
    10 20 30 40 50 */
    int a[100];
    int n,key;
    cout<<"Enter size:"<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter key:"<<endl;
    cin>>key;
    for(int i=0;i<n;i++)
    {
        if(i==2)
        {
            cout<<a[i]<<" ";
        }
    }
}