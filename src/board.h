#ifndef BOARD_H
#define BOARD_H
#include <iostream>
#include <string>

using namespace std;

class board {
	public:
		string BoardSpaces[63];
		int blackPuckCount;
		int whitePuckCount;
		void drawBoard(void);
		void updateBoard(int x, int y, string mark);
		void setBlackPuckCount(int num);
};

#endif // BOARD_H
