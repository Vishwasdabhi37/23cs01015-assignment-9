#include <stdio.h>
typedef struct company
{
    char name[30];
    char address[50];
    long long int mo_num;
    int noOfEmployee;
} cp;

int main()
{
    cp c1;
    printf("Enter the name :");
    gets(c1.name);
    printf("Enter the address :");
    gets(c1.address);
    printf("Enter the mobile number :");
    scanf("%lld", &c1.mo_num);
    printf("Enter the number of employee : ");
    scanf("%d", &c1.noOfEmployee);
    printf("Name :");
    puts(c1.name);
    printf("Address : ");
    puts(c1.address);
    printf("Mobile no : %lld\n", c1.mo_num);
    printf("No of employee %d\n", c1.noOfEmployee);
    return 0;
}