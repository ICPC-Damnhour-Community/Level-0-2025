
#ifndef MYVECTOR_H
#define MYVECTOR_H

#include <iostream>
template<typename T>
class myvector{
    T *a;
    int cap,cur;


public:
    myvector() {
        a = new T[1];
        cap = 1;
        cur = 0;
    }
    myvector(int sz) {
        a = new T[sz];
        cap = sz;
        cur = sz;
    }
    myvector(int sz, int val) {
        a = new T[sz];
        cap = sz;
        cur = sz;
        for (int i = 0; i < sz; i++) a[i] = val;
    }

    ~myvector() {
        delete[] a;
    }

    void push(T item) {
        if (cur == cap) {
            T *tmp = new T[2 * cap];
            for (int i = 0; i < cur; i++) {
                tmp[i] = a[i];
            }
            delete[] a;
            cap *= 2;
            a = tmp;
            a[cur++] = item;
        }
        else {
            a[cur++] = item;
        }
    }

    void pop() {
        if (cur)
            cur--;
    }

    int size() {
        return cur;
    }

    int capacity() {
        return cap;
    }

    void erase(int idx) {
        for (int i = idx; i < cur - 1; i++) {
            a[i] = a[i + 1];

        }
        cur--;
    }

    T &operator[](int x) {
        return a[x];
    }

    T *begin() {
        return a;
    }
    T *end() {
        return a + cur;
    }



    void print() {
        for (int i = 0; i < cur; i++) std::cout << a[i] << " ";
        std::cout << std::endl;
    }

};
#endif

