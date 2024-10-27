#include "main.h"

int main(void) {
	char Result[7] = "";
	Game("Win", "Lose", Result);
	return 0;
}
void Game(char* Input1, char* Input2, char* Result) {
	strncpy(Result, Input1, 7);
}