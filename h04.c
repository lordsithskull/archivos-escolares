/*Programa realizado por Miguel S�nchez Escalera 1CV20*/
//Calificacion aprobatoria o reprobatoria
#include <stdio.h>
main()
{
    float c;
    printf ("Dame tu calificacion con numero\t"); //pantalla de salida para el usuario
    scanf ("%f",&c); //el usuario ingresa su calificacion

        if  (c<6) //si la calificaion es menor a 6 se mostrara el mensaje de reprobado o calificacion ilogica
        {
            if (c<0)
                printf ("\n%2.2f\tTu calificacion es ilogica\n",c); //calificacion ilogica para numeros menores a 0

            else
                printf ("\n%2.2f\tEstas reprobado\n",c); //reprobado para numeros menores a 6 y mayores o iguales a 0
        }
        else //si la calificaion es mayor a 10 se mostrara el mensaje de aprobado o calificacion absurda
        {
            if (c>10)
                printf ("\n%2.2f\tTu calificacion es absurda\n",c); //mensaje calificacion absurda para numero mayor a 10

            else
                printf ("\n%2.2f\tEstas aprobado\n",c); //mensaje aprobado para numero igual o mayor a 6 e igual o menor a 10
         }
}
