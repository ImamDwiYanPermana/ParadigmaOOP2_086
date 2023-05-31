
#include <iostream>
using namespace std;

class orang {
public:
    int umur;
        orang(int pUmur):
        umur(pUmur){
            cout << "seorang dibuat dengan umur" << umur << "\n" << endl;
    }
};

class pekerja : public orang {
public :
    pekerja(int pUmur) :
        orang(pUmur)
    {
        cout << "orang pekerja dibuat " << umur << endl;
    }
};

class pelajar : public orang {
public:
    pelajar(int pUmur) :
        orang(pUmur)
    {
        cout << " pelajar di buat dibuat " << umur << endl;
    }
};
int main()
{
    std::cout << "Hello World!\n";
}


