#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#include<string.h>

main(){
	 int num[5],menor=1,maior=0,media=0;
	 int i=1;
	 
	 for(i=1;i<=5;i++){
	 	printf("Informe um numero:");
	 	scanf("%i",&num[i]);
	 	media = media + num[i];
	 	
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
  	printf ("o Menor valor e %i \n", menor);
 	printf ("o Maior valor e %i \n", maior);
 	
 	media = media / 5;
 	printf("media %i",media);
	 }


