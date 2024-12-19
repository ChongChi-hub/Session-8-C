#include <stdio.h>

int main()
{
    int array[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };
    int sum = 0;
    printf("Cac gia tri bien cua ma tran la: ");
    for(int i = 0; i < 3; i++ ){
        for(int j = 0; j < 4; j++){
            if(i == 0 || j == 0 || i == 3 - 1 || j == 4 - 1){
                sum = sum + array[i][j];
                printf("%d ", array[i][j]);
                
            }
        }
    }
    printf("\nTong cac gia tri bien cua ma tran la: %d", sum);

    return 0;
}

