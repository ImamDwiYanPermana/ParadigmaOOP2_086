
#include <iostream>
using namespace std;

class baseClass final {
public:
    virtual void perkenalan() {
        cout << " Hallo say FUnction dari base class";
    }
};

class derviedClass : public baseClass {
public:
    void perkenalan() {
        cout << " Hallo saya FUnction dari derived class";
    }
};
int main()
{
    derviedClass a;
    a.perkenalan();

    return 0;
}


