/* 7. Faça um programa que leia dois número inteiros e exiba o resto da divisão 
do primeiro pelo segundo. */


#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <Math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int num01, num02;
	
	printf("Digite o primeiro número: ");
	scanf("%d",&num01);
	
	printf("Digite o segundo número: ");
	scanf("%d",&num02);
	
	printf("O resto da divisão de %d por %d é igual a %d",num01,num02,num01%num02);
	
	getch();
	return 0;
}
