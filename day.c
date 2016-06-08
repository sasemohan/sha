#include<stdio.h>

int main()

{

int hour1,min1,tmin1,hour2,min2,tmin2,leftmin;
scanf("%d%d",&hour1,&min1);
tmin1=hour1*60;
tmin1=tmin1+min1;
scanf("%d%d",&hour2,&min2);
tmin2=hour2*60;
tmin2=tmin2+min2;
leftmin=tmin2-tmin1;
printf("%d",leftmin);
return 0;

}
