#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

string getComputerChoice() {
    int choice = rand() % 3;
    switch (choice) {
    case 0: return "rock";
    case 1: return "paper";
    case 2: return "scissors";
    }
    return "";
}

string getWinner(string playerChoice, string computerChoice) {
    if (playerChoice == computerChoice) {
        return "It's a tie!";
    }
    else if ((playerChoice == "rock" && computerChoice == "scissors") ||
        (playerChoice == "paper" && computerChoice == "rock") ||
        (playerChoice == "scissors" && computerChoice == "paper")) {
        return "You win!";
    }
    else {
        return "Computer wins!";
    }
}

int main() {
    srand(static_cast<unsigned int>(time(0)));

    string playerChoice;
    string computerChoice;
    string playAgain;

    do {
        cout << "Enter rock, paper, or scissors: ";
        cin >> playerChoice;

        computerChoice = getComputerChoice();
        cout << "Computer chose: " << computerChoice << endl;

        cout << getWinner(playerChoice, computerChoice) << endl;

        cout << "Do you want to play again? (yes/no): ";
        cin >> playAgain;
    } while (playAgain == "yes");



    return 0;
}
