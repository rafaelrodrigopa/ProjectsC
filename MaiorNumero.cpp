/*25. Fazer um programa que verifique qual é o maior de três números digitados*/

#include <stdio.h>
#include <conio.h>
#include <locale.h>


int main(){

	setlocale(LC_ALL, "Portuguese");
	
	int n1,n2,n3;
	
	printf("Digite o primerio número: ");
	scanf("%d",&n1);
	printf("Digite o segundo número: ");
	scanf("%d",&n2);
	printf("Digite o terceiro número: ");
	scanf("%d",&n3);
	
	if(n1>n2 && n1>n3){
		printf("O maior número é: %d",n1);
	}else if(n2>n1 && n2>n3){
		printf("O maior número é: %d",n2);
	}else{
		printf("O maior número é: %d",n3);
	}
	
	getch();
	return 0;
	
}
