#include <iostream>
using namespace std;

int main(){
int numbers[5] = {1, 2, 3, 4, 5};
numbers[2] = 10;    // Change the third element to 10

    // for(int i = 0; i < 5; i++) 
    //     {
    //         cout << numbers[i] << " ";
    //     }


int oldNumbers[5] = {1, 2, 3, 4, 5};
int newNumbers[6] = {1, 2, 3, 4, 5, 6}; 

 for(int i = 0; i < 5; i++) 
        {
            cout << oldNumbers[i] << " ";
        }
cout<<endl;
         for(int i = 0; i < 8; i++) 
        {
            cout << newNumbers[i] << " ";
        }
    return 0;
    
}
