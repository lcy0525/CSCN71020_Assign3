#include "pch.h"
#include "CppUnitTest.h"

extern "C" const char* game(char[], char[]);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(Player1Win)
	{
	public:
		
		TEST_METHOD(Rock)
		{
			char Player1[10] = "Rock";
			char Player2[10] = "Scissors";
			const char* Result = game(Player1, Player2);
			Assert::AreEqual("Player1", Result);
		}
		TEST_METHOD(Scissors)
		{
			char Player1[10] = "Scissors";
			char Player2[10] = "Paper";
			const char* Result = game(Player1, Player2);
			Assert::AreEqual("Player1", Result);
		}
		
		TEST_METHOD(Paper)
		{
			char Player1[10] = "Paper";
			char Player2[10] = "Rock";
			const char* Result = game(Player1, Player2);
			Assert::AreEqual("Player1", Result);
		}
	};

	TEST_CLASS(Player2Win)
	{
	public:

		TEST_METHOD(Rock)
		{
			char Player1[10] = "Scissors";
			char Player2[10] = "Rock";
			const char* Result = game(Player1, Player2);
			Assert::AreEqual("Player2", Result);
		}
		TEST_METHOD(Scissors)
		{
			char Player1[10] = "Paper";
			char Player2[10] = "Scissors";
			const char* Result = game(Player1, Player2);
			Assert::AreEqual("Player2", Result);
		}

		TEST_METHOD(Paper)
		{
			char Player1[10] = "Rock";
			char Player2[10] = "Paper";
			const char* Result = game(Player1, Player2);
			Assert::AreEqual("Player2", Result);
		}
	};

	TEST_CLASS(Draw)
	{
	public:

		TEST_METHOD(Rock)
		{
			char Player1[10] = "Rock";
			char Player2[10] = "Rock";
			const char* Result = game(Player1, Player2);
			Assert::AreEqual("Draw", Result);
		}
		TEST_METHOD(Scissors)
		{
			char Player1[10] = "Scissors";
			char Player2[10] = "Scissors";
			const char* Result = game(Player1, Player2);
			Assert::AreEqual("Draw", Result);
		}

		TEST_METHOD(Paper)
		{
			char Player1[10] = "Paper";
			char Player2[10] = "Paper";
			const char* Result = game(Player1, Player2);
			Assert::AreEqual("Draw", Result);
		}
	};

}
