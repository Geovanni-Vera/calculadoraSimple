#include "librerias.h"

int menu(void)
{
    char str[128];
    int num;
    printf("---------MENU--------");
    printf("1. Suma");
    printf("2. Resta");
    printf("3. Multiplicacion");
    printf("4. Division");
    printf("5 Salir");

    do 
    {
        printf("No. de Opcion = ? ");
        fgets(str,128,stdin);
        num=(int)atoi(str);
        if(num<=0 || num >5)
            printf("Opcion invalida");
        else
            break;
    }while (num <=0 || num >5);
    
    return num;
}