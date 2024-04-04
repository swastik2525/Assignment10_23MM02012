#include<stdio.h>
int main() {
    struct Employee
    {
        int eid;
        char name[20];
        union EmpDetails
        {
            float hw;
            int fs;
        }ed;
    }emp;

    printf("Enter employee name:");
    gets(emp.name);

    printf("Enter employee id:");
    scanf("%d",&emp.eid);

    int ch,n;
    printf("To enter hourly wage type 1\n");
    printf("To enter fixed salary type 2\n");
    scanf("%d",&ch);

    switch(ch)
    {
        case 1:
            printf("Enter wage:");
            scanf("%f",&emp.ed.hw);
            n=1;
            break;

        case 2:
            printf("Enter salary:");
            scanf("%d",&emp.ed.fs);
            n=2;
            break;
    }

    if(n==1)
    {
        printf("Employee details are:\n");
        printf("Name:%s\n",emp.name);
        printf("ID:%d",emp.eid);
        printf("Hourly Wage:%.2f",emp.ed.hw);
    }

    if(n==2)
    {
        printf("Employee details are:\n");
        printf("Name:%s\n",emp.name);
        printf("ID:%d\n",emp.eid);
        printf("Fixed salary:%d",emp.ed.fs);   
    }

    return 0;
}