// program ro print BFS traveral from a given
#include<iostream>
using namespace std;
#include<list>
#include<queue>
class graph
{
    int size;// no of vertices
    vector<list<int>> adj;
    public:
    graph(int size);// constructor
    void addEdge(int v,int u);// function to add an adge to graph
    void BFS(int s);// BFS traversal from a given source s

};
graph::graph(int size)
{
    this->size=size;
    adj.resize(size);
}
void graph::addEdge(int v,int u)
{
    adj[v].push_back(u);// add u to v's list
}
void graph::BFS(int s)
{
    // mark all the vertices as not visited
    vector <bool> visited;
    visited.resize(size,false);
    // create a queue for bfs
    list<int> queue;
    // mark the current node as visited and enqueue it
    visited[s]=true;
    queue.push_back(s);
    while(!queue.empty())
    {
        // Dequeue a vertex from queue and print it
        s=queue.front();
        cout<<s<<" ";
        queue.pop_front();
        // get all adjacent vertices of the dequeued
        // vertex s.
        for(auto adjecent:adj[s])
        {
            if(!visited[adjecent])
            {
                visited[adjecent]=true;
                queue.push_back(adjecent);
            }
        }
    }
}
int main()
{
    graph g(4);
    g.addEdge(0,1);
    g.addEdge(0,3);
    g.addEdge(1,2);
    g.addEdge(1,3);
    g.addEdge(3,2);
    cout<<"Breath first Traversal string from vertex 2:"<<endl;
    g.BFS(0);
}