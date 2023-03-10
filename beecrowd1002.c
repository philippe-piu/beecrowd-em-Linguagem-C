#include<stdio.h>

//beecrowd1002
/*A fórmula para calcular a área de uma circunferência é: area = n . raio2. Considerando para 
este problema que n = 3.14159:
- Efetue o cálculo da área, elevando o valor de raio ao quadrado e multiplicando por n.
Entrada
A entrada contém um valor de ponto flutuante (dupla precisão), no caso, a variável raio.
Saída
Apresentar a mensagem "A=" seguido pelo valor da variável area, conforme exemplo abaixo, com 4
casas após o ponto decimal. Utilize variáveis de dupla precisão (double). Como todos os problemas,
não esqueça de imprimir o fim de linha após o resultado, caso contrário, você receberá 
"Presentation Error".
*/
int main(){
	
	double n, area, raio;
	n = 3.14159;
	area = 0.0;
	raio = 0.0;
	
	scanf("%lf", &raio);
	
	area = n * (raio * raio);
	
	printf("A=%.4lf\n",area);
	
	return(0);
}