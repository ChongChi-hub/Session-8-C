#include <stdio.h>

int main()
{
    int array[5] = {1, 2, 3, 4, 5};
        printf("Cac phan tu trong mang tu cuoi ve dau la: ");
    for(int i = 4; i >= 0; i--){
        printf("%d ", array[i]);   
    }
    
    
    
    return 0;
}

