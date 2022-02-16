//
//  review-6.c
//  HelloWorld
//
//  Created by 안유빈 on 2022/02/16.
//

#include <stdio.h>
int main(){
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);
    printf("%d\n", (x + y) % z);
    printf("%d\n", ((x % z) + (y % z)) % z);
    printf("%d\n", (x * y) % z);
    printf("%d\n", ((x % z) * (y % z)) % z);
    return 0;
}
