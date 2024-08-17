#include <iostream>

using namespace std;

int main()
{
    int answer = 0;

    cout << "Enter your number 1, 2, 3, 4 or 5:" << endl;
    cin >> answer;

    switch(answer){
     case 1:
         cout << "You entered number" << answer << " !\n ";
         break;
     case 2:
        cout << "You entered number "<< answer <<" !\n" ;
        break;
     case 3:
        cout << "You entered number "<< answer << " !\n ";
        break;
     case 4:
        cout << "You entered number "<< answer << " !\n ";
        break;
    case 5:
        cout << "You entered number "<< answer << " !\n ";
        break;
     default:
        cout << "Wrong answer intered \n";
         }
    return 0;
}
