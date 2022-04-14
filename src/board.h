#ifndef BOARD_H
#define BOARD_H
#include <iostream>
#include <string>

using namespace std;

class board {
	public:
		string boardSpaces[64];
		int blackPuckCount;
		int whitePuckCount;
		void drawBoard(void);
		void updateBoard(int x, int y, string mark);
};

#endif // BOARD_H
