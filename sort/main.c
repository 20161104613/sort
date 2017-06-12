//
//  main.c
//  sort
//
//  Created by 20161104613 on 2017/6/12.
//  Copyright © 2017年 20161104613. All rights reserved.
//

#include <stdio.h>
int main()
{
    int a[10];
    int j,i,t;;
    printf("请输入10个数：\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=0;j<9;j++)
    {
        for(i=0;i<=8-j;i++)
        {
        if(a[i]>a[i+1])
        {
            t=a[i];
            a[i]=a[i+1];
            a[i+1]=t;
        }
        }
    }
    for(i=0;i<10;i++)
    {
        printf("%d",a[i]);
        printf(" ");
    }
    printf("\n");
    return 0;
}
