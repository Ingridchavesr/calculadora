
#include <stdio.h>
#include <stdlib.h>

void main (){
   char op;
   int num1,num2,resultado;
   char continuar = 's';
   
   while (continuar == 'S'|| continuar == 'S'){
     printf("escolha a operacao(+,-,*,/):");
     scanf(" %c", &op);
     
     printf("digite o primeiro numero: ");
     scanf("%fd", &num1);
     
     printf("digite o segundo numero: ");
     scanf("%d", &num2);
     
     if(op == '+'){
	     resultado = num1 + num2;
	    printf("resultado: %.2d\n", &resultado);
	   if (op == '-'){
		resultado = num1 - num2;
		printf("resultado: %.2d\n", &resultado);
	} else if (op == '*'){
		resultado = num1 * num2;
		printf("resultado: %.2d\n",&resultado);
	} else if (op == '/') {
		if (num2 != 0) {
		resultado = num1 / num2;
		printf("resultado: %.2d\n", &resultado);
	} else {
		printf("erro: divisao por zero.\n");
	}
}else {
	printf("operacao invalida.\n");
}
int main ( )  {
	char continuar;
	float num1 ,num2;
	int opcao; {
		printf("escolha a operacao:\n");
		printf("1. adicao\n");
		printf("2. subtracao\n");
		printf("3. multiplicacao\n");
		printf("4.divisao\n");
		scanf("%d", &opcao);
		printf("digite dois numeros: ");
		scanf("%f %f ,&num1 , &num2");
	  switch(opcao) {
	  	case 1:
	  		printf("resutado: %.2f\n",(num1 , num2));
	  		break;
	  	case 2:
	  		printf("resultado: %2f\n",(num1, num2));
	  		break;
	  	case 3: 
	  	    printf("resultado: %.2f\n",(num1 , num2));
	  	    break;
	  	case 4:
	  		printf("resultado: %.2f\n",(num1 , num2));
	  		break;
	  		default:
	  			printf("deseja continuar?(s/n):");
	  			scanf("%c ,&continuar");
	  }       while (continuar == 's' || continuar == 'S');
	          
	}                                                                                               

} 
