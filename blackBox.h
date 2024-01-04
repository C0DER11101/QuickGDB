#ifndef __blackBOX__
#define __blackBOX__

#include<iostream>

void sophisticated(int*);
int* complicated(int*);

void sophisticated(int *j) {
	*j=10;
}

int* complicated(int *j) {
	return NULL;
}

#endif
