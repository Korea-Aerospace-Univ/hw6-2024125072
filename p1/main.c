#include <stdio.h>

int main(void)
{
/*

*/
    char arr[10] = {};

    char *p1 = nullptr;
    char *p2 = nullptr;
    
    int index = 0, cnt = 0;
    int maxNum = 0;
    char maxChar = '\0';
    int max = 0;
    
    scanf("%s", &arr);
    
    for (p1 = arr; p1 < arr + 10; p1++) {
        max = 0;
        for (p2 = p1; p2 < arr + 10; p2 ++) {
            
            if (*p1 == *p2) {
                max++;
            }
        }
        if (maxNum < max) {
            maxNum = max;
            maxChar = *p1;
        }
    }
    
    printf("%c %d", maxChar, maxNum);
    return 0;
}
