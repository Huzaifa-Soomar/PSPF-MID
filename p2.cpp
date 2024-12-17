#include<iostream>
using namespace std;
int main()
{
    int set_comb = 1234;
    int comb;

    for (int i = 1; i <=3; i++)
    {
        cout <<"Enter the number of combination (1111,2222,3333,....) : ";
        cin >> comb;
    }
    if (set_comb != comb)
    {
        cout <<"Safe Locked :( ";
    }else{
        cout <<"Safe unlocked :) ";
    }
    
    return 0;
}