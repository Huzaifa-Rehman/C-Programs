#include <stdio.h>

int main() {
  int salary, grade;

  printf("Please enter the employee's salary: ");
  scanf("%d", &salary);

  printf("Please enter the employee's grade: ");
  scanf("%d", &grade);
  
  
   if (grade > 15) {
   salary += salary * 0.5;//as bonus =salary*0.5 then salary= bonus+salary
                          //then salary += salary*0.5 means salary = salary + (salary*0.5)
    printf("your salary = %d ",salary);
  } 
  else {
    salary += salary * 0.25;//as bonus =salary*0.25 then salary= bonus+salary
                          //then salary += salary*0.25 means salary = salary + (salary*0.25)
    printf("your salary is = %d ",salary);
  }
}

