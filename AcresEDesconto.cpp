/* 8. Faça um programa que leia dois valores reais e exiba o primeiro com acréscimo
de 30% e o segundo com desconto de 25%. */


#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <Math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	

	float num01, num02;
	
	printf("Digite o primeiro valor: ");
	scanf("%f",&num01);
	
	printf("Digite o segundo valor: ");
	scanf("%f",&num02);
	
	//Escape para o simbolo de porcentagem é igual %%
	printf("O valor %.2f com acréscimo de 30%% é igual a %.2f",num01,num01*1.30);
	printf("\nO valor %.2f com desconto de 25%% é igual a %.2f",num02,num02*0.75);

	getch();
	return 0;
}
