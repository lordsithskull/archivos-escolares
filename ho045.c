/*Programa realizado por Miguel Sanchez 1CV20*/
#include <stdio.h>
main ()
{
    int np;                     //np es el numero de productos
    float pp,pt,pd,psd;         //pp=precio producto, pt=precio total,psd=precio sin desc,pd desc. del 10 y 20 respectivo
          pp=20.00;
    printf ("�Cuantos productos quiere?, en la compra de 10 hasta 19 productos\n");
    printf ("se hace el 10 porciento de descuento,\nen la compra de 20 en adelante se hace el 20 porciento\t");
    scanf  ("%d",&np);
    psd=np*pp;
             if (np>4&&np<10)
                {printf ("\nEl precio por sus productos es de $%.2f\n",psd);}
        else if (np>4&&np>9&&np<20)
                {pd=psd-(psd*0.10);
                 printf ("\nEl precio por sus productos es de $%.2f\n",pd);}
        else if (np>4&&np>9&&np>19)
                {pd=psd-(psd*0.20);
                 printf ("\nEl precio por sus productos es de $%.2f\n",pd);}
        else if (np<=4&&np>=0)
                {printf ("\nEl minimo de compra son 5 productos\n");}
        else
                {printf ("\nError de capa 8\n");}
    printf ("\nGracias vuelva pronto\n:)\n");
}
