/* 21. Construa um algoritmo que, tendo como dados de entrada dois pontos quaisquer
do plano, P(x1,y1) e Q(x2,y2), calcule a distância entre eles.

Obs. d=raizq((x2-x1)^2+(y2-y1)^2)
x1=7; x2=4; y1=12; y2=8; d=5

*/

#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <Math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float x1, x2, y1, y2, calc;
	
	printf("Entre com o ponto x1 do plano: ");
	scanf("%f",&x1);
	printf("Entre com o ponto y1 do plano: ");
	scanf("%f",&y1);
	printf("Entre com o ponto x2 do plano: ");
	scanf("%f",&x2);
	printf("Entre com o ponto y2 do plano: ");
	scanf("%f",&y2);
	
	calc = sqrt(pow((x2-x1),2)+pow((y2-y1),2));
	
	printf("Olha ai: %.2f",calc);
	
	getch();
	return 0;
}


