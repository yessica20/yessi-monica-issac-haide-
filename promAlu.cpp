#include <stdio.h> 
 int promAlu(){
	float cal1, cal2,cal3, cal4,cal5, promedio; 
	printf("Caificacion 1:\n"); 
	scanf("%f",&cal1);  
	
	printf("Caificacion 2:\n"); 
	scanf("%f",&cal2);  
	
	printf("Caificacion 3:\n"); 
	scanf("%f",&cal3);  
	
	printf("Caificacion 4:\n"); 
	scanf("%f",&cal4);  
	
	printf("Caificacion 5:\n"); 
	scanf("%f",&cal5);  
	promedio= (cal1+cal2+cal3+cal4+cal5)/5; 
	printf("Promedio  del alumno:%g",promedio);  
}
	
