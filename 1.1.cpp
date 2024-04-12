//1.1 Is Unique: Implement an algorithm to determine if a string has all unique characters.

#include<iostream>
#include<string> 
using namespace std;

bool isUnique(string& str){
    for (int i = 0; i < str.length(); i++) {
        for (int j = i + 1; j < str.length(); j++) {
            if (str[i] == str[j]) {
                return false; //Found Duplicate
            }
        }
    }
    return true;//No Duplicates
}

int main() {
    cout << endl;

    string str = "helo";
    if (isUnique(str)) {
        cout << "All characters in the string are unique." << endl;
    } 
    else {
        cout << "The string has duplicate characters." << endl;
    }

    cout << endl;
    return 0;
}
