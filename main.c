#include "librerias.h"

double suma(void);
double resta(void);
double multiplicacion(void);
double division(void);
int menu(void);

int main()
{
    printf("Calculadora Simple v.1 \n");
    int op;
    do
    {
        op=menu();
        if(op==1)
            suma();
        else
        {
            if(op == 2)
                resta();
            else
            {
                if(op == 3)
                    multiplicacion();
                else
                {
                    if (op == 4)
                        division();
                    else
                    {
                        printf("\nFin del programa\n");
                    }
                }
            }
        }
    }while(op != 5);
    return 0;
}