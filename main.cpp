#include<stdio.h> 
int funcDatos(),promAlu(),datos, a,promtotal,e,promtotaldefi;
float suma=0,promediototal,promeAl;
char op;
int main()
 {
{
printf("\n ¿Cuantos alumnos desea ingresar?\n");
scanf("%d",&e);
for(int a=0; a<e;a++)
{
datos= funcDatos(); 
promeAl= promAlu(); 
printf("\n¿Cual fue la caificación del alumno?");
scanf("%f",&promeAl);
suma=suma+promeAl;
promediototal=((suma/e));
}

printf("\n promedio total: %f",promediototal);
}

while(op=='S'||op=='s');
getchar();

}

