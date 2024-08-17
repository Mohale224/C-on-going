#include <iostream>
#include <string>

using namespace std;

bool containsVowels(const string& str){
  for (char c : str){
    switch(tolower(c)){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            return true;

    }
  }
  return false;

}

int main (){
string input;
cout << "Enter a string: ";
getline(cin, input);

if (containsVowels(input)) {
    cout << "Yes, the string contains vowels."<<endl;
    }else {
       cout << "No, the string does not contain vowels."<< endl;
    }

    return 0;
}

