#include<stdio.h>

//beecrowd1004
/*Leia dois valores inteiros. A seguir, calcule o produto entre estes dois valores e atribua esta 
opera��o � vari�vel PROD. A seguir mostre a vari�vel PROD com mensagem correspondente.   
Entrada
O arquivo de entrada cont�m 2 valores inteiros.
Sa�da
Imprima a mensagem "PROD" e a vari�vel PROD conforme exemplo abaixo, com um espa�o em branco antes e 
depois da igualdade. N�o esque�a de imprimir o fim de linha ap�s o produto, caso contr�rio seu programa 
apresentar� a mensagem: �Presentation Error�.
*/
int main(){
	int a, b, prod;
	a = 0;
	b = 0;
	prod = 0;
	
	scanf("%d", &a);
	scanf("%d", &b);
	
	prod = a * b;
	
	printf("PROD = %d\n", prod);
	return(0);
}