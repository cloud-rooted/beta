#include <stdio.h>

void heap(int a[], int n, int i) {
    int l = 2 * i + 1, r = 2 * i + 2, b = i;

    if (l < n && a[l] > a[b]) b = l;
    if (r < n && a[r] > a[b]) b = r;

    if (b != i) {
        int t = a[i];
        a[i] = a[b];
        a[b] = t;
        heap(a, n, b);
    }
}

void heapsort(int a[], int n) {
    for (int i = n / 2 - 1; i >= 0; i--)
        heap(a, n, i);

    for (int i = n - 1; i > 0; i--) {
        int t = a[0];
        a[0] = a[i];
        a[i] = t;
        heap(a, i, 0);
    }
}

int main() {
    int a[10], n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    heapsort(a, n);

    printf("Sorted array:\n");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}

