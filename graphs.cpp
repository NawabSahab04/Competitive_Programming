void dfs(int n){
    visited[n] = true;
    comp.pb(n);
    for (auto i:adj[n]){
        if (!visited[i]) dfs(i);
    }
    return;
}

