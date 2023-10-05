#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#include<string.h>

main(){
	
	int num[5],menor=1,maior=0,p1=0,p2=0;
	int i=1,j=0;
	 
	 for(i=1;i<=5;i++){
	 	printf("Informe um numero:");
	 	scanf("%i",&num[i]);
	 		
	 	if(i==1){
		maior=num[i];
		menor=num[i];
	}else{
		if(num[i] > maior ){
			maior = num[i];
		}if (num[i] < menor){
			menor = num[i];
		}		
	}
  }
  	p1 = i;
	p2 = j;
  	printf ("\no Menor valor e %i \n Se encontra na posicao: %i", menor,p1);
 	printf ("\no Maior valor e %i \n Se encontra na posicao: %i", maior,p2);
 
}
