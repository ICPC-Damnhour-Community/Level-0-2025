
#ifndef MYPAIR_H
#define MYPAIR_H
template <typename T1,typename T2>
struct mypair {
    T1 first;
    T2 second;

    void push(T1 first, T2 second) {
        this -> first = first;
        this -> second = second;
    }
    void swap() {
        int tmp = first;
        first = second;
        second = tmp;
    }
};
#endif
