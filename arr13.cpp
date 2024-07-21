
#include <iostream>
#include <vector>
using namespace std;

int main()
{


    vector<int> numbers = {1, 2, 3, 4, 5};
    numbers.insert(numbers.begin() + 2, 10); // Insert 10 at position 3

   for (int i = 0; i < numbers.size(); i++)
    {
        cout << numbers[i] << " ";
    }

cout<<endl;
    numbers.push_back(6); // Add 6 to the end

  for (int i = 0; i < numbers.size(); i++)
    {
        cout << numbers[i] << " ";
    }


    return 0;
}
