#include <iostream>
using namespace std;

long long factorial(int x)
{
    if(x==0 || x==1)
        return 1;

    return x * factorial(x-1);
}

double series(int n)
{
    if(n==1)
        return 1;

    if(n%2==0)
        return series(n-1) - (1.0/n);

    return series(n-1) + (1.0/n);
}

int main()
{
    int x;
    cout<<"Enter x for factorial:"<<endl;
    cin>>x;

    cout<<"Factorial: "<<factorial(x)<<endl;

    int n;
    cout<<"Enter x and n for e^x calculation:"<<endl;
    cin>>x>>n;

    auto exp_x = [&](int x,int n)
    {
        double total=0;

        for(int i=0;i<=n;i++)
        {
            double power=1;

            for(int j=0;j<i;j++)
                power*=x;

            total += power / factorial(i);
        }

        return total;
    };

    cout<<"e^x approximation: "<<exp_x(x,n)<<endl;

    cout<<"Enter n for Sn series:"<<endl;
    cin>>n;

    cout<<"Sn result: "<<series(n)<<endl;

    return 0;
}
