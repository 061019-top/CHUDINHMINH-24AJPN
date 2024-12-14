#include <stdio.h>
#include <stdlib.h>

int** taoMaTran(int hang, int cot) {
    int** maTran = (int**)malloc(hang * sizeof(int*));
    for (int i = 0; i < hang; i++) {
        maTran[i] = (int*)malloc(cot * sizeof(int));
    }

    printf("Nhap cac gia tri cho ma tran:\n");
    for (int i = 0; i < hang; i++) {
        for (int j = 0; j < cot; j++) {
            printf("Nhap gia tri tai [%d][%d]: ", i, j);
            scanf("%d", &maTran[i][j]);
        }
    }

    return maTran;
}

void inMaTran(int** maTran, int hang, int cot) {
    printf("Ma tran da nhap:\n");
    for (int i = 0; i < hang; i++) {
        for (int j = 0; j < cot; j++) {
            printf("%d ", maTran[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int hang, cot;

    printf("Nhap so hang cua ma tran: ");
    scanf("%d", &hang);
    printf("Nhap so cot cua ma tran: ");
    scanf("%d", &cot);

    int** maTran = taoMaTran(hang, cot);

    inMaTran(maTran, hang, cot);

    for (int i = 0; i < hang; i++) {
        free(maTran[i]);
    }
    free(maTran);

    return 0;
}

