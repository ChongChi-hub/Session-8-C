#include <stdio.h>

int main()
{
    int n;
    printf("Nhap so nguyen (so hang va so cot cua ma tran hinh vuong): ");
    scanf("%d", &n);

    if(n <= 2){
        printf("Vui long nhap n > 2.\n");
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
    printf("Ma tran ban vua nhap la:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
    
    //Tong gtri bien.
    int sum1 = 0;
    for(int i = 0; i < n; i++ ){
        for(int j = 0; j < n; j++){
            if(i == 0 || j == 0 || i == n - 1 || j == n - 1){
                sum1 = sum1 + array[i][j];
            }
        }
    }
    printf("Tong cac gia tri bien cua ma tran la: %d", sum1);
    
    //Tong gtri tren dg cheo chinh
    int sum2 = 0;
    for (int i = 0; i < n; i++) {
        sum2 = sum2 + array[i][i];
    }
    printf("\nTong cac gia tri nam tren duong cheo chinh la: %d", sum2);

    //Tong gtri nam duoi dg cheo chinh.
    int sum3 = 0;
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            sum3 = sum3 + array[i][j];
        }
    }
    printf("\nTong cac gia tri nam duoi duong cheo chinh la: %d", sum3);
    return 0;
}


