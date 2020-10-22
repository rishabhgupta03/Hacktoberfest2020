#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


/* Function to do DFS of graph

g : adjacency list of graph
N : number of vertices

return a list containing the DFS traversal of the given graph
*/

void DFSrec(vector<int> g[],int s, bool visited[],vector<int> *ans)
{
    visited[s]=true;
    ans->push_back(s);
    for(int x:g[s])
    if(visited[x]==false)
    DFSrec(g,x,visited,ans);
}
vector <int> dfs(vector<int> g[], int N)
{
    vector <int> ans;
    int s=0;
    bool visited[N];
    memset(visited,false,sizeof(visited));
    DFSrec(g,s,visited,&ans);
    
   return ans;

}



int main()
{
    int T;
    cin>>T;
    while(T--)
    {

        int N, E;
        cin>>N>>E;
        
        vector<int> g[N];
        bool vis[N];
        
        memset(vis, false, sizeof(vis));
        
        for(int i=0;i<E;i++)
        {
            int u,v;
            cin>>u>>v;
            g[u].push_back(v);
            g[v].push_back(u);
        }

        vector <int> res = dfs(g, N);
        for (int i = 0; i < res.size (); i++)
            cout << res[i] << " ";
        cout<<endl;

    }
}  
