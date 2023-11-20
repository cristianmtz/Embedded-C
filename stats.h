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
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

/**
 * @brief <Add Brief Description of Function Here>
 *
 * <Add Extended Description Here>
 *
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 *
 * @return <Add Return Informaiton here>
 */
 
 
/*A function that prints the statistics of an array including minimum, maximum, mean, and median.  */
void print_statistics(unsigned char *array); 

 /* Give an array of data and a length, print the array to the screen */
void print_array(unsigned char *array);

/* Given an array of data and a length, returns the median value */
signed short int find_median(unsigned char *array, signed short int length); 

/* Given a data array and a length, return the mean */
double find_mean(unsigned char *array, signed short int length); 

/* Given a data array and a length, return the maximum */
unsigned char find_maximum(unsigned char *array,signed short int length); 

 /* Given a data array and a length, return the minimum */
unsigned char find_minumum(unsigned char *array, signed short int length);

/* Given an array of data and a length, sort the array from largest to smallest. (The zeroth element should be the largest value, and the last (n-1) element should be the smallest value.)*/
void sort_array(unsigned char *array); 


#endif /* __STATS_H__ */
