#include<stdio.h>

//beecrowd1007
/*Leia quatro valores inteiros A, B, C e D. A seguir, calcule e mostre a diferen�a do produto 
de A e B pelo produto de C e D segundo a f�rmula: DIFERENCA = (A * B - C * D).
Entrada
O arquivo de entrada cont�m 4 valores inteiros.

Sa�da
Imprima a mensagem DIFERENCA com todas as letras mai�sculas, conforme exemplo abaixo, com um 
espa�o em branco antes e depois da igualdade.
*/
int main(){
	int a, b, c, d, diferenca;
	a = 0;
	b = 0;
	c = 0;
	d = 0;
	diferenca = 0;
	
	scanf("%d %d %d %d", &a, &b, &c, &d);
	
	diferenca = (a * b - c * d);
	
	printf("DIFERENCA = %d\n",diferenca);
	
	return(0);
}