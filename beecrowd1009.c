#include<stdio.h>

//beecrowd1009
/*Faça um programa que leia o nome de um vendedor, o seu salário fixo e o total de vendas efetuadas
por ele no mês (em dinheiro). Sabendo que este vendedor ganha 15% de comissão sobre suas vendas efetuadas,
informar o total a receber no final do mês, com duas casas decimais.
Entrada
O arquivo de entrada contém um texto (primeiro nome do vendedor) e 2 valores de dupla precisão (double)
com duas casas decimais, representando o salário fixo do vendedor e montante total das vendas efetuadas 
por este vendedor, respectivamente.
Saída
Imprima o total que o funcionário deverá receber, conforme exemplo fornecido.
*/

int main(){
	//o vetnome tependendo de quantas letras você quiser usar é só aumentar e colocar esse mesmo valor no scanf
	char vetnome[5];
	double salariofixo, totalvendas, salariofinal;
	salariofixo = 0.0;
	totalvendas = 0.0;
	salariofinal = 0.0;
	
	scanf("%5s", &vetnome);
	scanf("%lf", &salariofixo);
	scanf("%lf", &totalvendas);
	
	//0.15 é os 15%
	totalvendas = totalvendas * 0.15;
	salariofinal = totalvendas + salariofixo;
	
	printf("TOTAL = R$ %.2lf\n",salariofinal);
	return(0);
}