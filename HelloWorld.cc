/*
 * HelloWorld.cc
 *
 *  Created on: 1 Jul 2015
 *      Author: pqm78245
 */

#include<iostream>
#include<math.h>
#include<vector>
#include"square.h"
#include"factorial.h"
using namespace std;

int main(){
	int x = 10;
	int times = 100000;

	vector<double> u,v,w,y;
	//this is used to change the file
	for(int i= 0; i < times; i++) u.push_back(sin(i));
	for(int i= 0; i < times; i++) v.push_back(square(i));
	for(int i= 0; i < times; i++) w.push_back(i*i);
	for(int i= 0; i < times; i++) y.push_back(factorial(i));
<<<<<<< .merge_file_9z5DJ5
	//for(int i= 0; i < times; i++) z.push_back(square(factorial(i)));
=======
	//this is supposed to be in the add_function branch
>>>>>>> .merge_file_LEnZ63
	cout << "Hello World" << endl;
	cout << times << endl;
	return 0;
}


