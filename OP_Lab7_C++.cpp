    #include <iostream>
    #include <string>
    #include <random>

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
        int n = correct_input("Define the number of values in array: ");
        string* nums = new string[n];
        for (int i = 0; i < n; i++)
        {
            nums[i] = to_string(100 - static_cast <float> (rand()) / (static_cast <float> (RAND_MAX / 199)));
            cout << '\n' << i + 1 << ") " << nums[i];
            if (nums[i][0] == '-')
            {
                bool adding = false;
                int ans = 0;
                for (int ii = 0; ii < nums[i].size(); ii++)
                {
                    if (adding)
                    {
                        ans += nums[i][ii] - '0';
                    }
                    if (nums[i][ii] == '.')
                    {
                        adding = true;
                    }
                }
                cout << " --> " << ans;
                nums[i] = to_string(ans);
            }
        }
        cout << '\n';
    }