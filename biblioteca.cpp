#include <stdio.h>

int main(){
	
	char respuesta, eleccion;
	
	do
	{
		printf("¿Qúe es lo que desea hacer?\n a)Ver libro\nb)Buscar libro\nc)Actualizar base de datos\nd)Agregar libro\ne)Leer base de datos\nf)Eliminar libro\ng)Prestar libro\nh)Devolver libro");
		scanf(" %c", &respuesta);
		
		switch(respuesta)
		{
			case 'a': printBook(index);
			break;
			
			case 'b': findBook(contador, titulo);
			break;
			
			case 'c': updateDataBase(contador);
			break;
			
			case 'd': agregarLibro(&contador);
			break;
			
			case 'e': leerDataBase(&contador);
			break;
			
			case 'f': eliminarlibro(&contador);
			break;
			
			case 'g': prestarLibro();
			break;
			
			case 'h': devolverLibro();
			break;
			
			default:
				printf("Opcion no valida");
			}
		}printf("¿Desea escoger otra opcion? (s/n)");
		 scanf(" %c", &eleccion);
	}while(eleccion == 's');
	
	return 0;
}
