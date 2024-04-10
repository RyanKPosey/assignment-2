#include <iostream>
using namespace std;
void test() {
    cout << "Hello";
}


int main() {
    class Test {
        int _num = 0;
        size_t _sz = 4;

        public: 

        Test() {

        }
        const int getNum() {
            return _num;
        }

        const void incrementNum() {
            _num++;
        }

        const int getSize() {
            return _sz;
        }
    };

    Test myNum;

    for (int i = 0; i < myNum.getSize(); i++) {
        myNum.incrementNum();
        cout << myNum.getNum() << endl;
    }
    cout << myNum.getNum() << endl;
}