#include <iostream>
#include <string>

using namespace std;

//abstract function
void PrintIntro();

//entry point
int main()
{
    PrintIntro();
    // get a guess from the player
    cout << "Enter your guess: ";
    string Guess = "";
    getline(cin, Guess);
}

void PrintIntro()
{
    // intruduce the game
    constexpr int WORD_LENGTH = 9;
    cout << "Welcome to the Bulls and COWs. \n";
    cout << "Can you guess the " << WORD_LENGTH;
    cout << " letter isogram i am thinking of?\n";
    cout << endl;
    return;
}