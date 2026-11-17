#include<bits/stdc++.h>
using namespace std;

int adj[6][6], vis[6], n, e, res[6], j = 0;

int main()
{
    int x, y;
    cin >> n >> e;
    
    for(int i = 0; i < e; i++)
    {
        cin >> x >> y;
        adj[x][y] = 1;
        adj[y][x] = 1;
    }

    int start_node = 0; // যেখান থেকে শুরু হবে
    stack<int> st;
    
    vis[start_node] = 1;
    st.push(start_node);

    // সরাসরি main ফাংশনের ভেতরে DFS লজিক
    while(!st.empty())
    {
        int cur = st.top();
        st.pop();
        res[j++] = cur;

        for(int i = 0; i < n; i++)
        {
            int neigh = i;
            if(adj[cur][i] == 1)
            {
                if(vis[neigh] == 0)
                {
                    vis[neigh] = 1;
                    st.push(neigh);
                }
            }
        }
    }

    // রেজাল্ট প্রিন্ট করা
    for(int i = 0; i < j; i++)
    {
        cout << res[i] << " ";
    }
    cout << endl;

    return 0;
}