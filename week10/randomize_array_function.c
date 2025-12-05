#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 5

void initializeArray(int size, int array[size]){
    for(int i = 0; i < size; i++){
        array[i] = rand();
    }
}

void printArray(int size, int array[size]){
    for(int i = 0; i < size; i++){
        printf("%d\n", array[i]);
    }
}

int main(void){
    int array[SIZE];

    srand(time(NULL));  // 亂數種子，只執行一次

    initializeArray(SIZE, array);
    printArray(SIZE, array);

    return 0;
}
