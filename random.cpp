#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int choice, length;

    string upper = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string lower = "abcdefghijklmnopqrstuvwxyz";
    string numbers = "0123456789";
    string symbols = "@#$%&*";

    string all = upper + lower + numbers + symbols;

    srand(time(0));

    while (true)
    {
        cout << "\n----- Random Password Generator -----\n";
        cout << "1. Generate Password\n";
        cout << "2. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1)
        {
            cout << "Enter password length: ";
            cin >> length;

            if (length < 4)
            {
                cout << "Password length should be at least 4\n";
                continue;
            }

            string password = "";

            // Ensure one of each type
            password += upper[rand() % upper.length()];
            password += lower[rand() % lower.length()];
            password += numbers[rand() % numbers.length()];
            password += symbols[rand() % symbols.length()];

            for (int i = 4; i < length; i++)
            {
                password += all[rand() % all.length()];
            }

            cout << "Generated Password: " << password << endl;
        }
        else if (choice == 2)
        {
            cout << "Exiting program...\n";
            break;
        }
        else
        {
            cout << "Invalid choice. Try again.\n";
        }
    }

    return 0;
}
