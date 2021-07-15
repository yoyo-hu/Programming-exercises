#include "SingleDog.h"

void printCount() {
    cout << "Number of SingleDog: " << SingleDog::getCount() << endl;
}


int main() {
    char name[20] = "wangwang";
    int num;
    cin >> num;
    SingleDog dog(0, name), *p;

    for (int i = 1; i <= num; ++i) {
        cin >> name;
        SingleDog a(i, name);

        if (i % 2 != 0) {
            p = new SingleDog(i, name);
            printCount();
            p->print();
            delete p;

        } else {
            SingleDog b(a);
            printCount();
            b.print();
        }
    }

    printCount();
    dog.print();

    return 0;
}

