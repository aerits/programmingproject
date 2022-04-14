#include <iostream>
using namespace std;

void startScreen() {
	cout << "  a b c d e f g h\n|-----------------| \n|                 | 1\n|                 | 2\n|  welcome to     | 3\n|   c++thello     | 4\n|                 | 5\n|    1. start     | 6\n|    2. quit      | 7\n|                 | 8\n|-----------------|\n";
}

void endScreen() {
	cout << "  a b c d e f g h\n|-----------------| \n|                 | 1\n|                 | 2\n|                 | 3\n|     game end    | 4\n|                 | 5\n|    1. play again| 6\n|    2. quit      | 7\n|                 | 8\n|-----------------|\n";
}

int main() {
	startScreen();
	endScreen();
	return 0;
};
