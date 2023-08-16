/*programa realizado por Miguel S�nchez Escalera, Secuencia 1CV20*/
/*Practica de areas*/
#include <stdio.h>
#include <math.h>
#define pi 3.1416
main ()
{
 float l,a1,a2,a3,at,d,r,pt,c;
        l=2;                 //tama�o de L
        d=l/2;               //diametro del circulo
        r=d/2;               //radio del c�rculo
        a1=4*((l*l)/2);      //�rea total de los tri�ngulos
        a2=l*l;              //�rea del cuadrado
        a3=pi*(r*r);         //�rea del c�rculo
        at=a1+a2-a3;         //�rea total de la figura
        c=sqrt((l*l)+(l*l)); //valor de la hipotenusa
        pt=(4*l)+(4*c); //per�metro de la figura
        printf ("\n\nArea total =%f",at);
        printf ("\n\nPerimetro total=%f\n",pt);
}
