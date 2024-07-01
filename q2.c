#include<stdio.h>
#include<conio.h>

void main()
{
	int salary,hra,da,ta,grosssalary;
	
	printf("enter your salary:");
	scanf ("%d",&salary);
	
	printf("enter hra percentage:");
	scanf("%d",&hra);
	
	printf("enter da percantage:");
	scanf("%d",&da);
	
	printf("enter ta percantage:");
	scanf("%d",&ta);
	
	da=(da*salary)/100;
	ta=(ta*salary)/100;
	hra=(hra*salary)/100;
	
	grosssalary=salary+hra+da+ta;
	
	printf("grosssalary:%d\n",grosssalary);
	
	
}

