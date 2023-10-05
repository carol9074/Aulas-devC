#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#include<string.h>

main(){
	
	float num[10],res=0, soma = 0;
	int i=0;
	
	for(i=0;i<=9;i++){
		
		printf("Informe um numero:");
		scanf("%f",&num[i]);
	}
		for(i=0;i<=9;i++){
		if(num[i]< 0){
			res=res+1;
		}else{
			soma=soma + num[i];
		}
	}
	
	printf("soma positivos: %f",soma);
	printf("negativos: %f",res);
}
