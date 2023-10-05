#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#include<string.h>

main(){
		
	int num[7],i=0;
	
	for(i=0;i<=6;i++){
		printf("Digite numeros pares:");
		scanf("%i",&num[i]);
	}
		for(i=6;i>=0;i--){
		printf("%i",num[i]);
	}
}
