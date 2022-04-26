#include "board.h"
#include <iostream>
#include <string>

using namespace std;

void board::updateBoard(int x, int y, string mark) {
        BoardSpaces[((y-1)*8)+x] = mark;
}

void board::drawBoard(void) {
        cout << "  a b c d e f g h\n|-----------------|" << endl;
	for(int a = 0;a<8;a++){
	 	cout << "|";
        	for(int i = 0;i<8;i++){
                	cout << " " << BoardSpaces[(a*8)+i+1];
        	}
		cout << " | " << a+1 << endl;
	}
}

