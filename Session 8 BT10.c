#include <stdio.h>

int main() {
    int array[] = {1, 5, 2, 3, 23, 5, 1, 2};
    int size = sizeof(array) / sizeof(array[0]);
    int maxCount = 0;
    for(int i = 0; i < size; i++){
        int count = 0;
        for(int j = 0; j < size; j++){
            if(array[i] == array[j]){
                count++;
            }
        }
        if(count > maxCount){
            maxCount = count;
        }
    }
    printf("Cac phan tu xuat hien nhieu nhat: ");
    for(int i = 0; i < size; i++){
        int count = 0;
        for(int j = 0; j < size; j++){
            if(array[i] == array[j]){
                count++;
            }
        }
        if(count == maxCount){
            int flag = 0;
            for(int k = 0; k < i; k++){
                if(array[k] == array[i]){
                    flag = 1;
                    break;
                }
            }
            if(flag == 0) {
                printf("%d ", array[i]);
            }
        }
    }
    return 0;
}
