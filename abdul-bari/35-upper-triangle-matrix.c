#include <stdio.h>

struct Matrix {
    int A[20];
    int n;
};

void Set(struct Matrix *m, int i, int j, int x) {
    if (i <= j)
        m->A[((i - 1) * m->n) - ((i - 2) * (i - 1) / 2) + (j - i)] = x;
}

int Get(struct Matrix m, int i, int j) {
    if (i <= j)
        return m.A[((i - 1) * m.n) - ((i - 2) * (i - 1) / 2) + (j - i)];
    else
        return 0;
}

void Display(struct Matrix m) {
    for (int i = 1; i <= m.n; i++) {
        for (int j = 1; j <= m.n; j++) {
            if (i <= j)
                printf("%d ", m.A[((i - 1) * m.n) - ((i - 2) * (i - 1) / 2) + (j - i)]);
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
    Set(&m, 1, 2, 4);
    Set(&m, 1, 3, 6);
    Set(&m, 2, 2, 2);
    Set(&m, 2, 3, 1);
    Set(&m, 3, 3, 3);

    printf("%d\n", Get(m, 2, 2));

    Display(m);

    return 0;
}