%{
    #include "y.tab.h"
    int slct = 0, mlct=0;
    int fg = 0;
%}
%%
[0-9]  {return NUMBER;}
[a-zA-Z] {return LETTER;}
\n	    return 0;
%%
int yywrap()
{
	return 1;
}