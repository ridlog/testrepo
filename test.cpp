#include <iostream>
using namespace std;
const int A = 6;
int 
main()
{   
    int a;
    cin >> a;
    if(a<A)
    {
        cout<<"too small!\n";
    }
    else if(a>A)
    {
        cout<<"too big!\n";
    }
    else 
    {
        cout<< "correct!\n ";
    }
    return 0;
}