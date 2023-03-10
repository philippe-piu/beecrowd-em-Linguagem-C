#include<stdio.h>

//beecrowd1003
/*Leia dois valores inteiros, no caso para variáveis A e B. A seguir, calcule a soma entre elas
e atribua à variável SOMA. A seguir escrever o valor desta variável.
Entrada
O arquivo de entrada contém 2 valores inteiros.
Saída
Imprima a mensagem "SOMA" com todas as letras maiúsculas, com um espaço em branco antes e depois
da igualdade seguido pelo valor correspondente à soma de A e B. Como todos os problemas, não esqueça 
de imprimir o fim de linha após o resultado, caso contrário, você receberá "Presentation Error".
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
