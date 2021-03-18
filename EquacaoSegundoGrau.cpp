/* 9. Construa um algoritmo para calcular as raízes de uma equação do segundo grau,
sendo que os valores a,b e c são fornecidos pelo usuário. */


#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <Math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float a, b, c, delta, x1, x2;
	
	printf("Digite um valor para a: ");
	scanf("%f",&a);
	
	printf("Digite um valor para b: ");
	scanf("%f",&b);
	
	printf("Digite um valor para c: ");
	scanf("%f",&c);
	
	delta = pow(b,2)-4*a*c;
	x1 = (-b-sqrt(delta))/2*a;
	x2 = (-b+sqrt(delta))/2*a;

	printf("Resultado:\n\n");
	
	//printf("Delta: %.2f",delta);
	printf("\nX1: %.2f",x1);
	printf("\nX1: %.2f",x2);

	getch();
	return 0;
}
