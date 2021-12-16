  
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


void matrix_init(int** m, int size)
{
    for (int i = 0; i < size; i++)
    {
        m[i] = new int[size];
        for (int j = 0; j < size; j++)
        {
            m[i][j] = rand() % 18 - 9;
        }
    }
}


void modify_matrix(int** m, int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (m[i][j] == 0)
            {
                for (int k = 0; k < size; k++)
                {
                    m[k][j] = m[k][k];
                }
            }
        }
    }
}


void cout_matrix(int** m, int size)
{
    for (int line = 0; line < size; line++)
    {
        for (int numb = 0; numb < size; numb++)
        {
            if (m[line][numb] >= 0)
            {
                cout << ' ';
            }
            cout << m[line][numb];
        }
        cout << '\n';
    }  
}


int main()
{
    srand(time(NULL));
    int size = correct_input("\nM is an NxN matrix. Define N: ");
    int** matrix = new int* [size];
    
    matrix_init(matrix, size);
    
    cout << "\nThe initial matrix:\n";
    cout_matrix(matrix, size);
    
    modify_matrix(matrix, size);

    cout << "\nThe modified matrix:\n";
    cout_matrix(matrix, size);
}
