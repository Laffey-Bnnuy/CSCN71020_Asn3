#include "main.h"
#define STRING_MAX_SIZE 8
int main(void) {
	char Result[STRING_MAX_SIZE] = "";
	Game("Rock", "Scissor", Result);
	return 0;
}
void Game(char* Input1, char* Input2, char* Result) {
	if (Input1 == Input2) {
		strncpy(Result, "Draw", STRING_MAX_SIZE);
	}
	else if (Input1 == "Rock") {
		if (Input2 =="Scissor")
			strncpy(Result, "Player1", STRING_MAX_SIZE);
		else strncpy(Result, "Player2", STRING_MAX_SIZE);
	}
}