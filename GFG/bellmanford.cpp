
#include <iostream>

#define max 10
using namespace std;

typedef struct edge
{
    int src;
    int dest;
    int wt;
}edge;

// int max=10;


void bellman_ford(int nv,edge e[],int src_graph,int ne)
{
    int u,v,i,j,weight=0;
    int dis[max];
    
    for(i=0;i<nv;i++)
    {
        dis[i]=999;
    }
    
    dis[src_graph]=0;
    
    
    for(i=0;i<nv-1;i++)
    {
        for(j=0;j<ne;j++)
        {
            u=e[j].src;
            v=e[j].dest;
            weight=e[j].wt;
            
            if(dis[u]!=999 && dis[u]+weight<dis[v])
            {
                dis[v]=dis[u]+weight;
            }
        }
    }
    
    for(j=0;j<ne;j++)
    {
       u=e[j].src;
            v=e[j].dest;
            weight=e[j].wt;
            
            if(dis[u]+weight<dis[v])
            {
                cout<<"Negative cycle is present";
                return;
            }
    }
    
    for(i=0;i<nv;i++)
    {
        
    cout<<"Vertex"<<i<<"Distance from the source"<<dis[i];
    }
}

int main()
{
   int nv,ne,src_graph;
   edge e[max];
   
   cout<<"Enter the number of vertices";
   cin>>nv;
   cout<<"Enter the source vertex";
   cin>>src_graph;
   cout<<"Enter the number of edges";
   cin>>ne;
   
   for(int i=0;i<ne;i++)

{
    cout<<"For edge"<<i+1<<"=>";
    cout<<"Enter source vertex";
    cin>>e[i].src;
    cout<<"Enter destination vertex";
    cin>>e[i].dest;
    cout<<"Enter the weight";
    cin>>e[i].wt;
    

}
bellman_ford(nv,e,src_graph,ne);
    return 0;
}
