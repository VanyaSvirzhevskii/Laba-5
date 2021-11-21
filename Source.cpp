#include <iostream>

using namespace std;

int main()

{

	char ocn[100], dubl[100];
	gets_s(ocn);
	int k = 0, f = 0;
	int d = strlen(ocn);
	k = d;
	do {
		for (int i = 0; i < d - 2; i++)
		{
			if (ocn[i] > ocn[i + 2]) {
				dubl[i] = ocn[i];
				ocn[i] = ocn[i + 2];
				ocn[i + 2] = dubl[i];
			}
		}
		f++;
	} while (f < k);

	puts(ocn);

}