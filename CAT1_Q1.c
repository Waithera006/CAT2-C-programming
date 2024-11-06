//a structure program without prompting the user
/*
MARY WAITHERA KAMAU

CT101/G/24877/24

*/

//defining a structure

#include<stdio.h>

#include<string.h>

struct employee {

char name [25];

int id;

char department [20];

float salary;

char email[50];

}employee;

int main() {

//initializing with the data

strcpy(employee.name,"John Doe");


strcpy(employee.department,"Human Resources");


strcpy(employee.email,"john.doe@company.com");

employee.id=12345;

employee.salary=55000.50;

//output of the data

printf("the name is %s\n",employee.name);

printf("the id is %d\n",employee.id);

printf("the department is %s\n",employee.department);

printf("the salary is %f\n",employee.salary);

printf("the email is %s\n",employee.email);

return 0;

}

