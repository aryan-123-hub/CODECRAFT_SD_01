#include<stdio.h>
void main()
{
float c,f,k;
printf("enter the Temperature in celcius\n");
scanf("%f",&c);



k=c+273.15;
f=((c*9)/5+32);

printf("\033[32m Temperature in Fahrenheit -- %f \033[0m\n",f);
printf("\033[33m Temperature in Kelvin -- %f \033[0m\n",k);

}
