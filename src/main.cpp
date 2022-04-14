#include <iostream>
using namespace std;

void startScreen() {
	cout << "  a b c d e f g h\n|-----------------| \n|                 | 1\n|                 | 2\n|  welcome to     | 3\n|   c++thello     | 4\n|                 | 5\n|    1. start     | 6\n|    2. quit      | 7\n|    3. help      | 8\n|-----------------|\n" << flush;
	cout << "by steven mai\n";
}

void helpScreen() {
	system("clear");
	cout << "in othello, the game is based around putting two discs of your color around the opposite color to make it flip into your own color\nthose are the only valid moves\nif you can't do that, you skip your turn\nat the end, the player with the most discs of their color wins\ntip: you can't flip over discs that are in the corner\n";
}

void endScreen() {
	cout << "  a b c d e f g h\n|-----------------| \n|                 | 1\n|                 | 2\n|                 | 3\n|     game end    | 4\n|                 | 5\n|    1. play again| 6\n|    2. quit      | 7\n|                 | 8\n|-----------------|\n" << flush;
}

int main() {
	string input;
	system("clear");
	startScreen();
	getline (cin, input);
	helpScreen();
	return 0;
};
