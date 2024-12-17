#include<iostream>
using namespace std;
int main()
{
    int n;
    cout <<"Enter number : ";
    cin >> n;

    int on = n;
    int sum =0;




    if (n %3 == 0 || n%5==0)
    {
        while (n > 0)
        {
            sum += n %10;

            n /= 10;
        }

        if (sum % 2 ==0)
        {
            if (on % 10 ==7)
            {
                cout << "its a magic number :)";
            }else{
                cout << "its not a magic number : ( ";
            }
            
        } else{
        cout << "its not a magic number : ( ";
        }
        
        
    }else{
        cout << "its not a magic number : ( ";
    }
    
    return 0;
}