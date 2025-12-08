#include <stdio.h>
int main(){
    int row = 1;
    int col=1;

    while(row <= 5){
        
        while(col <= row){
            col = col + 1;
            printf("%d ", row);
        }
        while(col <= row){
            col = col + 1;
            printf("%d ", row);
        }
        row = row + 1;
        printf("\n");
    }
    return 0;
}