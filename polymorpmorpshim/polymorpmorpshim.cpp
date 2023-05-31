
#include <iostream>
using namespace std;

class seseorang {
public:
    virtual void pesan() = 0;
    //virtual vodi pesan(){
        //cout << "pesan dari sesorang" << endl;
    //}
    //virtual void cetak() = 0;
    virtual void cetal() {

    }
};

class joko : public seseorang {
public :
    void pesan() {
        cout << "pesan dari joko" << endl;
    }
    void cetak() {
        cout << "Tulisan Joko" << endl;
    }
};

class lia :public seseorang {
public:
    void pesan() {
        cout << "Pesan dari lia" << endl;
    }
};
int main()
{
    std::cout << "Hello World!\n";
}


