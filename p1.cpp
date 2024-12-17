#include<iostream>
using namespace std;
int main()
{
    int f ,s , h , revenue = 0;
    int total_cost = 0;
    

    cout << "Enter number of floor : ";
    cin >> f;

    cout <<"Enter number of slots : ";
    cin >> s;


    for (int i = 1; i <= f; i++)
    {
        for (int j = 1; j <= s; j++)
        {
            cout << "Enter number of hours for floor  " << i << "on slot  " << j << ":" ;
            cin >> h;
            if (h >0)
            {
                if ( h <= 3)
                {
                    revenue = h*10;
                }else{
                    revenue = (3 * 10) +  ((h-3) * 8);
                }
                
                total_cost += revenue;

            }
            
        }
        
    }

    cout << "Total revenue : $" << total_cost;
    

    return 0;
}