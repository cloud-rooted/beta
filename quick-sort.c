#include <stdio.h>

int part(int a[], int l, int h) {
    int p = a[l], i = l, j = h;

    while (i < j) {
        while (a[i] <= p) i++;
        while (a[j] > p) j--;
        if (i < j) {
            int t = a[i];
            a[i] = a[j];
            a[j] = t;
        }
    }

    a[l] = a[j];
    a[j] = p;
    return j;
}

void qs(int a[], int l, int h) {
    if (l < h) {
        int p = part(a, l, h);
        qs(a, l, p - 1);
        qs(a, p + 1, h);
    }
}

int main() {
    int a[10], n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    qs(a, 0, n - 1);

    printf("Sorted array:\n");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}

