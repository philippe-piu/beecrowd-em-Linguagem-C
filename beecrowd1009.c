#include<stdio.h>

//beecrowd1009
/*Fa�a um programa que leia o nome de um vendedor, o seu sal�rio fixo e o total de vendas efetuadas
por ele no m�s (em dinheiro). Sabendo que este vendedor ganha 15% de comiss�o sobre suas vendas efetuadas,
informar o total a receber no final do m�s, com duas casas decimais.
Entrada
O arquivo de entrada cont�m um texto (primeiro nome do vendedor) e 2 valores de dupla precis�o (double)
com duas casas decimais, representando o sal�rio fixo do vendedor e montante total das vendas efetuadas 
por este vendedor, respectivamente.
Sa�da
Imprima o total que o funcion�rio dever� receber, conforme exemplo fornecido.
*/

int main(){
	//o vetnome tependendo de quantas letras voc� quiser usar � s� aumentar e colocar esse mesmo valor no scanf
	char vetnome[5];
	double salariofixo, totalvendas, salariofinal;
	salariofixo = 0.0;
	totalvendas = 0.0;
	salariofinal = 0.0;
	
	scanf("%5s", &vetnome);
	scanf("%lf", &salariofixo);
	scanf("%lf", &totalvendas);
	
	//0.15 � os 15%
	totalvendas = totalvendas * 0.15;
	salariofinal = totalvendas + salariofixo;
	
	printf("TOTAL = R$ %.2lf\n",salariofinal);
	return(0);
}