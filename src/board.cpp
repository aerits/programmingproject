#include "board.h"
#include <iostream>
#include <string>

using namespace std;

void board::updateBoard(int x, int y, string mark) {
        BoardSpaces[(y*8)+x-1] = mark;
}

void board::drawBoard(void) {
        cout << "  a b c d e f g h\n|-----------------|" << endl;
	for(int a = 0;a<8;a++){
	 	cout << "|";
        	for(int i = 0;i<8;i++){
                	cout << " " << BoardSpaces[(a*8)+i];
        	}
		cout << " | " << a+1 << endl;
	}
}

