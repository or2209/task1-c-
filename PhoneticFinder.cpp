#include <iostream>
#include<stdio.h>
#include<string.h>
#include <algorithm>
using namespace std;
string find(string text, string word)
{
//to lower case first
// for_each(s.begin(), s.end(), [](char & c) {
// 		c = ::tolower(c);
// 	});open for me the configuration
int index=0,count=0;
while (index<text.length()){
    string s1="";
    while(text.at(index)!='\b'){
    s1+=text.at(index);
    index++;
    }
    for( int i=0; i<s1.length(); i++){
       if(((text.at(i)=='d'||text.at(i)=='t')&&(s1.at(i)=='d'||s1.at(i)=='t'))||
          ((text.at(i)=='v'||text.at(i)=='w')&&(s1.at(i)=='v'||s1.at(i)=='w'))||
          ((text.at(i)=='b'||text.at(i)=='f'||text.at(i)=='p')&&(s1.at(i)=='b'||s1.at(i)=='f'||s1.at(i)=='p'))||
        ((text.at(i)=='g'||text.at(i)=='j')&&(s1.at(i)=='g'||s1.at(i)=='j'))||
           ((text.at(i)=='c'||text.at(i)=='k'||text.at(i)=='q')&&(s1.at(i)=='c'||s1.at(i)=='k'||s1.at(i)=='q'))||
          ((text.at(i)=='s'||text.at(i)=='z')&&(s1.at(i)=='d'||s1.at(i)=='t'))||
        ((text.at(i)=='0'||text.at(i)=='u')&&(s1.at(i)=='o'||s1.at(i)=='u'))||
            ((text.at(i)=='i'||text.at(i)=='y')&&(s1.at(i)=='i'||s1.at(i)=='y')))
            count++;
    }
    index++;
    if(count==s1.length())
    return s1;
    count=0;
}
}

int main(){
string text="dond vorri be haffy";
 cout << find(text,"dont");
return 0;

}
