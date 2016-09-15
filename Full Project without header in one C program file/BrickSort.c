#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void sort(int aL ,int *array);
int takeInputandDisplay(int aL,int *array);

//******************************************************************************************
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
}//end main()
//******************************************************************************************
void sort(int aL ,int *array)
{
	int count = 0;
	int count1 = 0;
	int temp;
	int j = 1;
	while(count != 2) {
		for(j = 0; j < aL; j += 2)     //al comes from above
		{
			if(array[j] > array[j + 1]) {     //array comes from above
				temp = array[j];//swap();
				array[j] = array[j+1];
				array[j+1] = temp;
				count1++;
			}
		}
		if (count1 == 0)
		{
			count++;
		}
		int count2 = 0;
		for (j = 1; j+1 < aL; j+=2)
		{
			if(array[j] > array[j + 1]) {
				temp = array[j];        //swap();
				array[j] = array[j+1];
				array[j+1] = temp;
				count2++;
			}
		}
		if(count2 == 0) {
			count++;
		}
	}
}//end sort()
//******************************************************************************************
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
