#include<stdio.h>

int main(){
	int numeros, i;
	printf ("Dame cinco numeros del 1 al 7\n");
	while(i<5){
		scanf("%d", &numeros); 
		switch(numeros){
			case 1:
				printf("Lunes\n");
			break;
			case 2:
				printf("Martes\n");
			break;
			case 3:
				printf("Miercoles\n");
			break;
			case 4:
				printf("Jueves\n");
			break;
			case 5:
				printf("Viernes\n");
			break;
			case 6:
				printf("Sabado\n");
			break;
			case 7:
				printf("Domingo\n");
			break;
			default: printf("No es un numero del 1-7\n");
		}
		i++;
	}
	return(0);
}
