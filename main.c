#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int sec;
	
	printf("Input seconds:");
	scanf("%i", &sec);
	
	printf("The time is %i:%i:%i\n",
	sec/3600,//hour
	(sec%3600)/60,//minute
	sec%60//second
	);
	
	return 0;
}
