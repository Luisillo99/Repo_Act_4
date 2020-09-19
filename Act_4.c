//Actividad 4 - Luis Enrique Preciado - Seminario de Algoritmia

#include<stdio.h>
#include<stdlib.h>
#include"Personaje.h" 

void capturar_enteros()
{
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

void mostrar(int n, char cadena[])
{
	for(int i =0; i<n; i++)
	{
		printf("%s", cadena);
	}
}
int main()
{
  	char op;
	char cadena[20];
	int n;
	do
	{
		printf("1. 5 Numeros Enteros\n2. Funcion Mostrar\n3. Capturar Personaje\n0. Salir\nIngresa un numero: ");
		scanf("%c",&op);
		system("cls");
		switch(op)
		{
			case '1':
                capturar_enteros();
				break;
			case '2':
				printf("Escribe una cadena de hasta 20 caracteres: ");
				fflush(stdin);
				fgets(cadena,sizeof(cadena),stdin);
				printf("n: ");
				scanf("%d",&n);
				system("cls");
				mostrar(n,cadena);
				break;
			case '3':
				capturar_personaje();
				break;
			default:
				break;
		}
		fflush(stdin);
	}while(op!='0');	
}