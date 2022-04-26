#ifndef BOARD_H
#define BOARD_H
#include <iostream>
#include <string>

using namespace std;

class board {
	public:
		void drawBoard(void);
                void updateBoard(int x, int y, string mark);
		void setupBoard();
		string BoardSpaces[64];
		int blackPuckCount;
		int whitePuckCount;
};

#endif // BOARD_H
