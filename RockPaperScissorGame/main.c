#include "main.h"
#define STRING_MAX_SIZE 8
int main(void) {
	return 0;
}
bool Game(char* Input1, char* Input2, char* Result) {

	if ((Input1 != "Rock" && Input1 != "Paper" && Input1 !="Scissor") 
		|| (Input2 != "Rock" && Input2 != "Paper" && Input2 != "Scissor")) {
		strncpy(Result, "Invalid", STRING_MAX_SIZE);
		return false;
	}
	
	if (Input1 == Input2) {
		strncpy(Result, "Draw", STRING_MAX_SIZE);
	}
	else if (Input1 == "Rock") {
		if (Input2 =="Scissor")
			strncpy(Result, "Player1", STRING_MAX_SIZE);
		else strncpy(Result, "Player2", STRING_MAX_SIZE);
	}
	else if (Input1 == "Scissor") {
		if (Input2 == "Paper")
			strncpy(Result, "Player1", STRING_MAX_SIZE);
		else strncpy(Result, "Player2", STRING_MAX_SIZE);
	}
	else if (Input1 == "Paper") {
		if (Input2 == "Rock")
			strncpy(Result, "Player1", STRING_MAX_SIZE);
		else strncpy(Result, "Player2", STRING_MAX_SIZE);
	}
	return true;
}