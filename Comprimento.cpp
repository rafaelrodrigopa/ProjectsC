/* 4- Faça um programa que calcule o comprimento de uma circunferência. 
	c = 2*PI*r */
	
#include <stdio.h>
#include <conio.h>
#include <locale.h>


//Declaração de constante
#define PI 3.14

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float r,c;
	
	
	printf("Digite o raio da circunferência: ");
	scanf("%f",&r);
	
	c=2*PI*r;
	
	printf("Comprimento é: %.2f", c);
	
	getch();
	return 0;
}
