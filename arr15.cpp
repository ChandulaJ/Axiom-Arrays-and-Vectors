
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> numbers(5);
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter number " << i + 1 << ": ";
        cin >> numbers[i];
    }

       for (int i = 0; i < numbers.size(); i++)
    {
        cout << numbers[i] << " ";
    }


    return 0;
}
