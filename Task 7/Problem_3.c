#include <stdio.h>
#include <stdlib.h>

typedef struct 
{
    float real;
    float imaginary;
}Im_num;

void imaginary_num_init(Im_num *n);
Im_num Add_imaginary_number(Im_num n1, Im_num n2);

int main(){
    Im_num N1,N2,Summation;
    imaginary_num_init(&N1);
    imaginary_num_init(&N2);
    Summation = Add_imaginary_number(N1,N2);
    printf("The Summation = %g%+gi\n",Summation.real,Summation.imaginary);

    return 0;
}

void imaginary_num_init(Im_num *n){
    printf("Enter The Real Part for the number : ");
    scanf("%f",&(n->real));
    printf("Enter The Imaginary Part for the number : ");
    scanf("%f",&(n->imaginary));
}

Im_num Add_imaginary_number(Im_num n1, Im_num n2){
    Im_num Sum;
    Sum.real = n1.real + n2.real;
    Sum.imaginary = n1.imaginary + n2.imaginary;
    return Sum;
}