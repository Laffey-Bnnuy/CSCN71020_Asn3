
#include "pch.h"
#include "CppUnitTest.h"
#include <string.h>
#define MAX_STRING_SIZE 7
extern "C" void Game(char*, char*, char*);
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestForRockPaperScissorGame
{
	TEST_CLASS(ValidInput)
	{
	public:
		
		TEST_METHOD(Case1_Player_1)
		{
			char* Input1 = "Rock";
			char* Input2 = "Scissor";
			char Result[MAX_STRING_SIZE] = "";
			Game(Input1, Input2, Result);
			Assert::AreEqual("Player1", Result);
		}
		TEST_METHOD(Case2_Player_2)
		{
			char* Input1 = "Paper";
			char* Input2 = "Scissor";
			char Result[MAX_STRING_SIZE] = "";
			Game(Input1, Input2, Result);
			Assert::AreEqual("Player2", Result);
		}
		TEST_METHOD(Case3_Draw)
		{
			char* Input1 = "Paper";
			char* Input2 = "Paper";
			char Result[MAX_STRING_SIZE] = "";
			Game(Input1, Input2, Result);
			Assert::AreEqual("Draw", Result);
		}


	};
	TEST_CLASS(InvalidInput)
	{
	public:

		TEST_METHOD(Case1_Invalid_Input_1)
		{
			char* Input1 = "Papers";
			char* Input2 = "Paper";
			char Result[MAX_STRING_SIZE] = "";
			Game(Input1, Input2, Result);
			Assert::AreEqual("Invalid", Result);
		}
		TEST_METHOD(Case2_Invalid_Input_2)
		{
			char* Input1 = "Scissor";
			char* Input2 = "Rocket";
			char Result[MAX_STRING_SIZE] = "";
			Game(Input1, Input2, Result);
			Assert::AreEqual("Invalid", Result);
		}

		TEST_METHOD(Case3_Invalid_Input_Both)
		{
			char* Input1 = "Axe";
			char* Input2 = "Sword";
			char Result[MAX_STRING_SIZE] = "";
			Game(Input1, Input2, Result);
			Assert::AreEqual("Invalid", Result);
		}
	};
}
