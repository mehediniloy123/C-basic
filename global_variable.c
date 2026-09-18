#include <stdio.h>
int a = 10;//Global variable
void display();
int main(){

    printf("Inside the main function a = %d\n", a);
    display();

}

void display(){

    printf("inside the display function a = %d\n", a);
}