#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

void title()
{
    //Print out bot's name "PiBot"

    cout << "         _                _                _                 _              _      " << endl;
    cout << "        /\\ \\             /\\ \\             / /\\              /\\ \\           /\\ \\    " << endl;
    cout << "       /  \\ \\            \\ \\ \\           / /  \\            /  \\ \\          \\_\\ \\   " << endl;
    cout << "      / /\\ \\ \\           /\\ \\_\\         / / /\\ \\          / /\\ \\ \\         /\\__ \\  " << endl;
    cout << "     / / /\\ \\_\\         / /\\/_/        / / /\\ \\ \\        / / /\\ \\ \\       / /_ \\ \\ " << endl;
    cout << "    / / /_/ / /        / / /          / / /\\ \\_\\ \\      / / /  \\ \\_\\     / / /\\ \\ \\" << endl;
    cout << "   / / /__\\/ /        / / /          / / /\\ \\ \\___\\    / / /   / / /    / / /  \\/_/" << endl;
    cout << "  / / /_____/        / / /          / / /  \\ \\ \\__/   / / /   / / /    / / /       " << endl;
    cout << " / / /           ___/ / /__        / / /____\\_\\ \\    / / /___/ / /    / / /        " << endl;
    cout << "/ / /           /\\__\\/_/___\\      / / /__________\\  / / /____\\/ /    /_/ /         " << endl;
    cout << "\\/_/            \\/_________/      \\/_____________/  \\/_________/     \\_\\/          " << endl;
}

void menu()
{
    cout << setw(56) << endl << "----------------------------" << endl;
    cout << setw(47) << endl << "      Menu   " << endl;
    cout << setw(56) << endl << "----------------------------" << endl;

    cout << "\n\n" << endl;

    cout << setw(54) << "{                      }" << endl;
    cout << setw(54) << "{       Start(1)       }" << endl;
    cout << setw(54) << "{                      }" << endl;
    cout << setw(54) << "{        Exit(0)       }" << endl;

    bool check = false;

    while (check != true)
    {
        int input;
        cout << "\n" << endl;
        cout << setw(49) << endl << "Enter choice:";
        cin >> input;
        cout << "\n" << endl;

        switch (input)
        {
        case 1:
            cout << "Still in progress" << endl;
            break;
        case 2:
            cout << "Still in progress" << endl;
            break;
        case 0:
            check = true;
        default:
            break;
        }
    }
}

int main()
{
    system("color 3");
    title();
    menu();
}