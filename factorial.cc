/*
 * factorial.cc
 *
 *  Created on: 1 Jul 2015
 *      Author: pqm78245
 */
#include"factorial.h"

int factorial(int x){
	if(x<0) return -1;
	if(x==0) return 1;

	int y = x;
	for(int i = x; i >1; i--) y*=i;
	return y;
}


