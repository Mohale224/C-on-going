#include <iostream>

using namespace std;

int main()
{
    char w;
    cout <<"Choose a character between 'Y' or 'y' and 'N'or 'n' "<<endl;
    cin >>w;
    if(w=='Y' || w=='y'){
        cout << "Yes"<<endl;
        cin >> w<<endl;

    switch(w){
            case'Y':
            cout << "Yes"<<endl;
            break;
            case 'N':
            cout << "No"<<endl;
            break;
            default:
            cout << "The input you have entered does not match our data base"<<endl;
           return 0;

        }
    }
}
