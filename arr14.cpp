
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> numbers = {1, 2, 3, 4, 5};
  //  numbers.erase(numbers.begin() + 2); // Delete the third element

    // for (int i = 0; i < numbers.size(); i++)
    // {
    //     cout << numbers[i] << " ";
    // }

    // numbers.clear(); // Remove all elements

    // numbers.pop_back();                 // Remove the last element

    // for (int i = 0; i < numbers.size(); i++)
    // {
    //     cout << numbers[i] << " ";
    // }


    // vector<int> numbers = {1, 2, 3, 4, 5};
    int length = numbers.size(); // Length is 5
    cout << "Length: " << length << endl;
    return 0;
}
