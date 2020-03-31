#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <stdio.h>

using namespace std;

int main(){
    int opr;
    int num1, num2;
    char inp;

    for(;;){
        system("clear");
        cout << "=== Calculator ===\n";
        cout << "1. Add\n2. Sub\n3. Mul\n4. Div\n5. Exit\n\n";
        cin >> opr;

        if(opr == 5){
            system("clear");
            cout << "Do you really want to exit? (y/n)";
            cin >> inp;
            if(inp == 'y')
                return 0;
            else
                continue;
        }

        cout << "Enter two number : ";
        cin >> num1 >> num2;
        getchar();
        
        switch(opr){
            case 1:{
                cout << num1 << " + " << num2 << " = " << num1+num2;
                cout << "\nPress any key to continue...";
                getchar();
                break;
            }
            case 2:{
                cout << num1 << " - " << num2 << " = " << num1-num2;
                cout << "\nPress any key to continue...";
                getchar();
                break;
            }
            case 3:{
                cout << num1 << " * " << num2 << " = " << num1*num2;
                cout << "\nPress any key to continue...";
                getchar();
                break;
            }
            case 4:{
                if(num2 == 0){
                        cout << "Can\'t divided by 0!";
                        getchar();
                        continue;
                }
                cout << num1 << " / " << num2 << " = " << num1/num2;
                cout << "\nPress any key to continue...";
                getchar();
                break;
            }
            default :{
                system("clear");
                cout << "\nInvalid option!";
                getchar();
            }
        }
    }
}
