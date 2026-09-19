#include <stdio.h>
int main(){
    int a = 32;
    int b = 12;
    int c;

    c = a&b;//bitwise and
    printf ("a&b = %d\n", c);

    c = a|b;//bitwise or
    printf("a|b = %d\n", c);

    c = a^b;//bitwise exor
    printf("a^b = %d\n", c);
}