#include "disc.h"
#include <iostream>
#include <string>

using namespace std;

void disc::spawn(int tempx, int tempy, bool on, string color){
	x = tempx;
	y = tempy;
	onBoard = on;
	value=color;
}

string disc::checkColor(void){
	return value;
}

void disc::setColor(string color, bool on){
	value=color;
	onBoard = on;
}

bool validMove(int x2, int y2)
