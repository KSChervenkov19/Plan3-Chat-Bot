#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

bool check1 = false;

void piBot()
{
    string question;
    getline(cin, question);

    if (question == "Hi" || question == "Hello" || question == "Hey")
    {
        cout << "Helo, It's nice to meet you. My name is PiBot!" << endl;
    }
    else if (question == "How are you?")
    {
        cout << "I'm fine, thank you!" << endl;
    }
    else if (question == "What is your favourite colour?")
    {
        cout << "My favorite color is metallic gray!" << endl;
    }
    else if (question == "What is your favourite TV series?")
    {
        cout << "I like 'Mr. Robot'. The title reminds me of my father!" << endl;
    }
    else if (question == "What do you like to do usually?" || question == "What do you do usually?" || question == "What do you like to do")
    {
        cout << "I like to learn new things." << endl;
    }
    else if (question == "exit" || question == "q" || question == "quit")
    {
        check1 = true;
    }
}

void questions()
{
    cout << setw(45) << "1. How are you?" << endl;
    cout << setw(45 + 18) << "2. What is your favourite colour?" << endl;
    cout << setw(45 + 21) << "3. What is your favourite TV series?" << endl;
    cout << setw(45 + 19) << "4. What do you like to do usually?" << endl;
}

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
    cout << setw(54) << "{     Questions(2)     }" << endl;
    cout << setw(54) << "{                      }" << endl;
    cout << setw(54) << "{        Exit(0)       }" << endl;
    cout << setw(54) << "{                      }" << endl;

    bool check = false;
    int input;

    while (!check)
    {
        cout << "\n" << endl;
        cout << setw(49) << endl << "Enter choice: ";
        cin >> input;
        cout << "\n" << endl;

        if (input == 1)
        {
            while(!check1)
            {
                piBot();
            }
        }
        else if (input == 2)
        {
            questions();
        }
        else if(input == 0)
            check = true;
    }
}

int main()
{
    system("color 3");
    title();
    menu();
}