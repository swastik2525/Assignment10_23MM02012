#include<stdio.h>

struct s{
    int a,b;
    char c;

    
};
union u{
    int d,e;
    char f;


};
int main(){

union u u1;
printf("%d",sizeof(u1));
struct s s1;
printf("\n%d",sizeof(s1));

return 0;
}

