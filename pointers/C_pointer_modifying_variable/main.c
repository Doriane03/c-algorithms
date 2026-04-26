#include <stdio.h>
int main(){
    int *p,a=2;
    p=&a;
    *p=3;
    printf("the value of *p=%d\nthe value of a=%d",*p,a);
return 0;
}
