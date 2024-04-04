#include<stdio.h>
#include<string.h>
typedef enum {
    WAGE,SALARY
}Paytype;

int main() {
    struct Employee
    {
        int eid;
        char name[20];
        Paytype paytype;
        union EmpDetails
        {
            float hw;
            int fs;
        }ed;
    }emp;

    printf("Enter employee name:");
    gets(emp.name);

    printf("Enter employee ID:");
    scanf("%d",&emp.eid);

    char ch[10];
    printf("Wage or salary\n");
    scanf("%s",ch);

    if(strcmp(ch,"WAGE")==0 || strcmp(ch,"wage")==0)
    {
        printf("Enter wage:");
        scanf("%f",&emp.ed.hw);
        emp.paytype=WAGE;                                                           
    }

    if(strcmp(ch,"SALARY")==0 || strcmp(ch,"salary")==0)
    {
        printf("Enter salary:");
        scanf("%d",&emp.ed.fs);
        emp.paytype=SALARY;
    }

    if(emp.paytype==WAGE)
    {
        printf("Employee details are:\n");
        printf("Name:%s\n",emp.name);
        printf("ID:%d\n",emp.eid);
        printf("Hourly Wage:%.2f",emp.ed.hw);
    }

    if(emp.paytype==SALARY)
    {
        printf("Employee details are:\n");
        printf("Name:%s\n",emp.name);
        printf("ID:%d\n",emp.eid);
        printf("Fixed salary:%d",emp.ed.fs);   
    }

    return 0;
}