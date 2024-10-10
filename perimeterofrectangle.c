#include<stdio.h>
int main(){
    int a,b;
    scanf("%d %d", &a, &b);
    int perimeter=0;
    perimeter=2*(a+b);
    printf("perimeter is %d", perimeter);
    
    return 0;
}