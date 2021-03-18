/* 5. Faça um programa que calcule e exiba a média de quatro números inteiros, 
a saber: 35, 42, 87, 11.*/

#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int media;
	
	media = (35+42+87+11)/4;
	
	printf("A média entre 35, 42, 87, 11 é %d",media);
	
	
	getch();
	return 0;
}
