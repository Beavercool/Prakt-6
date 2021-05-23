#include <iostream>
#include <bitset>
#include <cstdint>
#include <conio.h>

using namespace std;

int main(int argc, char* argv[])
{

    int c = 35;
    int d = 54;

    bitset<4> a{ 0b0101 };
    bitset<4> b{ 0b1011 };

    cout << "OR\n";
    cout << "a: " << a << "\nb: " << b << "\n";
    cout << (a | b) << "\n";

    cout << "NOT\n";
    cout << "a: " << a << "\n";
    cout << "~a: " << (~a) << "\n";

    cout << "XOR\n";
    cout << "a: " << a << "\nb: " << b << "\n";
    cout << (a ^ b) << "\n";

    cout << "AND\n";
    cout << "a: " << a << "\nb: " << b << "\n";
    cout << (a & b) << "\n";

    cout << "SHIFT LEFT\n";
    cout << "a: " << a << "\n";
    cout << "<<a: " << (a << 3) << "\n";

    cout << "SHIFT RIGHT\n";
    cout << "b: " << b << "\n";
    cout << ">>b: " << (b >> 3) << "\n";

    cout << "--------------------------\n" << "ON/OFF BIT \n";

    const unsigned char option = 0x01;
    const unsigned char option2 = 0x02;

    unsigned char myflags = 0;

    myflags |= option;   //ON
    myflags &= ~option2; //OFF

    cout << static_cast<bool>(myflags & option) << '\n';
    cout << static_cast<bool>(myflags & option2) << '\n';

    cout << "--------------------------\n" << "SWAP \n";

    cout << "c: " << c << "\nd: " << d << "\n";

    c = c ^ d;
    d = c ^ d;
    c = c ^ d;

    cout << "c: " << c << "\nd: " << d << "\n";
    getchar();
    return 0;
}