#include <QCoreApplication>
#include <cstdlib>
#include <iostream>
#include <sstream>

using namespace std;

char mapping[29] = {' ',',','.','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
int modPower(int base, int power, int mod);
int main(int argc, char *argv[])
{
    int var,d(35),n(85);
    string in;
    stringstream ss;
    QCoreApplication a(argc, argv);

    cout << "Enter cyphered values with a space for separation. \n\n";
    getline(cin,in);
    ss << in;

    cout <<"\n";
    while(ss >> var)
        cout << mapping[modPower(var,d,n)-2];
    cout << "\n";

    return a.exec();
}

int modPower(int base, int power, int mod)
{
    int mult(base);
    while(--power)
        base = (base*mult)%mod;
    return base;
}
