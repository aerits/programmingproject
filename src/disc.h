#ifndef DISC_H
#define DISC_H
#include <iostream>
#include <string>

using namespace std;

class disc {
	public:
		void spawn(int tempx, int tempy, bool on, string color);
		void setColor(string color, bool on);
		string checkColor(void);
		int x, y;
		bool onBoard;
		string value;
};

#endif // DISC_H
