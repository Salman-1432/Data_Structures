#include<iostream>
using namespace std;
#define max 50
class graph
{
    
    public:
    void printfunction(int Arr[max][max],int n,int m);

};
void graph::printfunction(int Arr[max][max],int n,int m)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            Arr[i][j]=0;
        }
    }
    
    int u,v;  
    for(int j=1;j<=m;j++)
    {

        cout<<"Enter the u and v:"<<j<<endl;
        cin>>u>>v;
        Arr[u][v]=1;
        Arr[v][u]=1;
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cout<<Arr[i][j]<<" ";
        }
        cout<<"\n";
    }
} 
int main()
{
    graph g1;
    int n;
    int Arr[50][50];
    cout<<"Enter the size of the node:"<<endl;
    cin>>n;
    int m;
    cout<<"Enter the size of the eges:"<<endl;
    cin>>m;
    g1.printfunction(Arr,n,m);

}