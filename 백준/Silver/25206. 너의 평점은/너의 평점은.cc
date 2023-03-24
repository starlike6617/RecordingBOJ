#include <iostream>
using namespace std;

double gradeToNum(string str)
{
    if (str == "F")
        return 0;
    else
    {
        double temp = 0;
        temp += 4 - (str[0] - 'A');
        if (str[1] == '+')
            temp += 0.5;
        return temp;
    }
}

int main()
{
    double res = 0, sum = 0;
    for (int i = 0; i < 20; i++)
    {
        string lec, grade;
        double credit;
        cin >> lec >> credit >> grade;

        if (grade == "P")
            continue;

        sum += credit;
        res += credit * gradeToNum(grade);
    }

    cout << res / sum;
}