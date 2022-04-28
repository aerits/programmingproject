#ifndef BOARD_H
#define BOARD_H
#include "disc.h"
#include <iostream>
#include <string>

using namespace std;

class board {
	public:
		void drawBoard(void);
                void updateBoard(int x, int y, string mark, bool on);
		void setupBoard();
		string checkSpace(int x, int y);
		disc BoardSpaces[64];
		int blackPuckCount;
		int whitePuckCount;
};

#endif // BOARD_H
