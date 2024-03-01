#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand((unsigned int)time(NULL));

    int level;
    cout << "Choose the difficulty level:" << endl;
    cout << "1. Easy (1-10)" << endl;
    cout << "2. Medium (1-50)" << endl;
    cout << "3. Difficult (1-100)" << endl;
    cout << "Enter the corresponding number (1, 2, or 3): ";
    cin >> level;

    int upperLimit;
    int maxAttempts;

    // Set difficulty parameters based on the chosen level
    switch (level)
    {
    case 1:
        upperLimit = 10;
        maxAttempts = 3;
        break;
    case 2:
        upperLimit = 50;
        maxAttempts = 3;
        break;
    case 3:
        upperLimit = 100;
        maxAttempts = 3;
        break;
    default:
        cout << "Invalid choice. Exiting the program." << endl;
        return 1;
    }

    int number = (rand() % upperLimit) + 1;
    int guess = 0;
    int attempts = 0;

    do
    {
        cout << "Enter the guess number (1-" << upperLimit << "): ";
        cin >> guess;

        if (guess > number)
            cout << "Guess lower" << endl;
        else if (guess < number)
            cout << "Guess higher" << endl;
        else
            cout << "Congratulations! You won!!" << endl;

        attempts++;

    } while (guess != number && attempts < maxAttempts);

    if (attempts == maxAttempts)
        cout << "Sorry, you've reached the maximum number of attempts. The correct number was: " << number << endl;

    return 0;
}
