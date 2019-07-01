// Time: O(V + E)
// Space: O(V)

bool Graph::routeBetweenNodes(int s, int d){
    if(s == d) return true;
    vector<bool> visited(V, false);

    visited[s] = true;

    //BFS
    queue<int> q;
    q.push(s);
    while(!q.empty()){
        int s = q.front();
        q.pop();
        visited[s] = true;
        for(auto i: adj[s]){
            if(i == d){
                return true;
            }
            if(!visited[i]){
                visited[i] = true;
                q.push(i);
            }

        }
    }
    return false;
}
