#include<iostream>
using namespace std;
int main()
{
    int set_comb  =1234;
    
    int n;
    
    for (int i = 1; i <=3; i++)
    {
        cout  << "Enter the combination (1111, 2222,3333) : ";
        cin >> n;
    }
     if (n != set_comb)
    {
       cout << "safe Locked" ;
    }else{
        cout  <<" safe unlocked";
    }

    

    return 0;
}