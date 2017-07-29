//
//  main.c
//  Stack
//
//  Created by 王增康 on 16/2/20.
//  Copyright © 2016年 CHW. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int main(void) {
    char a[101],s[101];
    int i, len, mid, next, top;
    
    gets(a);
    len = strlen(a);
    mid = len / 2 - 1;
    
    top = 0;
    for(i = 0; i <= mid; i++)
    {
        s[++top] = a[i];
    }
    
    if(len % 2 == 0)
    {
        next = mid + 1;
    }
    else
    {
        next = mid + 2;
    }
    
    for(i = next; i<= len-1; i++)
    {
        if(a[i] != s[top])
        {
            break;
        }
        top--;
    }
    
    if(top == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    getchar();getchar();
    return 0;
}
