#include <cstdio>
using namespace std;
int main()
{
	register unsigned long long int count = 1;
	register double pi = 4.0;
	for (;; count++)
	{
		pi -= 4.0/(4*count-1);
		pi += 4.0/(4*count+1);
		printf("result of %lld:%.15lf\n", count, pi);
	}
	return 0;
}
