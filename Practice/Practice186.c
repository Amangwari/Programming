// Pointer to structure
#include <stdio.h>
#include <string.h>
struct employee
{
    int code;
    float salary;
    char name[10];
};
int main()
{
    struct employee e1;
    struct employee *ptr;

    ptr = &e1;
    //   (*ptr).code = 101;  // or you can also write :-  ptr->code = 101; // arrow operator

    ptr->code = 101;
    printf("%d\n", e1.code);
    printf("%d", e1.code);

    return 0;
}