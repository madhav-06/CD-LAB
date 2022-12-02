%{
	#include<stdio.h>
%}

%%
auto|double|int|struct|break|else|long|switch|case|enum|register|typedef|char|extern|return|union|continue|for|signed|void|do|if|static|while|default|goto|sizeof|volatile|const|float|short {printf("%s is Keyword",yytext);}

[a-zA-Z][a-z A-Z 0-9]* {printf("%s is an identifier\n",yytext);}

[0-9]+ {printf("%s is a number\n",yytext);}

["<" | "<=" | ">" | ">=" | "==" | "!="] {printf("%s is a relational operator\n",yytext);}
%%

int yywrap() 
{
	return 1;
}

int main()
{
	printf("Enter the string: ");
	yylex();
	return 0;
}