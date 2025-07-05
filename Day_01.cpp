//*Printing Hello world*//
#include <iostream>
using namespace std;

int main() {
    cout << "Hello World!" << endl;
    return 0;
}



//*Addition of two- numbers*//
#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 7;
    int sum = a + b;

    cout << "Sum = " << sum << endl;
    return 0;
}



//*Taking input from user*//
#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter your age: ";
    cin >> age;

    cout << "You are " << age << " years old." << endl;
    return 0;
}



//*Print Numbers from 1 to 10 (Using a For Loop)*//
#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 10; i++) {
        cout << i << " ";
    }
    return 0;
}
