#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
vector <int> adj[N];

int maxDist = -1;
int farthestNode = -1;

void dfs(int node, int parent, int dist)
{
    if(dist > maxDist)
    {
        maxDist = dist;
        farthestNode = node;
    }

    for(int child : adj[node])
    {
        if(child != parent)
            dfs(child, node, dist + 1);
    }
}

int getDiameter()
{
    maxDist = -1;
    dfs(1, -1, 0);

    int start = farthestNode;

    maxDist = -1;
    dfs(start, -1, 0);

    return maxDist;
}

int main() {

    int nodes, edges;
    cin >> nodes >> edges;

    for (int i = 0; i < edges; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    cout << getDiameter() << "\n";

}
