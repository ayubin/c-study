#include <stdio.h>

int main(){
    int x, y;
    scanf("%d %d", &x, &y);
    int a = (x * (y % 10));
    int b = (x * ((y / 10) % 10));
    int c = (x * (((y/10) / 10) % 10));
    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", c);
    printf("%d\n", ((c * 100) + (b * 10) + a));
    return 0;
    
}
