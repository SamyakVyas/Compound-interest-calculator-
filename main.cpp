#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double principal, rate, time, n, amount, interest;
    char again;

    cout << "Welcome to Compound Interest Calculator!\n\n";

    do
    {
        cout << "Enter principal amount: $";
        cin >> principal;

        cout << "Enter annual interest rate (%): ";
        cin >> rate;

        cout << "Enter time (years): ";
        cin >> time;

        cout << "Enter number of times interest compounds per year\n";
        cout << "(1 = yearly, 12 = monthly, 365 = daily): ";
        cin >> n;

        if (principal <= 0 || rate <= 0 || time <= 0 || n <= 0)
        {
            cout << "Invalid input. All values must be greater than 0.\n\n";
        }
        else
        {
            amount = principal * pow(1 + (rate / 100) / n, n * time);
            interest = amount - principal;

            cout << "\n--- Results ---\n";
            cout << "Principal: $" << principal << "\n";
            cout << "Interest Rate: " << rate << "%\n";
            cout << "Time: " << time << " years\n";
            cout << "Compounding: " << n << " times per year\n";
            cout << "Interest Earned: $" << interest << "\n";
            cout << "Total Amount: $" << amount << "\n\n";
        }

        cout << "Calculate again? (y/n): ";
        cin >> again;
        cout << "\n";

    } while (again == 'y' || again == 'Y');

    cout << "Goodbye!\n";
    return 0;
}
