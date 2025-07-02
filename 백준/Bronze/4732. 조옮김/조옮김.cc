#include <iostream>
#include <unordered_map>
#include <sstream>
#define endl '\n'
using namespace std;

int main()
{
    unordered_map<int, string> m1;
    m1[0] = "A";
    m1[1] = "A#";
    m1[2] = "B";
    m1[3] = "C";
    m1[4] = "C#";
    m1[5] = "D";
    m1[6] = "D#";
    m1[7] = "E";
    m1[8] = "F";
    m1[9] = "F#";
    m1[10] = "G";
    m1[11] = "G#";

    unordered_map<string, int> m2;
    m2["A"] = 0;
    m2["A#"] = 1;
    m2["B"] = 2;
    m2["C"] = 3;
    m2["C#"] = 4;
    m2["D"] = 5;
    m2["D#"] = 6;
    m2["E"] = 7;
    m2["F"] = 8;
    m2["F#"] = 9;
    m2["G"] = 10;
    m2["G#"] = 11;

    while (true)
    {
        string s;
        getline(cin, s);

        if (s == "***")
        {
            break;
        }

        int n;
        cin >> n;
        cin.ignore();

        stringstream ss(s);
        string note;

        while (ss >> note)
        {
            if (note == "Ab")
            {
                note = "G#";
            }
            else if (note == "Bb")
            {
                note = "A#";
            }
            else if (note == "Cb")
            {
                note = "B";
            }
            else if (note == "Db")
            {
                note = "C#";
            }
            else if (note == "Eb")
            {
                note = "D#";
            }
            else if (note == "Fb")
            {
                note = "E";
            }
            else if (note == "Gb")
            {
                note = "F#";
            }
            else if (note == "B#")
            {
                note = "C";
            }
            else if (note == "E#")
            {
                note = "F";
            }

            cout << m1[(m2[note] + n + 12) % 12] << ' ';
        }
        cout << endl;
    }
}