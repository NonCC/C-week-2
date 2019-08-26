#include<stdio.h>

int main(void)
{
int hr,min,sec,a;
scanf("%d",&a);
hr = a/3600;
min = (a-(hr*3600))/60;
sec = (a-(hr*3600)-(min*60));
printf("%d:%d:%d",hr,min,sec);
return 0;
}