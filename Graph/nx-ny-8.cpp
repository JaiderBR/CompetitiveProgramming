vector<vector<char>>board;
vector<vector<bool>>vis;
int n, m;
// U,UR, R,RD,D,LD,L, UL
int dx[8] = { -1, -1, 0, 1, 1, 1, 0, -1 };
int dy[8] = { 0, 1, 1, 1, 0, -1, -1, -1 };

void init() {
    board.resize(n + 1, vector<char>(m + 1));
    vis.resize(n + 1, vector<bool>(m + 1, 0));
}

void back(int x, int y) {
    vis[x][y] = 1;
    forn(i, 8) {
        int nx = x + dx[i], ny = y + dy[i];
        if (nx >= 0 && nx < n && ny >= 0 && ny < m && board[nx][ny] != '1' && !vis[nx][ny]) back(nx, ny);
    }
}
