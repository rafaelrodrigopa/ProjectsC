/* 24. Fazer um programa que identifique a idade para emissão da carteira de
motorista. OBS: Se for menor de idade escrever quanto tempo falta para tirar
a CNH.
*/

#include <stdio.h>
#include <conio.h>
#include <locale.h>


int main(){
	setlocale(LC_ALL, "Portuguese");

	int idade;

	printf("Qual a sua idade: ");
	scanf("%d",&idade);
	
	if(idade > 17){
		printf("Você tem idade sulficiente para emitir sua CNH");
	}else{
		printf("Você é menor de idade e não poderá emitir sua CNH");
		printf("\nAinda falta %d ano (s) para emitir sua CNH",18-idade);
	}
	
	getch();
	return 0;
}

