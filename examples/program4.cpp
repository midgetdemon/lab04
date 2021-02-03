#include <iostream>

void foo(int x)
{
	std::cout<<x<<std::endl;
}
int dummy = 0; 
int main()
{
	int x;
	int r = 4;
	int y = x + r;
	if (x) dummy++;
	if (r) dummy++;
	if (y) dummy++;

	foo(y);
	
	return 0;
}



