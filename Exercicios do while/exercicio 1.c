#include <stdio.h>

int main()
{
float chico = 1.50;
float ze = 1.10;
const float cresc_chico = 0.02, cresc_ze = 0.03; 
int x= 0;

while(ze<=chico){
	
	x++;
	chico = chico + cresc_chico;
	ze = ze + cresc_ze;
}
printf("Dentro de %d anos Ze sera maior que Chico!",x);
	return 0;
}

