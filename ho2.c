/*Programa realizado por Miguel S�nchez 1CV20*/
/*Programa para calcular areas, perimetros de un cuadrado, rectangulo, triangulo
h1 es la base del triangulo frontal que mide 3/2 de largo (l)
h2 es la anchura del rectangulo

*/
#include <stdio.h>
#include <math.h>
int main ()
    {
        float l, h1, h2, h3, h4, 
              a1, a2, a3, a4, at, 
              c1, c2, pt;
      
        l = 2;                      //constante
        h1 = (3/2) * l;
        h2 = (0.25) * l; // si pongo la ecuacion h2=(1/4)*l; sin embargo al poner el valor h1 en forma flotante me causa conflicto si dejo este valor como 1/4 y h2 queda con valor 0, en vez de 0.25
        printf("h1 %f",h1);
        printf("h2 %f",h2);
      
        h3 = (3 - 2) * l;//parte que sobresale del conjunto de los dos tri�ngulos y el rect�ngulo
        h4 = 2 * l;    //base del rect�ngulo
      
        a1 = l * l;                         //area del cuadrado
        a2 = (2 * l) * h2;                    //area del rectangulo
        a3 = (l * l) / 2;                     //area de los triangulos superior e inferior
        a4 = (h1 *l) / 2;                    //area del triangulo frontal
        at = a1 + a2 + (2 * a3) + a4;             //area total de la figura
      
        c1 = sqrt((l * l) + ( l * l));           //hipotenusa de los tri�ngulos superior e inferior de la figura
        c2=sqrt((h1*h1)+(l*l));         //hipotenusa del triangulo frontal
        pt=(2*c1)+c2+h1+(2*h2)+h3+h4;   // perimetro total de la figura
      
        printf ("\n\n\t\tArea 1=\t\t\t%f",a1);
        printf ("\n\n\t\tArea 2=\t\t\t%f",a2);
        printf ("\n\n\t\tArea 3=\t\t\t%f",a3);
        printf ("\n\n\t\tArea 4=\t\t\t%f",a4);
        printf ("\n\n\t\tArea total=\t\t%f",at);
        printf ("\n\n\t\t\tC1=\t\t%f",c1);
        printf ("\n\n\t\t\tC2=\t\t%f",c2);
        printf ("\n\n\t\tperimetro total=\t%f\n\n",pt);
}
