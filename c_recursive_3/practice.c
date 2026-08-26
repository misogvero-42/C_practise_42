#include <stdio.h>

void f()

{
	static int count = 0;
	count++;
	if (count < 523456)
		return (1 + f() );
	return(1);
}
int main(void)

{
	f();
	printf(count);
	return(0);
}
