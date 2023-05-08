// d2boh.cpp

#include <iostream>
#include <cmath>
#include <string>
#include "d2boh.h"
using namespace std;


int decimal_to_binary(int input, int output[12]) {
	// To be implemented	
	int count =0;
	int a=2;
	while (input != 0){
		int n = input;
		int temp = n%2;
		input = n/2;
		output[count] = temp;
		count++;
		if (count == 11){
			break;
		}
		//cout << temp << " ";
	}

	//cout << endl;
	for (int i=11; i>=0; i--){
        if (output[i] !=0){
    		a++;
        }
        if (a>2){
            cout << output[i];
		}
    }
	//cout << "==" << endl;
	return 0;
}

int decimal_to_octal(int input, int output[12]) {
	// To be implemented
	int count =0;
	while (input != 0){
		int n = input;
		int temp = n%8;
		input = n/8;
		output[count] = temp;
		count++;
		//cout << temp << " ";
		if (count == 11){
			break;
		}
	}
	//cout << endl;
	return 0;
}

int decimal_to_hexadecimal(int input, char output[12]) {
	// To be implemented
	int count =0;
	char c;
	while (input != 0){
		int n = input;
		int temp = n%16;
		input = n/16;
		if (temp < 10){
			output[count] = 48 + temp;
		} else {
			output[count] = 55 + temp;
		}
		count++;
		if (count == 11){
			break;
		}
		//cout << temp << " ";
	}
	//cout << endl;
	return 0;
}
