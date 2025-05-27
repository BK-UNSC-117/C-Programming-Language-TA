#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

void main()
{
	char *str1=NULL;
	str1=realloc(str1,sizeof(char)*3);
	str1[0]='a';
	str1[1]='b';
	str1[2]='\0';
	printf("%s",str1);
}
