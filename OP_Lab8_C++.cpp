#include <iostream>
#include <string>
#include <time.h>

using namespace std;

int correct_input(string text)
{
    int a;
    cout << text;
    while (!(cin >> a))
    {
        cout << "Incorrect Value!\n";
        cout << text;
        cin.clear();
        cin.ignore(32767, '\n');
    }
    return(a);
}

int main()
{
    srand(time(NULL));
    int size = correct_input("\nM is an NxN matrix. Define N: ");
    int** matrix;

    cout << "\nThe initial matrix:\n";
    matrix = new int* [size];
    for (int i = 0; i < size; i++)
    {
        matrix[i] = new int[size];
        for (int j = 0; j < size; j++)
        {
            matrix[i][j] = rand() % 18 - 9;
            if (matrix[i][j] >= 0)
            {
                cout << ' ';
            }
            cout << matrix[i][j];
        }
        cout << '\n';
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (matrix[i][j] == 0)
            {
                for (int k = 0; k < size; k++)
                {
                    matrix[k][j] = matrix[k][k];
                }
            }
        }
    }

    cout << "\nThe modified matrix:\n";
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (matrix[i][j] >= 0)
            {
                cout << ' ';
            cout <<  matrix[i][j];
        }
        cout << '\n';
    }
}