class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        vector<vector<pair<int, int>>> graph(n);
        for(auto flight :flights){
            graph[flight[0]].push_back({flight[1],flight[2]});
        }
        queue<pair<int,int>>qu;
        qu.push({src,0});
        vector<int>dist(n,INT_MAX);
        int stop=k+1;
        while(!qu.empty() && stop){
            int sz=qu.size();
            while(sz--){
                auto [cur,cost]=qu.front();
                qu.pop();
                for(auto &[neig,price]:graph[cur]){
                    if(price+cost<dist[neig]){
                        dist[neig]=price+cost;
                        qu.push({neig,price+cost});
                    }
                }
            }
            stop--;
        }
        
        if(dist[dst]==INT_MAX) return -1;
        return dist[dst];
    }
};