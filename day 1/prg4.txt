#include <stdio.h>

int main() {
    float basicpay,da,hra;
    float DA,HRA,total_salary;
    printf("\nenter the basic pay:");
    scanf("%f",&basicpay);
     printf("\nenter the dearness allowance:");
    scanf("%f",&da);
     printf("\nenter the houserent allowance:");
    scanf("%f",&hra);
    DA=(da/100)*basicpay;
    HRA=(hra/100)*basicpay;
    total_salary=basicpay+da+hra;
    
    printf("\ndetails");
      printf("\nbasicsalary  %2.f",basicpay);
      printf("\ndearness allowance  %2.f",DA);
       printf("\nhouserentallowance  %2.f",HRA);
       
        printf("\ngross salary  %2.f",total_salary);
      

    
   

    return 0;
}