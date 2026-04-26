#include <stdio.h>
int main()
{
    int a=2,b=3,temp;
    temp=a;
    a=b;
    b=temp;
    printf("the value of a=%d\nthe value of b=%d",a,b);
    return 0;
}
