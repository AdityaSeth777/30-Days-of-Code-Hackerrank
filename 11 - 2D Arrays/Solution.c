#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int arr[6][6];
    for(int i=0;i<6;i++){
        for(int j=0;j<6;j++){
            scanf("%d", &arr[i][j]);
        }
    }
    int max_sum = 0;
    int temp_sum;
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            temp_sum = 0;
            temp_sum += arr[i][j];
            temp_sum += arr[i][j+1];
            temp_sum += arr[i][j+2];
            temp_sum += arr[i+1][j+1];
            temp_sum += arr[i+2][j];
            temp_sum += arr[i+2][j+1];
            temp_sum += arr[i+2][j+2];
            
            //Aditya Seth
            if(temp_sum > max_sum || i == 0 && j == 0)
                max_sum = temp_sum;
        }
    }
    printf("%d\n", max_sum);
    return 0;
}
