
#include <iostream>
using namespace std;

int main()
{
    int numbers[5];
    int length = sizeof(numbers) / sizeof(numbers[0]); // Length is 5
    cout << "Length of the array is: " << length << endl;

    return 0;
}
