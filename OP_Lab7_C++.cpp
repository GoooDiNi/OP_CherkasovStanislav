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
        float* nums = new float[n];
        for (int i = 0; i < n; i++)
        {
            nums[i] = 100 - static_cast <float> (rand()) / (static_cast <float> (RAND_MAX / 199));
            cout << '\n' << i + 1 << ") ";
            double rounding_error = 0;
            if(fmod(floor(abs(nums[i]) * (pow(10, (11)))), 10) >= 5)
            {
                rounding_error = pow(0.1, 10);
            }
            printf("%.10f", nums[i] + rounding_error);
            if (nums[i] < 0)
            {
                int ans = 0;
                for (int j = 1; j < 11; j++)
                {
                    ans += fmod(floor(abs(nums[i]) * (pow(10, j))), 10);
                }
                cout << " --> " << ans;
                nums[i] = ans;
            }
        }
        cout << '\n';
    }
