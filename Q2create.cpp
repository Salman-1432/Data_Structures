/* #include<iostream>
#include<unordered_map>
#include<list>
using namespace std;
class graph
{
    public:
    unordered_map<int,list<int>> adj;
    void addEdge(int u,int v,bool direction)
    {
        //direction =0->undirected
        // direction=1->directed graph
       adj[u].push_back(v);

    }
} 
#include<iostream>
using namespace std;
// directeded graph
int main()
{
    int vertex,edges,i,j,u,v,w;
    int adj[50][50];
    printf("Enter the numbert of vertex:\n");
    scanf("%d",&vertex);
    printf("Enter the number of the edges:\n");
    scanf("%d",&edges);
    for(i=1;i<=vertex;i++)
    {
        for(j=1;j<=edges;j++)
        {
            adj[i][j]=0;
        }
    }
    for(j=1;j<=edges;j++)
    {
        printf("Enter the two edges:\n");
        scanf("%d%d",&u,&v);
        printf("Enter weight the between two adges:");
        scanf("%d",&w);
        adj[u][v]=w;
    }
    for(i=1;i<=vertex;i++)
    {
        for(j=1;j<=edges;j++)
        {
            printf("%d  ",adj[i][j]);
        }
        cout<<"\n";
    }

    
}*/
#include<iostream>
using namespace std;
int main()
{
    int i,j,v1,e1,u,v,weight;
    int adj[50][50];
    cout<<"Enter the number for the row ,v1 and column,c1:"<<endl;
    cin>>v1>>e1;
    int n;
    for(i=1;i<=v1;i++)
    {
        for(j=0;j<=e1;j++)
        {
            adj[i][j]=0;  
        }
        cout<<"\n";
    }
    cout<<"enter the number the number for vertex:"<<endl;
    cin>>n;
    for(j=1;j<=n;j++)
    {
        cout<<"Enter the two number of the verdex and u v:"<<endl;
        cin>>u>>v;
        cout<<"Enter the number of the weight:"<<endl;
        cin>>weight;
        adj[u][v]=weight;
        adj[v][u]=weight;
    }
    for(i=1;i<=v1;i++)
    {
        for(j=1;j<=e1;j++)
        {
            cout<<adj[i][j]<<" ";
        }
        cout<<"\n";
    }

    
}