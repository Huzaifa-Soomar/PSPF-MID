#include<iostream>
using namespace std;
int main()
{
    int n, originalNumber;
    cout  <<"Enter a number : ";
    cin >> n;
    originalNumber = n;
    int sum = 0;

    if (n % 3 == 0 || n % 5 == 0) {
        while (n > 0) {
            sum += n % 10;
            n /= 10;
        }
        if (sum % 2 == 0) {
            if (originalNumber % 10 == 7) {
                cout << "its a magic number :)";
            } else {
                cout << "its not a magic number :( ";
            }
        } else {
            cout << "its not a magic number :( ";
        }
    } else {
        cout << "its not a magic number :( ";
    }

    return 0;
}
