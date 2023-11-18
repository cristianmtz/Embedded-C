/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file <Add File Name> 
 * @brief <Add Brief Description Here >
 *
 * <Add Extended Description Here>
 *
 * @author <Add FirsName LastName>
 * @date <Add date >
 *
 */



#include <stdio.h>
#include <limits.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)
#define COLUMS (8)
#define ROWS (5)

void main() {


  unsigned short int  median = 0;

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */
  
  //print_array(test);
  
  //printf("Median of array: %d\n", find_median(test, SIZE));
  
  //printf("Mean of array: %.2lf\n", find_mean(test,SIZE));
  
  //printf("The maximun number is: %d\n", find_maximum(test, SIZE));

  //printf("The minumum number is: %d\n", find_minumum(test, SIZE));

  sort_array(test);

}



void print_array(unsigned char *test){

	unsigned char *index;

		for(index = test; *index != '\0'; index++){
			printf("%d\n", *index);
		}
			
}


signed short int find_median(unsigned char *test, signed short int length){
	
	signed short int median = 0;
	
	if((length % 2) == 0){
		
		median = (test[length / 2] + test[length / 2] - 1) / 2;
	}else{
		
		median = test[length / 2];
	}
	
	return median;

}


double find_mean(unsigned char *test, signed short int length){

	double mean = 0.0;
	unsigned char index = 0; /* */

	for(index = 0; index < length; index++){
		mean += test[index];
	}


	return mean / SIZE;

}

unsigned char find_maximum(unsigned char *test, signed short int length){

	unsigned char maximun = 0;
	unsigned char index = 0;


	maximun = test[0]; /*initializes the variable "maximun" to the first value of the array*/


	while(test[index] != '\0'){

		index++;
		
		if(test[index] > maximun){
			
			maximun = test[index];
		}

	}
	return maximun;
	
}


unsigned char find_minumum(unsigned char *test, signed short int length){

	unsigned char minumum = UCHAR_MAX; /* Defines the maximum value for an unsigned char. (255)*/
	unsigned char index = 0;


	while(test[index] != '\0'){


		if(test[index] < minumum){

			minumum = test[index];
		}
		index++;

	}

	return minumum;
}


void sort_array(unsigned char *test){

	unsigned char temp = 0; 
	unsigned char index = 0;
	unsigned char offset = 0;
	


	for(index = 0; index < SIZE; index++){

		for(offset = index + 1; offset < SIZE; offset++){

			if(test[offset] > test[index]){

				temp = test[offset];

				test[offset] = test[index];

				test[index] = temp;
			}

		}

	}

	print_array(test);

}

/* Add other Implementation File Code Here */
