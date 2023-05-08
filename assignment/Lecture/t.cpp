#include <iostream>

using namespace std;

int main()
{
    cout << "\033[31mThis text is red\033[0m" << endl; // Red
    cout << "\033[32mThis text is green\033[0m" << endl; // Green
    cout << "\033[33mThis text is yellow\033[0m" << endl; // Yellow
    cout << "\033[34mThis text is blue\033[0m" << endl; // Blue
    cout << "\033[35mThis text is magenta\033[0m" << endl; // Magenta
    cout << "\033[36mThis text is cyan\033[0m" << endl; // Cyan


    int width = 20;
    int height = 10;
    int color = 42; // Green background color

    // Set the background color
    cout << "\033[48;5;" << color << "m";

    // Print a block of space characters
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            cout << " ";
        }
        cout << endl;
    }

    // Reset the background color to default
    cout << "\033[0m";

    return 0;
}