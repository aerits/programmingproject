#include<iostream>
#include<vector>
#include<iterator>
#include "board.h"
#include "ai.h"
#include "disc.h"
using namespace std;

void startScreen() {
	cout << "  a b c d e f g h\n|-----------------| \n|                 | 1\n|                 | 2\n|  welcome to     | 3\n|   c++thello     | 4\n|                 | 5\n|    1. start     | 6\n|    2. quit      | 7\n|    3. help      | 8\n|-----------------|\n" << flush;
	cout << "by steven mai\n";
}

void helpScreen() {
	system("clear");
	cout << "in othello, the game is based around putting two discs of your color around the opposite color to make it flip into your own color\nthose are the only valid moves\nif you can't do that, you skip your turn\nat the end, the player with the most discs of their color wins\ntip: you can't flip over discs that are in the corner\n";
	getc(stdin);
}

void endScreen() {
	cout << "  a b c d e f g h\n|-----------------| \n|                 | 1\n|                 | 2\n|                 | 3\n|     game end    | 4\n|                 | 5\n|    1. play again| 6\n|    2. quit      | 7\n|                 | 8\n|-----------------|\n" << "thanks for playing\nwhite:\nblack:\n" << flush;
}

void setupBoard(){
}

void vidyagaming(board brd){
	int turn=0;
	string input;
	string inputx, inputy;
	int inputwhy;
	bool startOfInput=true;
	const char *str = "abcdefgh";
	while(true){
		if(turn==0){
			startOfInput=true;
			inputx="";
			inputy="";
			system("clear");
			brd.drawBoard();
			cout << "blacks turn\nmove>";
			getline (cin, input);
			
			//split up input into x and y
			for(string::iterator i=input.begin();i!=input.end();i++){
				if(*i==' '){
					startOfInput=false;
					++i;
				}
				if(startOfInput) {
					inputy=inputy+*i;
				} else{
					inputx=inputx+*i;
				}
			}
			
			char target = inputy[0];
			const char *result = str;
			
			brd.updateBoard(stoi(inputx), stoi(inputy), "0", true);
			turn=1;
		}	
		else if(turn==1){
			system("clear");
			brd.drawBoard();
			cout << "whites turn\nmove>";
			getline (cin, input);
			turn=0;
		}
	}
}

int main() {
	board Board;
	string input;
	bool playing=true;
	system("clear");
	system("cat ../logo.txt");
	cout << "press any key to continue...";
	while(playing){
	getline (cin, input);
	system("clear");
	startScreen();
	getline (cin, input);
	if(input == "1"){
		input="";
		system("clear");
		Board.setupBoard();
		Board.drawBoard();
		vidyagaming(Board);
	} else if(input == "3"){
		helpScreen();
	} else {
		playing=false;
	}}
	system("clear");
	endScreen();
	system("cat ../logo.txt");
	return 0;
};
