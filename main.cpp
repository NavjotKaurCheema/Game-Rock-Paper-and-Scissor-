#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

int c = 0;
int p = 0;
int t = 0;
// Constant variables
const char ROCK = 'r';
const char PAPER = 'p';
const char SCISSORS = 's';
using namespace std;
char getComputerOption()
{
    srand(time(0));
    // Random number
    int num = rand() % 3 + 1;
    if (num == 1)
        return 'r';
    if (num == 2)
        return 'p';
    if (num == 3)
        return 's';
}
char getUserOption()
{
    char c;
    cout << "***~~~Rock, Paper and Scissors Game~~~***!!!" << endl<<endl;
    cout << "Choose one of the following options" << endl;
    cout << "`````````````````````````````````````````" << endl;
cout << "(r) for rock " << endl
 << "(p) for paper" << endl
         << "(s) for scissors " << endl;
    cin >> c;
    while (c != 'r' && c != 'p' && c != 's')
    {
        cout << "Please enter one of the following options only. " << endl;
        cout << "(r) for rock " << endl
             << "(p) for paper" << endl
             << "(s) for scissors " << endl;
        cin >> c;
    }
    return c;
}
void showSelectedOption(char option)
{
    if (option == 'r')
        cout << "Rock" << endl;
    if (option == 'p')
        cout << "Paper" << endl;
    if (option == 's')
        cout << "Scissors" << endl;
}
void chooseWinner(char uChoice, char cChoice)
{
    if (uChoice == ROCK && cChoice == PAPER)
    {
        cout << "Computer Wins! Paper wraps Rock." << endl;
        c+= 1;
    }
    else if (uChoice == PAPER && cChoice == SCISSORS)
    {
        cout << "Computer Wins! Scissors cut Paper." << endl;
c+= 1;
    }
  else if (uChoice == SCISSORS && cChoice == ROCK)
    {
        cout << "Computer Wins! Rock smashes Scissors." << endl;
        c+= 1;
    }
    else if (uChoice == ROCK && cChoice == SCISSORS)
    {
        cout << "You Win! Rock smashes Scissors." << endl;
        p+= 1;
    }
    else if (uChoice == SCISSORS && cChoice == PAPER)
    {
        cout << "You Win! Scissors cut Paper." << endl;
        p+= 1;
    }
    else if (uChoice == PAPER && cChoice == ROCK)
    {
        cout << "You Win! Paper wraps Rock." << endl;
        p+= 1;
    }
    else
    {
        cout << "Tie. Play again win the Game." << endl;
        t+= 1;
    }
}

int main()
{
    // User's choice
    string name;
    char choice;
    char uChoice;
// Compter's choice
char cChoice;
    cout << "\n\t\t****TRY YOUR LUCK****\n\n";
    cout << "\n\n~~~~Want to play??~~~~  "<<endl;
    cout << "Let's know your name:"<<endl;
    cin >> name;
    cout<<endl;

    do
    {

        uChoice = getUserOption();
        cout << "Your choice is: " << endl;
        showSelectedOption(uChoice);
        cout << "Computer's choice is: " << endl;
        cChoice = getComputerOption();
        showSelectedOption(cChoice);
        chooseWinner(uChoice, cChoice);
        cout << "\n\n-->Do you want to play again (y/n)? ";
        cin >> choice;
    } while (choice == 'Y' || choice == 'y');
    cout << "\n";
    cout << "***Thanks for playing the game.***\n";
    cout << "Computer's score:" << c << endl;
    cout << name << "'s score:" << p << endl;
    cout << "Tie:" << t << endl;

    return 0;
}
