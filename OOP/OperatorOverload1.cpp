#include<iostream>
using namespace std;

class Coin
{
    int coins;
    
    public:
    Coin(int c)
    {
        coins=c;
    }

    Coin operator+(int value);
    int getcoins()
    {
        return coins;
    }

};

Coin Coin:: operator+(int value)
{
    return (coins+value);
}
int main()
{
    Coin coin(60);
    cout<<coin.getcoins();
    Coin coin1=coin+3;
    cout<<coin1.getcoins();
    return 0;
}