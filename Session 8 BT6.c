#include <stdio.h>

int main()
{
    int array[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    printf("Ma tran:\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
    printf("Cac gia tri nam tren duong cheo chinh la: ");
    int sum = 0;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++){
            if(i == j){
                printf("%d ", array[i][j]);
        sum = sum + array[i][j];
            }
        }
    }
    printf("\nTong cac gia tri nam tren duong cheo chinh la: %d", sum);
    

    return 0;
}