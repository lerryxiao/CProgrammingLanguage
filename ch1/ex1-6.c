/**
 *  练习 1-6  验证表达式 getchar() != EOF  的值是 0 还是 1
 */

#include <stdio.h>

int main()
{
    int c = 0;
    int r = ((c = getchar()) != EOF);
    printf("%d \n", r);
    return 0;
}