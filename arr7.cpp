#include <iostream>
using namespace std;

int main(){
    int numbers[5] = {1, 2, 3, 4, 5};
    int firstNumber = numbers[0];  // Access the first element
   // cout << firstNumber << endl;

    for(int i = 0; i < 5; i++) 
        {
            cout << numbers[i] << " ";
        }


    return 0;
    
}
