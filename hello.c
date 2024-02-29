#include<stdio.h>
#include "include/head.h"
#define NUMBER 3

int main()
{
    char test[] = "测试字符串";
    printf("%d\n", sum(1, 10));
    printf("%d\n", 110252);

#ifdef DEBUG
    printf("通过cmake构建 定义了debug宏,执行打印数据 %s\n", test);
#endif
    for (int i = 0; i < NUMBER; i++)
    {
        /* code */
        printf("定义了NUMBER宏,打印数据\n");
    }
    
    return 0;
}
