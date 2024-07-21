
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> numbers = {1, 2, 3, 4, 5};
    int firstNumber = numbers[0]; // Access the first element


    for (int i = 0; i < 6; i++)
    {
        cout << numbers[i] << " ";
    }

    return 0;
}
