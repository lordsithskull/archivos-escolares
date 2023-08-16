/*Programa realizado por Miguel Sánchez Escalera*/
/*Home Office 1.1 Realizar una ecuación con valores flotantes*/
#include <stdio.h>
#include <stdlib.h>
main ()
{
    int x;          // varible x declarada con un valor del tipo entero
        x = 3;
    float resultado;        // variable r declarada con valor del tipo flotante
    resultado = (0.5 * x + ((3 + x) / 2) * ( 2 * ( x * x))) / ((2+3) * x); //ecuacion a resolver
    printf ("\nx = %d", x); // muestra el valor de x, como entero
    printf ("\n\n(0.5 * x + ((3+x) / 2) * (2 * (x * x))) / ((2 + 3) * x) = ");
    printf ("\n\nResultado = %f\n\n",resultado); //muestra el valor r como flotante
    system ("pause");
}
