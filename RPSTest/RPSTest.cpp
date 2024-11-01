#include "pch.h"
#include "CppUnitTest.h"

extern "C" char* determineOutcome(const char* player1, const char* player2);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace RPSTest
{
	TEST_CLASS(RPSTest)
	{
	public:
		
        TEST_METHOD(Test_Player1Wins_RockVsScissors)
        {
            const char* player1 = "Rock";
            const char* player2 = "Scissors";

            char* result = determineOutcome(player1, player2);

            Assert::AreEqual("Player1", result, L"Expected Player1 to win when Rock beats Scissors.");
        }

        TEST_METHOD(Test_Player2Wins_PaperVsRock)
        {
         
            const char* player1 = "Rock";
            const char* player2 = "Paper";

            char* result = determineOutcome(player1, player2);

            Assert::AreEqual("Player2", result, L"Expected Player2 to win when Paper beats Rock.");
        }

        TEST_METHOD(Test_Draw_RockVsRock)
        {
            const char* player1 = "Rock";
            const char* player2 = "Rock";

            char* result = determineOutcome(player1, player2);

            Assert::AreEqual("Draw", result, L"Expected a draw when both players choose Rock.");
        }

        TEST_METHOD(Test_Player1Wins_ScissorsVsPaper)
        {
            const char* player1 = "Scissors";
            const char* player2 = "Paper";

            char* result = determineOutcome(player1, player2);

            Assert::AreEqual("Player1", result, L"Expected Player1 to win when Scissors beats Paper.");
        }

        TEST_METHOD(Test_Player2Wins_ScissorsVsPaper)
        {
      
            const char* player1 = "Paper";
            const char* player2 = "Scissors";

            char* result = determineOutcome(player1, player2);

            Assert::AreEqual("Player2", result, L"Expected Player2 to win when Scissors beats Paper.");
        }

        TEST_METHOD(Test_InvalidInput)
        {
 
            const char* player1 = "Rock";
            const char* player2 = "Megha";  // Invalid input

            char* result = determineOutcome(player1, player2);

            Assert::AreEqual("Invalid", result, L"Expected 'Invalid' when an unrecognized name is entered.");
        }
	};
}
