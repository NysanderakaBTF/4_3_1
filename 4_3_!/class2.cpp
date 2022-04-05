#include "class2.h"
#include <iomanip>
void class2::sortt(int l, int r)
{
	int i = l, j = r, x = ar[(l + r) / 2];

	do {
		while (ar[i] < x) i++;
		while (ar[j] > x) j--;

		if (i <= j) {
			if (ar[i] > ar[j]) {
				int t = ar[j];
				ar[j] = ar[i];
				ar[i] = t;
			} 
			i++;
			j--;
		}
	} while (i <= j);

	if (i < r)
		sortt( i, r);
	if (l < j)
		sortt ( l, j);
}

void class2::show()
{
	for (int i = 0; i <n; i++) {
		cout << setw(5) << ar[i];
	}
}
