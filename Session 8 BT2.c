#include <stdio.h>

int main()
{
    int array[5] = {1, 2, 3, 4, 5}, check, flag = 0;

    printf("Nhap vao mot phan tu: ");
    scanf("%d", &check);

    for(int i = 0; i < 5; i++){
        if(array[i] == check){
            printf("Vi tri phan tu trong mang la: %d\n", i + 1);
            flag = 1;
            break;
        }
    }

    if (flag == 0) {
        printf("Phan tu %d khong ton tai trong mang.\n", check);
    }

    return 0;
}

