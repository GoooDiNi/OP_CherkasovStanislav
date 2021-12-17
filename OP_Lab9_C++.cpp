#include <iostream>
#include <string>

using namespace std;


 void check_input(int n)
    {
        if (cin.fail() or n <= 0)
        {
            cout << "Bad Value!\n";
            cin.clear();
            cin.ignore();
        }
    }


void cout_words_shorter_than_n(string sentence, int n)
{
    int last_space = -1;
    for(int i = 0; i < sentence.length(); i++)
    {
        if(sentence[i] == ' ')
        {
            int word_length = i - last_space - 1;
            if(word_length <= n)
            {
                for(int j = 0; j < word_length; j++)
                {
                    cout << sentence[i - word_length + j];
                }
                cout << ' ';
            }
            last_space = i;
        }
    }
}


int main()
{
    int k = 0;
    string line;
    
    while(k <= 0)
    {
        cout << "\nDefine how long a word is allowed to be: ";
        cin >> k;
        check_input(k);
    }
    
    cin.ignore(); 
    cout << "Write some words: "; 
    getline(cin, line);
    line += ' ';  
    
    cout << "\nEliminating words that are too long...";
    cout << "\nThose words have survived: ";
    cout_words_shorter_than_n(line, k);
}
