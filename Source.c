
#include<stdio.h>
#include<time.h>
#include<math.h>
#include<Windows.h>

#pragma warning (disable : 4996)



int main (void) 
{
	FILE* outfile = NULL;
	int hit_ship[5] = { 5, 4, 3, 3, 2 };

	
	outfile = fopen("outfile.log", "w");


	if (hit_ship[0] == 5)
	{
		fprintf(outfile, "Enemy's Carrier is sunk!\n");
		fputs("This is testing for fputs...\n", outfile);
	}
	/*if (hit_ship[1] == 4)
	{
		printf(outfile, "Enemy's Carrier is sunk!\n");
	}
	if (hit_ship[2] == 3)
	{
		printf(outfile, "Enemy's Battleship is sunk!\n");
	}
	if (hit_ship[3] == 3)
	{
		printf(outfile, "Enemy's Cruiser is sunk!\n");
	}
	if (hit_ship[4] == 2)
	{
		printf(outfile, "Enemy's Submarine is sunk!\n");
	}
	*/


	return 0;
}
