#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int global_uninit_var;
int global_init_var1 = 1;
int global_init_var2 = 2;

void Function()
{
    ;
}

int main()
{
    int local_var1;
    int local_var2;

    static int static_uninit_var;
    static int static_init_var;

    char *str1 = "I love FishC.com!";
    char *str2 = "You are right!";

    int *malloc_var = (int *)malloc(sizeof(int));

    printf("Address of Function: %p\n", Function);
    printf("Address of str1: %p\n", str1);
    printf("Address of str2: %p\n", str2);
    printf("Address of global_init_var1: %p\n", &global_init_var1);
    printf("Address of global_init_var1: %p\n", &global_init_var2);
    printf("Address of static_init_var: %p\n", &static_init_var);
    printf("Address of static_uninit_var: %p\n", &static_uninit_var);
    printf("Address of global_uninit_var: %p\n", &global_uninit_var);
    printf("Address of malloc_var: %p\n", malloc_var);
    printf("Address of local_var1: %p\n", &local_var1);
    printf("Address of local_var2: %p\n", &local_var2);

    pause();
    return 0;
}