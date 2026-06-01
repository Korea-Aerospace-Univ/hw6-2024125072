#include <stdio.h>

int main(void)
{
    int N = 0, i = 0;
    int arr1[20] = {};
    int arr2[20] = {};
    int arr3[20] = {};
    int *p1 = arr1;
    int *p2 = arr2;
    int *p3 = arr3;
    
    scanf("%d", &N);
    
    for (p1 = arr1; p1 < arr1 + N; p1++) {
        scanf("%d", p1);
    }
    for (p2 = arr2; p2 < arr2 + N; p2++) {
        scanf("%d", p2);
    }
    
    p1 = arr1;
    p2 = arr2;
    
    for (p3 = arr3; p3 < arr3 + N; p3++) {
        *p3 = *(p1 + i) + *(p2 + N -1  - i);
        i++;
    }
    for (p3 = arr3; p3 < arr3 + N; p3++) {
        printf("%d ", *p3);
    }

    return 0;
}
