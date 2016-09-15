
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "functions.h"

int main(int argc, char* argv[]) {
	FILE *fp;
	
	int aL = 0;
	fp = fopen(argv[1], "r");
	fscanf(fp, "%d", &aL);
	int *array = (int*) calloc(aL, sizeof(int));

	int i = 0;									//fillArrayWithValues();
	while (i < aL) {
		fscanf(fp, "%d", &array[i]); 			//fill array with values
		i++;
	}
	sort(aL, array);
	takeInputandDisplay(aL, array);
} 			//end main();
