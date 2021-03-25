/*26. Fazer um programa que calcule um equação do 2º grau
e determine se suas raízes são reais e diferentes, reais e iguais ou
não possui raízes*/

#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <Math.h>

/*
	delta>0 => raízes reais e diferentes
	delta=0 => raízes reais e iguais
	delta<0 => não possui raízes reais

*/


int main(){

	setlocale(LC_ALL, "Portuguese");
	
	float a, b, c, delta, x1, x2;
	
	printf("Entra com um número para a: ");
	scanf("%f",&a);
	printf("Entra com um número para b: ");
	scanf("%f",&b);
	printf("Entra com um número para c: ");
	scanf("%f",&c);
	
	delta = (pow(b,2)-(4*a*c));
	
	x1 = (-b+sqrt(delta)/2*a);
	x2 = (-b-sqrt(delta)/2*a);
	
	if(delta > 0){
		printf("A raizes são reais e diferentes");
	}else if(delta < 0){
		printf("Não possui raízes reais");
	}else{
		printf("Raízes reais e iguais");
	}
	
	getch();
	return 0;
	
}
