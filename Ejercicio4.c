/* Orlando Urbano Trejo @Lando
 * Fecha: 11-07-2023
 * Correo: orlandourbanotrejo@gmail.com
 *
 * Algoritmo para calcular el tiempo que tarda una persona en hacer un recorrido. */

#include <stdio.h>
int main(){
	float velocidad, distancia;
	// Entrada de datos
	puts("Velocidad en (km/h):");
	scanf("%f",velocidad);
   puts("La distancia total recorrida es de:");
	scanf("%f",&distancia);
	printf("Tiempo final: %.2f horas\n",(velocidad*distancia) / 60);
	return 0;
}
