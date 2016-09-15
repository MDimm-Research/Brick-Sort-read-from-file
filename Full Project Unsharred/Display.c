#include "functions.h"

int takeInputandDisplay(int aL, int *array) {

	int input;
	int running = 1;
   char term;
	while (running == 1) {
		printf("Enter the index you would like to check for the sorted data\n");
      if(scanf("%d%c", &input, &term) !=2 || term  != '\n'){
          printf("this is an invalid index\n");
          running = 0;
          return 0;
         }
	   if ( -1 < input && input  < aL + 1) {
      
		   printf("the value at %d is %d\n", input, array[input]);
         running = 1;
		   }
      else{
         printf("this is an invalid index\n");
         running = 0;
         return 0;
      }	
	}
	return 0;
}
//******************************************************************************************
