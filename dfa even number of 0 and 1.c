#include<stdio.h>
#define max 100


int main()
{
	char s[max],state='a';
	int i;
	
	printf("Enter the string: ");
	scanf("%s",s);
	
	for(i=0;s[i]!='\0';i++){
		switch(state){
			case 'a': if(s[i]=='0')
					  	state='b';
					  else if(s[i]=='1')
					  	state='d';
					  break;
			case 'b': if(s[i]=='0')
					  	state='a';
					  else if(s[i]=='1')
					  	state='c';
					  break;
			case 'c': if(s[i]=='0')
					  	state='d';
					  else if(s[i]=='1')
					  	state='b';
					  break;
			case 'd': if(s[i]=='0')
					  	state='c';
					  else if(s[i]=='1')
					  	state='a';
					  break;
		}
	}
	if(state=='a')
		printf("String is accepted");
	else
		printf("String is not accepted");
		
	return 0;
}
