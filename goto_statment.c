#include <stdio.h>
int main(){
    int i=1;

print://eita label eikhane print er bodole amar name dileo problem hobe na
    printf("%d\t",i);
    i++;

    if(i<5)
        goto print; //label is calling here

    return 0;
}