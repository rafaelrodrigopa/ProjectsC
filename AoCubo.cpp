/* 6. Faça um programa que leia um número real e escreva seu cubo. */


#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <Math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float numero,cubo;
	
	printf("Digite um número: ");
	scanf("%f",&numero);
	
	cubo = pow(numero,3);
	
	printf("%.2f Elevado ao Cubo é igual a %.2f",numero,cubo);
	
	getch();
	return 0;
}
