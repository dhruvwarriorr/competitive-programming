
vector<int> adj[N];
int val[N]; //value of node
int in[N], out[N];
int euler[2 * N];
int timer = 0;

void dfs(int node, int parent) {
    in[node] = timer++;

    for (int child : adj[node]) {
        if (child == parent) continue;
        dfs(child, node);
    }

    out[node] = timer++;
}

void buildEulerTour(int n, int root) {
    timer = 0;
    dfs(root, -1);

    for (int node = 1; node <= n; node++) {
       euler[in[node]] = euler[out[node]] = val[node];
        
    }
}

