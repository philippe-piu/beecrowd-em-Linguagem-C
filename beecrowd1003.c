#include<stdio.h>

//beecrowd1003
/*Leia dois valores inteiros, no caso para vari�veis A e B. A seguir, calcule a soma entre elas
e atribua � vari�vel SOMA. A seguir escrever o valor desta vari�vel.
Entrada
O arquivo de entrada cont�m 2 valores inteiros.
Sa�da
Imprima a mensagem "SOMA" com todas as letras mai�sculas, com um espa�o em branco antes e depois
da igualdade seguido pelo valor correspondente � soma de A e B. Como todos os problemas, n�o esque�a 
de imprimir o fim de linha ap�s o resultado, caso contr�rio, voc� receber� "Presentation Error".
*/
int main(){
	int a,b,resultado;
	a = 0;
	b = 0;
    resultado = 0;
    
    scanf("%d", &a);
    scanf("%d", &b);
    
    resultado = a + b;
    
    printf("SOMA = %d\n",resultado);
    
	return(0);
}

#include<stdio.h>

//beecrowd1003
int main(){
	int a,b,resultado;
	a = 0;
	b = 0;
    resultado = 0;
    
    scanf("%d", &a);
    scanf("%d", &b);
    
    resultado = a + b;
    
    printf("SOMA = %d\n",resultado);
    
	return(0);
}
