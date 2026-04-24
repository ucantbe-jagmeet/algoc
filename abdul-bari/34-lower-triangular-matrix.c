#include <stdio.h>

struct Matrix {
    int A[20];
    int n;
};

void Set(struct Matrix *m, int i, int j, int x) {
    if (i >= j)
        m->A[i * (i - 1) / 2 + (j - 1)] = x;
}

int Get(struct Matrix m, int i, int j) {
    if (i >= j)
        return m.A[i * (i - 1) / 2 + (j - 1)];
    else
        return 0;
}

void Display(struct Matrix m) {
    for (int i = 1; i <= m.n; i++) {
        for (int j = 1; j <= m.n; j++) {
            if (i >= j)
                printf("%d ", m.A[i * (i - 1) / 2 + (j - 1)]);
            else
                printf("0 ");
        }
        printf("\n");
    }
}

int main() {
    struct Matrix m;
    m.n = 3;

    Set(&m, 1, 1, 5);
    Set(&m, 2, 1, 4);
    Set(&m, 2, 2, 6);
    Set(&m, 3, 1, 11);
    Set(&m, 3, 2, 12);
    Set(&m, 3, 3, 14);

    printf("%d\n", Get(m, 2, 2));

    Display(m);

    return 0;
}