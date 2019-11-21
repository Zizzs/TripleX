// Quick C++ Course for Unreal Engine
// Gives library functions for console printing. Similar to Using System in C#
#include <iostream>

int main()
{
    // Standard Namespace, Cout function to post string to console.
    // Print Initial Text
    std::cout << "You are a secret agent breaking into a secure server room..." << std::endl;
    std::cout << "Enter the correct code to continue..." << std::endl;

    const int CodeA = 4;
    const int CodeB = 3;
    const int CodeC = 2;

    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

    // Print CodeSum and CodeProduct to terminal "std::cout << Output" "std::cin >> Input"
    std::cout << std::endl;
    std::cout << "+ There are 3 numbers in the code" << std::endl;
    std::cout << "+ The codes add-up to: " << CodeSum << std::endl;
    std::cout << "+ The codes multiply to give: " << CodeProduct << std::endl;

    int GuessA, GuessB, GuessC;
    int GuessSum;
    int GuessProduct;

    // Get user input as three numbers (2 3 4)
    std::cin >> GuessA;
    std::cin >> GuessB;
    std::cin >> GuessC;

    // Get Sum and Product
    GuessSum = GuessA + GuessB + GuessC;
    GuessProduct = GuessA * GuessB * GuessC;

    // Compare GuessSum/Product with the CodeSum/Product to check win condition
    if (GuessSum == CodeSum && GuessProduct == CodeProduct)
    {
        std::cout << "You broke into the server room!";
    }
    else
    {
        std::cout << "You tripped an alarm and got captured.";
    }

    return 0;
}