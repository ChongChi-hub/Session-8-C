#include <stdio.h>

int main()
{
    int n;
    printf("Nhap so nguyen (so hang va so cot cua ma tran hinh vuong): ");
    scanf("%d", &n);

    if(n <= 0){
        printf("Kich thuoc ma tran phai > 0.\n");
        return 0;
    }
    
    int array[n][n];
    printf("Nhap cac phan tu cho ma tran:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            printf("Nhap phan tu hang %d, cot %d: ", i + 1, j + 1);
            scanf("%d", &array[i][j]);
        }
    }
    printf("Ma tran vuong vua nhap la:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }

    return 0;
}


