#include<stdio.h>

//beecrowd1008
/*Escreva um programa que leia o n�mero de um funcion�rio, seu n�mero de horas trabalhadas, 
o valor que recebe por hora e calcula o sal�rio desse funcion�rio. A seguir, mostre o n�mero 
e o sal�rio do funcion�rio, com duas casas decimais.
Entrada
O arquivo de entrada cont�m 2 n�meros inteiros e 1 n�mero com duas casas decimais, representando 
o n�mero, quantidade de horas trabalhadas e o valor que o funcion�rio recebe por hora trabalhada, 
respectivamente.
Sa�da
Imprima o n�mero e o sal�rio do funcion�rio, conforme exemplo fornecido, com um espa�o em branco antes 
e depois da igualdade. No caso do sal�rio, tamb�m deve haver um espa�o em branco ap�s o $.
*/
int main(){
	int numfuncionario, numhorastra;
	double salariohora, salario;
	numfuncionario = 0;
	numhorastra = 0;
	salariohora = 0.0;
	salario = 0.0;
	
	scanf("%d", &numfuncionario);
	scanf("%d", &numhorastra);
	scanf("%lf", &salariohora);
	
	salario = numhorastra * salariohora;
	
	printf("NUMBER = %d\n",numfuncionario);
	printf("SALARY = U$ %.2lf\n",salario);
	
	return(0);
}