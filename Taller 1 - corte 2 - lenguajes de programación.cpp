//Actividad 1 - corte 2
#include<stdio.h>
main(){

	int CodigoProducto, CodigoAlmacen, ValorProducto, PrecioProducto, Descuento;
	
	//Solicitar codigos
	printf("Ingrese el codigo del producto: %d");
	scanf("%d", &CodigoProducto);
	
	printf("Ingrese el codigo del almacén: %d");
	scanf("%d", &CodigoAlmacen);
	
	int tamano = sizeof(CodigoProducto);
	int tamano2 = sizeof(CodigoAlmacen);
	
	printf("Por favor ingrese el precio del producto: %d");
	scanf("%d", &PrecioProducto);
	

	//Validar los datos
	if (tamano == 10){
		if (CodigoProducto== 8949899430 || CodigoProducto==  7653512593 || CodigoProducto==9383867373 || CodigoProducto==88392904209 );
		}
	else {
		printf("Los digitos no son validos");
	}
	
	
	
	if (tamano2 == 15){
		if (CodigoAlmacen== 894985943020763 || 165331255320221 || 248386737320130 || 183923092220561 ); 
		}
	else {
		printf("Los digitos no existen");
	}
	
	//Verificar si los productos tienen descuento
	if (CodigoProducto) {
    	printf("El producto tiene un descuento del 20%.\n");
		
    	//Calcular el precio
    	Descuento = (PrecioProducto*20)/100;	
	}
    
  	
	else {
	printf("El producto no tiene descuento.\n");
 	}

  // Verificar si el producto puede participar en la rifa
  	if (CodigoProducto, CodigoAlmacen) {
    	printf("El producto puede participar en la rifa.\n");
  	} 
	else {
    	printf("El producto no puede participar en la rifa.\n");
 	}

  return 0;
  }
	
