/*
 * =====================================================================================
 *
 *       Filename:  dontfail_hw10_task2.c
 *       	Usage:  ./dontfail_hw10_task2.c
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/13/2017 03:53:55 PM
 *       Compiler:  gcc -Wall -Werr
 *         Author:  Robert Christensen (), robertchristensen1@mail.weber.edu
 * =====================================================================================
 */
#include <stdio.h>		/* For Standard I/O */
#include <stdlib.h>
#include <string.h>
/* Function Prototypes */

#define LEN 11

struct tsunami{
	int mo, da, yr, fatalities;
	double max_height;
	char location[20];
};
void Usage(char** info);
void ReadFile(char *dataFile1, float data[]);

/* Main Program */
int main(int argc, char *argv[])
{
	float data[LEN];
	if(argc != 2 || strcmp((argv[1]), "--help") == 0)
	{
		Usage(argv);
	}
	else
	{
		ReadFile(argv[1], data);
	}

	return 0;
}


/* Function Defenitions */
void Usage(char** info)
{
	printf("Could not open\n");
	printf("Usage <waves.txt>\n");
	exit(1);
}

void ReadFile(char *dataFile1, float data[])
{
	FILE *InF;
	int i = 0, j;
	double max = 0, sum = 0, average;
	struct tsunami wave[LEN];
	InF = fopen(dataFile1, "r");
	if(InF == NULL)
	{
		printf("Cannot read file, error\n");
		exit(1);
	}
	else
	{
		while(fscanf(InF, "%d %d %d %d %lf %s", &wave[i].mo,&wave[i].da,&wave[i].yr,&wave[i].fatalities,&wave[i].max_height,wave[i].location) == 6)
		{
			sum = sum + wave[i].max_height;
			if (wave[i].max_height > max)
				max =wave[i].max_height;
			i++;
		}
		j  = i;

		average = sum/j;
		printf("Report\n\n");
		printf("Max height(in feet): %.2f \n\n", max*3.28);
		printf("Average height(in feet): %.2f \n\n", average*3.28);
		printf("Tsunamis with greater than average height: \n");
			for(i=0; i<=j-1; i++)
				if(wave[i].max_height > average)
					printf("%s \n", wave[i].location);
		fclose(InF);
	


	}
	return;
}
