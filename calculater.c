#include<stdio.h>
#include <math.h>

 int add(int a, int b){
     return a+b;
 }
 int sub(int a, int b){
    return a-b;
 }
 int mult(int a,int b){
  return a*b;
 }

 int div(int a,int b){
	return a/b;
 }
 int power(int a,int b){
    return pow(a,b);
 }
int ssqrt(int a){
    return sqrt(a);
}

int main(){

    int a,b;
    printf("Welcome to the Team Calculator!\n");
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    printf("Addition=a\n");
    printf("Substraction=s\n");
    printf("Multiplication=m\n");
    printf("division=d\n");
    printf("power=p\n");
    printf("square root=r\n");
    printf("Enter your choice as given charecter\n");
   
    char c;
    scanf(" %c",&c);
    switch(c){
        case 'a':
        printf("Addition of two numbers is: %d\n" ,add(a,b));
        break;
        case 's':
        printf("Subtraction of two numbers is: %d\n" ,sub(a,b));
        break;
        case 'm':
        printf("Mulitpilcation of two numbers is: %d\n" ,mult(a,b));
        break;
        case 'd': 
        printf("Division of two numbers is: %d\n" ,div(a,b));
        break;
        case 'r':
        printf("square root of %d = %d\n",a,ssqrt(a));
        break;
        case 'p':
        printf("%d power %d  = %d\n",a,b,pow(a,b));
        break;

    }
    printf("\nCompleted 7 th Assignment");
}
