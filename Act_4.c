//Actividad 4 - Luis Enrique Preciado - Seminario de Algoritmia

#include<stdio.h>
#include<stdlib.h>

void capturar_enteros(){
	float numeros[5],a=0;
    for (int i = 0; i < 5; i++)
    {
        printf("Ingresa el elemento %d del arreglo: ",i+1);
        scanf("%f",&numeros[i]);
        a+=numeros[i];
    }
    system("cls");
    for(int j=0; j < 5; j++)
        printf("%d.- %.2f\n",j,numeros[j]);
    
    printf("Total: %.2f\n",a);
    printf("Promedio: %.2f\n",a/5.0);
}

int main(){
  	char op;
	do{
		printf("1. 5 Numeros Enteros\n2. Funcion Mostrar\n3. Estructura Personaje\n0. Salir\nIngresa un numero: ");
		scanf("%c",&op);
		switch(op){
			case '1':
                capturar_enteros();
				break;
			default:
				break;
		}
		fflush(stdin);
	}while(op!='0');	
}