//
//  review-7.c
//  HelloWorld
//
//  Created by 안유빈 on 2022/02/16.
//

#include <stdio.h>
int main(){
    int x, y;
    scanf("%d %d", &x, &y);
    int a = (x * (y % 10));
    int b = (x * ((y / 10) % 10));
    int c = (x * ((y / 10) / 10));
    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", c);
    printf("%d\n", (100 * c) + (10 * b) + a);
    return 0;
}
