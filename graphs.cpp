void dfs(int n){
    visited[n] = true;
    comp.pb(n);
    for (auto i:adj[n]){
        if (!visited[i]) dfs(i);
    }
    return;
}

int bfs(int startNode) {
    queue<int> bfsQueue;
    vector<bool> visited(n);
    int visCount = 0;

    visited[startNode] = true;
    bfsQueue.push(startNode);

    while (!bfsQueue.empty()) {
        int currentNode = bfsQueue.front();
        bfsQueue.pop();

        for (auto neighbour: graph[currentNode]) {
            if (!visited[neighbour]) {
                visited[neighbour] = true;
                bfsQueue.push(neighbour);
            }
        }
                
        visCount += 1;
    }

    return visCount;
}

