#include <stdio.h>
#include "armstrong.c"
#include <stdbool.h>
#include "chk_bin.c"

void armstrong(int number,bool *bl);
void chk(int bin,bool *ch);

int main()
{
	int a=150;
	bool arm=false;
	bool chk_bin=true;
	armstrong(a,&arm);
	printf("the number is arm(0/1) %d\n",arm);

	int bin=1013;
	chk(bin,&chk_bin);
	printf("the number is bin(0/1) %d\n",chk_bin);


}
