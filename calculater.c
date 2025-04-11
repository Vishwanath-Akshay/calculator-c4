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


int main(){

    int a,b;
    printf("Welcome to the Team Calculator!\n");
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);



    printf("Addition of two numbers is: %d\n" ,add(a,b));
    printf("Subtraction of two numbers is: %d\n" ,sub(a,b));
    printf("Mulitpilcation of two numbers is: %d\n" ,mult(a,b));
    printf("Division of two numbers is: %d\n" ,div(a,b));
    printf("%d power %d = %d\n",a,b,power(a,b));//power
}
