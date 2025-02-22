#ifndef MYARRAY_H
#define MYARRAY_H
template<typename T,int sz>
class myarray {
    int *a;

public:
    myarray() {
        a = new T[sz];
    }

    ~myarray() {
        delete[] a;
    }



    int at(int idx) {
        return a[idx];
    }
    bool empty() {
        return sz;
    }

    T* data() {
        return a;
    }
    void fill(int tmp) {
        for (int i = 0; i < sz; i++) {
            a[i] = tmp;
        }
    }

    int &operator[](int idx) {
        return a[idx];
    }

};

#endif
