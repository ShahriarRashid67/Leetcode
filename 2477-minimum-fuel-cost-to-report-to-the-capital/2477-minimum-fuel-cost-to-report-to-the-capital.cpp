class Solution {
public:
     long long fuel=0;

    long long dfs(int u, int parent, vector<vector<int>>& adj, int& seats) {
        int sum = 1;
        for (auto v : adj[u]) {
            if (v != parent) {
                sum += dfs(v,u, adj, seats);
            }
        }
        if (u != 0) {
            fuel += ceil((double)sum / seats);
        }
        return sum;
    }
    long long minimumFuelCost(vector<vector<int>>& roads, int seats) {
        int n = roads.size() + 1;
        vector<vector<int>> adj(n);
        for (auto& road : roads) {
            adj[road[0]].push_back(road[1]);
            adj[road[1]].push_back(road[0]);
        }
        dfs(0, -1, adj, seats);
        return fuel;
    }
};