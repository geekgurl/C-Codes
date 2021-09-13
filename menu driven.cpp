#include<iostream>
using namespace std;
int main()
{
    int choice=1;
    while(choice)
    {
        cout << "\t\tMenu is" << endl;
    cout << "\t Composite Number - Enter 1\n\t Enter 2 to continue\n\t Number 3 to exit " << endl;
    cin >> choice;
        switch(choice)
        {
            case 1: // function composite();
            break;
            case 2: choice =1;
            break;
            case 3: choice =0;
            break;
        }
    }
}