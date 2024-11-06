/*

MARY WAITHERA KAMAU

CT101/G/24877/24

*/

#include<stdio.h>

int main(){

int hours;

float hourlywage;

float grosspay;

float taxes;

float netpay;

float overtimehour;

float overtimepay;

printf("Enter hours worked in a week: \n");

scanf("%d", &hours);

printf("Enter the hourly wage: \n");

scanf("%f", &hourlywage);

if(hours >40){

overtimehour=hours-40;

overtimepay=overtimehour*hourlywage*0.15;

grosspay=40*hourlywage+overtimepay;

}else{

grosspay=hours*hourlywage;}

if(grosspay<=600){

taxes=grosspay*0.15;}

else{

taxes=600*0.15+(grosspay-600)*0.20;}

netpay=grosspay-taxes;

printf("grosspay:%.2f\n",grosspay);

printf("taxes:%.2f\n",taxes);

printf("netpay:%.2f\n",netpay);

return 0;

}
