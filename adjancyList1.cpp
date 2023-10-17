/* #include<iostream>
using namespace std;
#define max 100
int main()
{
    int adj[max][max],i,j,n,u,v;
    int max_eges;
    int graph_type;
    cout<<"Enter the type of graph:1 or 2"<<endl;
    cin>>graph_type;
    cout<<"Enter the number for vertex:"<<endl;
    cin>>n;
    if(graph_type==1)
    {
        max_eges=n*(n-1)/2;
    }
    else{
        max_eges=n*(n-1);
    }
    for(i=1;i<=max_eges;i++)
    {
        cout<<"Enter the eges:u,v:"<<endl;
        cin>>u>>v;
        if((u==-1)&&(v==-1))
        {
            break;
        }
        if(u>=n || v>=n || u<0||v<0)
        {
            cout<<"Invalid vertex:"<<endl;
            i--;
        }
        else
        {
            adj[u][v]=1;
            if(graph_type==1)//undirect graph
                adj[u][v]=1;
        }
    }
    cout<<"show the adjacent matrix:"<<endl;
    for(i=1;i<=max_eges;i++)
    {
        for(j=1;j<=max_eges;j++)
        {
            cout<<adj[i][j]<<" ";
        }
        cout<<"\n";
    }
}
 */
#include<iostream>
using namespace std;
int main()
{
    int add[20][20],n,u,v;
    cout<<"Enter the number for vertex:"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            add[i][j]=0;
        }
    }
    for(int i=1;i<=n;i++)
    {
        cout<<"Enter the number for u,v:"<<i<<endl;
        cin>>u>>v;
        add[u][v]=1;
        add[v][u]=1;
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<<add[i][j]<<" ";
        }
        cout<<"\n";
    }
}
