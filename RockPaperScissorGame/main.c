#include "main.h"

int main(void) {
	char Result[7] = "";
	Game("Win", "Lose", Result);
	return 0;
}
void Game(char* Input1, char* Input2, char* Result) {
	if (Input1 == Input2) {
		strncpy(Result, "Draw", 7);
	}
	else if (Input1 == "Rock") {
		if (Input2 =="Scissor")
			strncpy(Result, "Player1", 7);
	}
}