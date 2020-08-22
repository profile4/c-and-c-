#include<stdio.h>
int main(){
    int a,b,c,d;
    scanf("%d %d",&a,&b);
    printf("%d %d %d %d %d",a+b,a-b,a*b,a/b,a%b);

    c=a>b?a:b;
    printf("the max is %d \n",c);
    printf("%d %d %d %d %d \n",a^b,a|b,a&b,~b,b<<1);

    scanf("%d %d %d",&a,&b,&d);
    printf(" the sum of %d+%d+%d is %d",a,b,d,a+b+d);
    return 0;
}
