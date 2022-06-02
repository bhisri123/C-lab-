#include<stdio.h>
int main()
{
 int wage_per_hour,hour;
 printf("Enter Wage per hour and number of hours : ");
 scanf("%d %d",&wage_per_hour,&hour);
 if (hour>30)
 {
 int time=hour-30;
 int total=(wage_per_hour*30)+(wage_per_hour*2)*time;
 printf("Total is : %d",total);
 }
 else{
 int total=wage_per_hour*hour;
 printf("Total is : %d",total);
 return 0;
 }
}

