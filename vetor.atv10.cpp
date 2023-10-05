#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#include<string.h>

main(){
	
	float nota[15],media=0;
	int i=0;
	
	for(i=0;i<=14;i++){
		printf("\nInforme sua nota:");
		scanf("%f",&nota[i]);
		media = media + nota[i];
	}
	
	media = media / 15;
	
		printf("\nMedia final: %f",media);
}
