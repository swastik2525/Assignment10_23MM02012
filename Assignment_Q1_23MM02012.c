#include <stdio.h>


union Data {
    int integer;
    float floating;
    char character;
};

int main() {
    
    union Data data;

   
    data.integer = 10;
    printf("Integer value: %d\n", data.integer);

    data.floating = 3.14;
    printf("Floating-point value: %f\n", data.floating);

    data.character = 'A';
    printf("Character value: %c\n", data.character);

    printf("\nAccessing values from different members:\n");
    printf("Integer value: %d\n", data.integer);
    printf("Floating-point value: %f\n", data.floating);
    printf("Character value: %c\n", data.character);

    return 0;
}
