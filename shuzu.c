#include<stdio.h>
#define lun  10//lun为数组长度
int b, i, c; // i为计数器 c为输入值地址 b用于移动数组角标
int shuzu[lun] = { 1,3,5,8,10,11,13,16,19 };  //定义数组
int main(void)
{
    printf("原数组元素:\n");
    for (i = 0; i < lun - 1; i++)
    {                                     //输出原数组
        printf("%d  ", shuzu[i]);
    }
    printf("\n");
    printf("请输入一个值（整数）；");
    scanf("%d", &c);

    if (c < shuzu[lun-2])
    {
        for (i = 0; i < lun; i++) {
            if (shuzu[i] > c) {
                break;
            }
        }
        for (b = lun - 2; i <= b; b--)
        {                //对输入值进行判断和处理，最后输出
            shuzu[b + 1] = shuzu[b];
        }
        shuzu[i] = c;
        for (i = 0; i < lun; i++)
            printf("%d ", shuzu[i]);
    }

    else {
        shuzu[9] = c;
        for (i = 0; i < lun; i++)
            printf("%d ", shuzu[i]);

    }
    return 0;

}


    
