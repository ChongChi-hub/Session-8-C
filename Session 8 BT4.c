#include <stdio.h>

int main()
{
    int array[2][4] = {{11, 26, 53, 47},{65, 74, 18, 49}}, max = 0;
    for(int i = 0; i < 2; i++ ){
        for(int j = 0; j < 4; j++){
            if(array[i][j] > max){
                max = array[i][j]; 
            }
        }
    }
    printf("So lon nhat trong mang la: %d", max);

    return 0;
}
