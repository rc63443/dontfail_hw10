/*
 * =====================================================================================
 *
 *       Filename:  dontfail_hw10_task1.c
 *       	Usage:  ./dontfail_hw10_task1.c
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/13/2017 03:53:14 PM
 *       Compiler:  gcc -Wall -Werr
 *         Author:  Robert Christensen (), robertchristensen1@mail.weber.edu
 * =====================================================================================
 */
#include <stdio.h>		/* For Standard I/O */
#include <stdlib.h>
#include "dontfail_hw10_task1.h"

/* Function Defenitions */
struct house InputHouse(int* stno, char* stname, float* price)
{
    printf("Please enter the street Number: ");
    scanf("%d", stno);
    printf("Please enter the street name: ");
    scanf("%c", stname);
    printf("Please enter the price: ");
    scanf("%f", price);
}

// 2) Function to PrintHouse info
void PrintHouse(char *name, struct house h)
{
	printf("%d %c for $%f\n", house.stno, house.stname, house.price);
}

// 3) Function to Compare Prices
int ComparePrices(int comparison, struct house firstHouse, struct house secondHouse)
{
	if (firstHouse.price > secondHouse.price)
    {
       return(comparison = 1);
    }
    if (secondHouse.price > firstHouse.price)
    {
        return(comparison = -1);
    }
    else
    {
        return(comparison = 0);
    }
}



