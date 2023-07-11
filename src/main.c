#include <stdio.h>

int main(int argc, char** argv){
    printf("");
    
float length,breadth,area;

printf("Enter your length value");

scanf("%f", & length);
printf("Enter your breadth value");
scanf("%f",&breadth);
area=length*breadth;
printf("Your result is=%f", area);
}