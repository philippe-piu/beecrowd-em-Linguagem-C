#include<stdio.h>

//beecrowd1004
/*Leia dois valores inteiros. A seguir, calcule o produto entre estes dois valores e atribua esta 
operação à variável PROD. A seguir mostre a variável PROD com mensagem correspondente.   
Entrada
O arquivo de entrada contém 2 valores inteiros.
Saída
Imprima a mensagem "PROD" e a variável PROD conforme exemplo abaixo, com um espaço em branco antes e 
depois da igualdade. Não esqueça de imprimir o fim de linha após o produto, caso contrário seu programa 
apresentará a mensagem: “Presentation Error”.
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