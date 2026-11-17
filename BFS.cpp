#include<bits/stdc++.h>
using namespace std;

int adj[6][6],vis[6],n,e,res[6],j;

void bfs(int s)
{
  queue<int> q;
  vis[s] = 1;
  q.push(s);
  while(!q.empty())
  {
    int cur = q.front();
    q.pop();
    res[j++]=cur;
    for(int i=0;i<n;i++)
    {
      int neigh = i;
      if(adj[cur][i]==1)
      {
        if(vis[neigh]==0)
        {
          vis[neigh]=1;
          q.push(neigh);
        }
      }
    }
  }
  for(int i=0;i<j;i++)
    cout<<res[i]<<" ";
}

int main()
{
  int x,y;
  cin>>n>>e;
  for(int i=0;i<e;i++)
  {
    cin>>x>>y;
    adj[x][y]=1;
    adj[y][x]=1;
  }
  bfs(0);
}

/*
4 4
0 1
1 2
2 3
0 3
*/
