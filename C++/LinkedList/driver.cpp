#include "singlyLinked.h"

#include <iostream>

using namespace std;

int main() {

    SinglyLinked sl;

    while (true)
    {
        int option;

        cout << "===== MAIN MENU =====" << endl;
        cout << "1. Singly Linked Demo" << endl;

        cout << "Enter your option: "; cin >> option;
        switch (option)
        {
        case 1:
            /* code */
            break;
        
        default:
            cout << "Invalid option. Try again." << endl;
            break;
        }
        
    }

    return 0;
}