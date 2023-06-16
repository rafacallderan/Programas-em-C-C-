#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <math.h>


void calculo (float a, float b, float c, float *x1, float *x2){
	float delta = (b*b) - (4*a*c);

if(delta > 0){
	*x1 = (-b + sqrt(delta)) / (2*a);
	*x2 = (-b - sqrt(delta)) / (2*a);
	}

}


int main(){
float a, b, c, x1, x2;	
	

printf("Digite o valor de A: ");
fflush(stdin);
scanf("%f",&a);

printf("Digite o valor de B:  ");
fflush(stdin);
scanf("%f",&b);

printf("Digite o valor de C: ");
fflush(stdin);
scanf("%f",&c);



calculo(a, b, c, &x1, &x2);

printf("x1 e igual a: %.0f \n x2 e igual a: %0.f", x1, x2);
	
}

