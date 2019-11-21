// Quick C++ Course for Unreal Engine
// Gives library functions for console printing. Similar to Using System in C#
#include <iostream>

void PrintIntroduction()
{
    std::cout << "You are a secret agent breaking into a secure server room...\n";
    std::cout << "Enter the correct code to continue...\n\n";
}

void PlayGame()
{
    // Standard Namespace, Cout function to post string to console.
    // Print Initial Text
    PrintIntroduction();

    const int CodeA = 4;
    const int CodeB = 3;
    const int CodeC = 2;

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
    }
    else
    {
        std::cout << "\nYou tripped an alarm and got captured.";
    }
}

int main()
{
    PlayGame();
    return 0;
}