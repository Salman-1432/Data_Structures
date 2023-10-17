// program to print DFS traversal from
// a given vertex in a given graph
#include<iostream>
using namespace std;
#include<map>
#include<list>
class graph
{
    public:
    map<int,bool> visited;
    map<int,list<int>> adj;
    // funcrion to add an edge to graph
    void addEdge(int v,int u);
    // DFS traversal of the vertices reachable from v
    void DFS(int v);
};
void graph::addEdge(int v,int u)
{
    adj[v].push_back(u);
}
void graph::DFS(int v)
{
    // mark the current node as visited and print it
    visited[v]=true;
    cout<<v<<" ";
    // recur for all the vertices adjecent to this vertex
    list<int>::iterator i;
    for(i=adj[v].begin();i!=adj[v].end();i++)
    {
        if(!visited[*i])
            DFS(*i);
    }
}
// driver's code
int main()
{
    // create a graph given in the above diagram
    graph g;
    int v,u,m;
    cout<<"Enter the edges:"<<endl;
    cin>>m;
    
    for(int i=0;i<6;i++)
    {
        cout<<"Enter Edges v and u:"<<i+1<<endl;
        cin>>v>>u;
        g.addEdge(v,u);
    }
    cout<<"Depth first Traversal staring from vertex :"<<endl;
    g.DFS(0);
}
