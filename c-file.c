#include <stdio.h>

#ifdef __cplusplus
extern "C" {
#endif

void __stdcall asmfunc(int* arr, int* sum);

#ifdef __cplusplus
}
#endif

int main() {
    system("cls"); 

    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; 
    int sum = 0; 

    printf("The array: \n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    asmfunc(arr, &sum);

    
    printf("The sum of odd numbers: %d\n", sum);

    return 0;
}
