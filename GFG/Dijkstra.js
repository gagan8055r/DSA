
function dijkstra(graph,src)
{
    const n=graph.length
    const dist=new Array (n).fill(Infinity)
    const visited=new Array(n).fill(false)
    dist[src]=0
    for(let i=0;i<n-1;i++)
    {
        let u=-1
        for(let j=0;j<n;j++)
        {
            if(!visited[j] && (u===-1 || dist[j]<dist[u]))
            {

                u=j;
            }
        }
    

    visited[u]=true

    for(let v=0;v<n;v++)
    {
        if(!visited[v]&&graph[u][v]!==0 && dist[u]!==Infinity&&dist[u]+graph[u][v]<dist[v])
        {
            dist[v]=dist[u]+graph[u][v]
        }
    }
}
console.log("Vector \t Distance from source");

for(let i=0;i<n;i++)
{
    console.log(i+"\t\t",+dist[i]);
}

}


const graph = [
  [0, 2, 3, 0, 0],
  [2, 0, 0, 1, 6],
  [3, 0, 0, 4, 0],
  [0, 1, 4, 0, 5],
  [0, 6, 0, 5, 0],
];
const src=0
dijkstra(graph,src)
