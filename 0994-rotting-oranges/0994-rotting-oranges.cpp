class Solution
{
public:
    bool isValid(int x, int y, int row, int col)
    {
        return (x >= 0 && x < row && y >= 0 && y < col);
    }
    int orangesRotting(vector<vector<int>> &grid)
    {
        int cnt = 0;
        queue<pair<int, int>> qu;
        int row = grid.size();
        int col = grid[0].size();
        int org=0;
        int f=0;
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                if (grid[i][j] == 2)
                {
                    qu.push({i, j});
                    f=1;
                }
                if (grid[i][j] != 0)
                {
                 org++;
                }
            }
        }
        int dir[4][2] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
        int torg=0;
        while (!qu.empty())
        {
            int sz = qu.size();
            torg+=sz;
            while (sz--)
            {
                pair<int, int> cur = qu.front();
                qu.pop();
                for (int i = 0; i < 4; i++)
                {
                    int x = dir[i][0] + cur.first;
                    int y = dir[i][1] + cur.second;
                    if (isValid(x, y, row, col))
                    {
                        if (grid[x][y] == 1)
                        {
                            grid[x][y] = 2;
                            qu.push({x, y});
                        }
                    }
                }
            }
            if(!qu.empty())
            cnt++;
        }
        if(org==torg) return cnt;
        return -1;
    }
};
