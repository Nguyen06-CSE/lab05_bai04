#include<iostream>
#include<math.h>
#include<conio.h>


using namespace std;

#include"printMenu.h"
#include"menu.h"


int main() {
    DaySo a;
    do {
        system("cls");
        print();
        int choise;
        cout << "nguoi dung hay chon chuc nang(0-8): ";
        cin >> choise;
        if (choise == 0) {
            break;
        }

        choiseMenu(a, choise);
        _getch();


    } while (true);
    return 0;
}