#include <iostream>
#include <math.h>
#include <iomanip>
#include <string.h>
using namespace std;

int main() {
	int i, j, pol;
	char a[255], b[255];
	cout << "Vvedite ctroky:" << "\n";
	gets_s(a);
	
	for (i = (int)strlen(a) - 2, j = 0; i >= 0; i -= 1, j += 1) {
		b[j] = a[i];
	}
	i = 0;
	do {
		if (a[i] == b[i]) pol = 1;
		else pol = 0;
		i += 1;
	} while (i < (int)strlen(a)-1 && pol == 1);
	if (pol == 1) cout << "\nVvedenay stroka POLINDROM";
	else cout << "\nVvedenaya stroka NE POLINDROM";
	return 0;
}
