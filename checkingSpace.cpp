//
// Created by orlah on 23/03/2020.
//
#include <iostream>
#include <stdexcept>
#include <string>
#include <exception>
using namespace std;

void removeDupWord(string str)
{
    string word = "";
    for (auto x : str)
    {
        if (x == ' ')
        {
            cout << word << endl;
            word = "";
        }
        else
        {
            word = word + x;
        }
    }
    cout << word << endl;
}

int main()
{
    string str = "Geeks for Geeks";
    removeDupWord(str);
    return 0;
}
