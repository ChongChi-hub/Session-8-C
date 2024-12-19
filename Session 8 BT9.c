#include <stdio.h>

int main() {
    int array[] = {1, 5, 2, 3, 23, 5, 1, 2};
    int size = sizeof(array) / sizeof(array[0]);
    int maxCount = 0, maxValue;

    for(int i = 0; i < size; i++){
        int count = 0;
        for(int j = 0; j < size; j++) {
            if(array[i] == array[j]) {
                count++;
            }
        }
        if(count > maxCount) {
            maxCount = count;
            maxValue = array[i];
        }
    }

    printf("Phan tu xuat hien nhieu nhat la: %d\n", maxValue);
    
    
    
    
    return 0;
}
