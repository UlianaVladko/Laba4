
#include <iostream>
#include "MyMath.h"

int MyMath::count = 0;

float MyMath::Add(float value1, float value2) {	
	MyMath::count += 1;
	return value1 + value2;
}

float MyMath::Sub(float value1, float value2) {
	MyMath::count += 1;
	return value1 - value2;
}

float MyMath::Mult(float value1, float value2) {
	MyMath::count += 1;
	return value1 * value2;
}

float MyMath::Div(float value1, float value2) {
	MyMath::count += 1;
	return value1 / value2;
}