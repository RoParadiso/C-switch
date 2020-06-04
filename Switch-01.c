#include <stdio.h>

#define MENU_1 [] = "Milanesa a la napolitana";
#define MENU_2 [] = "Locro";
#define MENU_3 [] = "Empandas";
#define MENU_4 [] = "Pizza";
#define MENU_5 [] = "Pasta";

int main(){

	int pedido = 1;
	printf("Ingrese el número de su pedido siguiendo las referencias:\n");
	printf("1 - %s \n2 - %s \n", MENU_1, MENU_2);
	printf("3 - %s \n4 - %s \n5 - %s \n", MENU_3, MENU_4, MENU_5);
	scanf("%i\n", &pedido);

	switch(pedido){
		case 1:;
			printf("%s\n", MENU_1);
			break;
		case 2:;
			printf("%s\n", MENU_2);
			break;
		case 3:;
			printf("%s\n", MENU_3);
			break;
		case 4:;
			printf("%s\n", MENU_4);
			break;
		case 5:;
			printf("%s\n", MENU_5);
			break;
		default:;
			printf("Menu no disponible");
	}
	return 0;
}