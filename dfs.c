#include <stdio.h>

int g[5][5] = {
    {0, 1, 1, 0, 0},
    {1, 0, 0, 1, 0},
    {1, 0, 0, 1, 1},
    {0, 1, 1, 0, 1},
    {0, 0, 1, 1, 0}
};

int vis[5] = {0, 0, 0, 0, 0};
int n = 5;

void dfs(int v) {
    printf("%d ", v);
    vis[v] = 1;

    for (int i = 0; i < n; i++)
        if (g[v][i] && !vis[i])
            dfs(i);
}

int main() {
    printf("DFS Traversal starting from vertex 0:\n");
    dfs(0);
    return 0;
}


