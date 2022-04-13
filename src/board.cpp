class board {
	public:
		string boardSpaces[64];
		int blackPuckCount;
		int whitePuckCount;
		void drawBoard(void);
		void updateBoard(int x, int y, string mark);
}
