#include "blackBox.h"

using namespace std;

void crash(int *i) {
	*i=1;
}

void f(int *i) {
	int *j=i;

	sophisticated(j);
	j=complicated(j);

	crash(j);
}

int main(void) {
	int i;

	f(&i);

	return 0;
}
