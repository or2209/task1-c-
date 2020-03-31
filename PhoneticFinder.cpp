
/**
 * An example of how to write unit tests.
 * Use this as a basis to build a more complete Test.cpp file.
 * 
 * IMPORTANT: Please write more tests - the tests here are only for example and are not complete.
 *
 * AUTHORS: Ariel Yechezkel , or laharty
 * 
 * Date: 2020-02
 */


#include <iostream>
#include "PhoneticFinder.hpp"
#include <stdexcept>
#include <string>
#include <bits/stdc++.h> 
#include <exception>
using namespace std;

namespace phonetic
{
    string find(string text, string word)
    {
        if(text==""){
          throw out_of_range{"you insert empty word!!"};
        }
        text = text + " ";
        string subWord = "";
        string finalString = "";
        for (auto x : text)
        {
            if (x == ' ')
            {
                // cout << subWord << endl;
                if (word.size() == subWord.size())
                {
                    int count = 0;
                    for (int i = 0; i < subWord.size(); i++)
                    {
                        //same latter
                        if (subWord.at(i) == word.at(i))
                        {
                            count++;
                        }
                        //small or big latter
                        else if (subWord.at(i) == word.at(i) + 32 || subWord.at(i) == word.at(i) - 32)
                        {
                            count++;
                        }
                        //all of the mistakes
                        else if (subWord.at(i) == 'w' || subWord.at(i) == 'v' || subWord.at(i) == 'W' || subWord.at(i) == 'V')
                        {
                            if (word.at(i) == 'w' || word.at(i) == 'v' || word.at(i) == 'W' || word.at(i) == 'V')
                            {
                                count++;
                            }
                        }
                        else if (subWord.at(i) == 'p' || subWord.at(i) == 'f' || subWord.at(i) == 'b' || subWord.at(i) == 'P' || subWord.at(i) == 'F' || subWord.at(i) == 'B')
                        {
                            if (word.at(i) == 'p' || word.at(i) == 'f' || word.at(i) == 'b' || word.at(i) == 'P' || word.at(i) == 'F' || word.at(i) == 'B')
                            {
                                count++;
                            }
                        }
                        else if (subWord.at(i) == 'j' || subWord.at(i) == 'g' || subWord.at(i) == 'J' || subWord.at(i) == 'G')
                        {
                            if (word.at(i) == 'j' || word.at(i) == 'g' || word.at(i) == 'J' || word.at(i) == 'G')
                            {
                                count++;
                            }
                        }
                        else if (subWord.at(i) == 'q' || subWord.at(i) == 'k' || subWord.at(i) == 'c' || subWord.at(i) == 'Q' || subWord.at(i) == 'K' || subWord.at(i) == 'C')
                        {
                            if (word.at(i) == 'q' || word.at(i) == 'k' || word.at(i) == 'c' || word.at(i) == 'Q' || word.at(i) == 'K' || word.at(i) == 'C')
                            {
                                count++;
                            }
                        }
                        else if (subWord.at(i) == 'z' || subWord.at(i) == 's' || subWord.at(i) == 'Z' || subWord.at(i) == 'S')
                        {
                            if (word.at(i) == 'z' || word.at(i) == 's' || word.at(i) == 'Z' || word.at(i) == 'S')
                            {
                                count++;
                            }
                        }
                        else if (subWord.at(i) == 't' || subWord.at(i) == 'd' || subWord.at(i) == 'T' || subWord.at(i) == 'D')
                        {
                            if (word.at(i) == 't' || word.at(i) == 'd' || word.at(i) == 'T' || word.at(i) == 'D')
                            {
                                count++;
                            }
                        }
                        else if (subWord.at(i) == 'u' || subWord.at(i) == 'o' || subWord.at(i) == 'U' || subWord.at(i) == 'O')
                        {
                            if (word.at(i) == 'u' || word.at(i) == 'o' || word.at(i) == 'U' || word.at(i) == 'O')
                            {
                                count++;
                            }
                        }
                        else if (subWord.at(i) == 'y' || subWord.at(i) == 'i' || subWord.at(i) == 'Y' || subWord.at(i) == 'I')
                        {
                            if (word.at(i) == 'y' || word.at(i) == 'i' || word.at(i) == 'Y' || word.at(i) == 'I')
                            {
                                count++;
                            }
                        }
                    }
                    if (count == subWord.size())
                    {
                        finalString.assign(subWord); 
                        return finalString;
                    }
                }
                subWord = "";
            }
            else
            {
                subWord = subWord + x;
            }
        }
        if (finalString == "")
        {
            throw out_of_range{"Did not find the word " + word + " in the text"};
        }
        return finalString;
    }
}










