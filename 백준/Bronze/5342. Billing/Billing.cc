#include <iostream>
using namespace std;

int main()
{
    double sum = 0;
    while (true)
    {
        string s;
        cin >> s;

        if (s == "EOI")
            break;

        if (s == "Paper")
            sum += 57.99;
        else if (s == "Printer")
            sum += 120.5;
        else if (s == "Planners")
            sum += 31.25;
        else if (s == "Binders")
            sum += 22.5;
        else if (s == "Calendar")
            sum += 10.95;
        else if (s == "Notebooks")
            sum += 11.2;
        else if (s == "Ink")
            sum += 66.95;
    }

    cout << fixed;
    cout.precision(2);
    cout << '$' << sum;
}