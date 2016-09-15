#include "functions.h"

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
}
//******************************************************************************************
