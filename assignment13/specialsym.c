#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	int i;
	
	printf("enter the string ");
	gets(str);
	
	for(int i=0;str[i]!='\0';i++)
	{
		if(str[i]==' ')
	
	{
		str[i]='#';
		
	}
  }
  printf("modified string %s \n",str);
  return 0;
}