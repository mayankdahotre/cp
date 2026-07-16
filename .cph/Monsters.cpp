#include <bits/stdc++.h>
using namespace std;

int n,m;
vector<string> grid;
vector<vector<bool>> visited;

vector<int> dx = {1,-1,0,0};
vector<int> dy = {0,0,1,-1};
vector<char> dir = {'D','U','R','L'};

void dfs(int x, int y){
    visited[x][y]=true;

    for(int i=0; i<4; i++){
        int nx = x+dx[i];
        int ny = y+dy[i];

        if(nx>=0 && nx<n && ny>=0 && ny<m && !visited[nx][ny] && grid[nx][ny]!='#'){
            dfs(nx,ny);
        }
    }
}

int main(){
    cin>>n>>m;
    grid.resize(n);
    visited.assign(vector<bool>(m,false));

    for(int i=0; i<n; i++) cin>>grid[i];

    int sx=-1, sy=-1;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(grid[i][j]=='A'){
                sx = i;
                sy = j;
                break;
            }
        }
    }

    
}