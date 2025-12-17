#include <stdio.h>

int g[5][5] = {
    {0, 1, 1, 0, 0},
    {1, 0, 0, 1, 0},
    {1, 0, 0, 1, 1},
    {0, 1, 1, 0, 1},
    {0, 0, 1, 1, 0}
};

int q[5], f = 0, r = 0;
int vis[5] = {0, 0, 0, 0, 0};
int n = 5;

void bfs(int v) {
    printf("%d ", v);
    vis[v] = 1;
    q[r++] = v;

    while (f < r) {
        v = q[f++];

        for (int i = 0; i < n; i++)
            if (g[v][i] && !vis[i]) {
                printf("%d ", i);
                vis[i] = 1;
                q[r++] = i;
            }
    }
}

int main() {
    printf("BFS Traversal starting from vertex 0:\n");
    bfs(0);
    return 0;
}

