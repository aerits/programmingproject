#include "board.h"
#include "disc.h"
#include <iostream>
#include <string>

using namespace std;

void board::updateBoard(int x, int y, string mark, bool on){
        BoardSpaces[((y-1)*8)+x].setColor(mark, on); 
}

void board::drawBoard(void) {
        cout << "  a b c d e f g h\n|-----------------|" << endl;
	for(int a = 0;a<8;a++){
	 	cout << "|";
        	for(int i = 0;i<8;i++){
                	cout << " " << BoardSpaces[(a*8)+i+1].checkColor();
        	}
		cout << " | " << a+1 << endl;
	}
	cout << "|-----------------|" << endl;
}

string board::checkSpace(int x, int y) {
	return BoardSpaces[((y-1)*8)+x].checkColor();
}

void board::setupBoard(){
	for(int i = 1;i<9;i++){
                for(int y = 1;y<9;y++){
                	BoardSpaces[((i-1)*8)+y].spawn(y, i, false, " ");
		}
        }
	updateBoard(4, 4, "O", true);
	updateBoard(5, 5, "O", true);
	updateBoard(4, 5, "0", true);
	updateBoard(5, 4, "0", true);
}
