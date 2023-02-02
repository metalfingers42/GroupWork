//Guessing game with added replay feature

#include <iostream>
using namespace std;
int main()
{
    std::string namePlayer1;
    std::string namePlayer2;


    {
        std::cout << "Howdy, welcome to the number guessing game.  Player 1, what is your name?\n";
        std::cin >> namePlayer1;
        std::cout << "Welcome aboard\n" << namePlayer1 << std::endl;


        std::cout << "Player 2, what is your name?\n";
        std::cin >> namePlayer2;
        std::cout << "Welcome aboard\n" << namePlayer2 << std::endl;

        //generate random nmber between 1 and 100 inclusive
        int maxRandnumber = 100;
        int randomNumber = std::rand();//number between 1 and 100 inclusive
        randomNumber = randomNumber % 100 + 1;
        int playerGuess;
        int currentPlayer = rand() % 2;
        currentPlayer = currentPlayer - 1;
        do
        {
            switch (currentPlayer)
            {
            case 0:
            {
                cout << "Guess a number between 1-100, " << namePlayer1 << std::endl;
                break;
            }
            case 1:
            {
                cout << "Guess a number between 1 - 100, " << namePlayer2 << std::endl;
                break;
            }
            break;
            }
            std::cin >> playerGuess;
            if (playerGuess == randomNumber)
            {
                switch (currentPlayer)
                {
                case 0:
                {
                    cout << namePlayer1 << " was victorious!" << endl;
                    break;
                }
                case 1:
                {
                    cout << namePlayer2 << " was triumphant!" << endl;
                    break;
                }
                default: {
                    break;
                }
                }
            }
            else if (playerGuess < randomNumber)
            {
                cout << "Your guess was too low!" << endl;
            }
            else if (playerGuess > randomNumber)
            {
                cout << "Your guess was too damn high!" << endl;
            }
        } while (playerGuess != randomNumber);

    }
}
