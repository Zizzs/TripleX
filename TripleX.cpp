// Quick C++ Course for Unreal Engine
// Gives library functions for console printing. Similar to Using System in C#
#include <iostream>

void PrintIntroduction(int Difficulty)
{
    std::cout << "\n\nYou are a secret agent breaking into a level " << Difficulty << " secure server room...\n";
    std::cout << "Enter the correct code to continue...\n\n";
}

bool PlayGame(int Difficulty)
{
    // Standard Namespace, Cout function to post string to console.
    // Print Initial Text
    PrintIntroduction(Difficulty);

    const int CodeA = rand() % Difficulty + 1;
    const int CodeB = rand() % Difficulty + 1;
    const int CodeC = rand() % Difficulty + 1;

    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

    // Print CodeSum and CodeProduct to terminal "std::cout << Output" "std::cin >> Input"
    std::cout << "+ There are 3 numbers in the code";
    std::cout << "\n+ The codes add-up to: " << CodeSum;
    std::cout << "\n+ The codes multiply to give: " << CodeProduct << std::endl;

    // Get user input as three numbers (2 3 4)
    int GuessA, GuessB, GuessC;
    std::cin >> GuessA >> GuessB >> GuessC;

    // Get Sum and Product
    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    // Compare GuessSum/Product with the CodeSum/Product to check win condition
    if (GuessSum == CodeSum && GuessProduct == CodeProduct)
    {
        std::cout << "\nYou broke into the server room!";
        return true;
    }
    else
    {
        std::cout << "\nYou tripped an alarm and got captured.";
        return false;
    }
}

int main()
{
    int LevelDifficulty = 1;
    const int MaxLevelDifficulty = 5;

    while (LevelDifficulty <= MaxLevelDifficulty) // Loop until all levels are completed
    {
        bool bLevelComplete = PlayGame(LevelDifficulty);
        std::cin.clear();  // Clears errors
        std::cin.ignore(); // Discards buffer

        if (bLevelComplete)
        {
            ++LevelDifficulty;
        }
    }

    std::cout << "\nYou have broken into all server rooms. You win!";

    return 0;
}