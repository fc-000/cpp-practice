#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

// a simple program that reverses words

int main(){

    string str;

    cout<<"Enter word: ";
    getline(cin, str);

    reverse(str.begin(), str.end());
    cout << "reversed: " << str << std::endl;

    return 0;

}