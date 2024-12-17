#include<iostream>
using namespace std;
int main()
{
    int revenue = 0,f,s;
    double h;

    cout <<"Enter Number of floors : ";
    cin >>f;

    cout << "Enter number of slots per floor  : ";
    cin >> s;
    

    
    int total_cost = 0;


    for (int i = 1; i <=f; i++)
    {
        for (int j = 1; j <= s; j++)
        { 
            cout  <<"Enter number of hours for slot " << j << " " << "on floor" << i << " "<< ":" ;
            cin >> h;

            if (h >0)
            {
                if (h <= 3)
                {
                    revenue = h*10;
                }else
                {
                    revenue = (3 * 10) + ((h-3) *8);
                }
                
                
            }else{
                revenue = 0;
            }
            

            
            total_cost +=revenue;
        }
        
    }
    cout <<"Total revenue : " << total_cost;
    return 0;
}