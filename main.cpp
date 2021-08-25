#include <iostream>
using namespace std;

int Fibonacci(int num=0)
{
    if(num<1)
    {
        return 0;
    }
    if(num==1)
    {
        return 1;
    }
    return Fibonacci(num-1)+Fibonacci(num-2);
}

int main()
{
    int position=0;
    cout<< "Enter the position-> "<<endl;
    cin >> position;
    
    cout<<Fibonacci(position)<<endl;
}

