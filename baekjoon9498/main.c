//
//  main.c
//  baekjoon9498
//
//  Created by 이승섭 on 2018. 11. 3..
//  Copyright © 2018년 이승섭. All rights reserved.
//

#include <stdio.h>

int main(void)
{
    int num;
    scanf("%d", &num);
    
    if (90<=num && num<=100)
    {
        printf("A \n");
    }
    else if (80<=num && num<90)
    {
        printf("B \n");
    }
    else if (70<=num && num<80)
    {
        printf("C \n");
    }
    else if (60<=num && num<70)
    {
        printf("D \n");
    }
    else
        printf("F \n");
    return 0;
}
