#include <stdio.h>
int main()
{
    int X, a, b;

	while (1)
	    {
	    	b = 0;
	    	scanf("%d", &X);
		    if(X == 0)
		    	break;
		    if(X % 2 == 0)
			    {
			    	for(a = X; a <= X + 8; a += 2) b += a;
			    }
		    else
			    {
			    	for(a=++X;a<=X+8; a+=2) b+=a;
				}
		    printf("%d\n", b);
	    }
	    
    return 0;
}
