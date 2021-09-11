#include<stdio.h>

int findSize(char *p ){

	int i, u=0;

	for(i=0;p[i]!='\0';i++){ 
		u++;
	}

	return u;
}

int main()
{
 char character[]="CENG";
 
 printf("Size of this array =  %d ",findSize(character));
 
 return 0;
}
