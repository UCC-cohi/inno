#include <iostream>
using namespace std;


void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}


int main(){
    int a = 10;
    int *p = &a;
    cout << "a = " << a << endl;
    cout << "p = " << p << endl;
    cout << "*p = " << *p << endl;
    cout << "&a = " << &a << endl;
    cout << "&p = " << &p << endl;
    cout << "*&a = " << *&a << endl;
    cout << "*&p = " << *&p << endl;
    cout << "sizeof(a) = " << sizeof(a) << endl;
    cout << "sizeof(p) = " << sizeof(p) << endl;
    cout << "sizeof(*p) = " << sizeof(*p) << endl;
    cout << "sizeof(&a) = " << sizeof(&a) << endl;
    cout << "sizeof(&p) = " << sizeof(&p) << endl;

    p = new int;
    *p = 20;
    cout << "a = " << a << endl;
    cout << "p = " << p << endl;
    cout << "*p = " << *p << endl;
    cout << "&a = " << &a << endl;
    cout << "&p = " << &p << endl;
    cout << "sizeof(a) = " << sizeof(a) << endl;
    cout << "sizeof(p) = " << sizeof(p) << endl;
    cout << "sizeof(*p) = " << sizeof(*p) << endl;
    cout << "sizeof(&a) = " << sizeof(&a) << endl;
    cout << "sizeof(&p) = " << sizeof(&p) << endl;

    int b = 30;

    swap(&a, &b);
    cout << a << " " << b << endl;

    int c[4] = {1, 2, 3, 4};
    int *q = c;
    cout << "c = " << c << endl;
    cout << "q = " << q << endl;
    cout << "*q = " << *q << endl;
    cout << "&c = " << &c << endl;
    cout << "&q = " << &q << endl;
    cout << *q << *(q+1) << *(q+2) << *(q+3) << endl;

    return 0;
}