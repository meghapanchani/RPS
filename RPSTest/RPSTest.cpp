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
            // Arrange
            const char* player1 = "Rock";
            const char* player2 = "Scissors";

            // Act
            char* result = determineOutcome(player1, player2);

            // Assert
            Assert::AreEqual("Player1", result, L"Expected Player1 to win when Rock beats Scissors.");
        }
	};
}
