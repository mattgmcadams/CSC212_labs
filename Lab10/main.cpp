#include "rbtree.h"
#include <iostream>

int main(int argc, char* argv[]) {
    RBTree t;
    int d, s, a, r, e, f, u, n;
    d=4;
    s=19;
    a=1;
    r=18;
    e=5;
    f=6;
    u=21;
    n=14;
    t.insert(d);
    t.insert(s);
    t.insert(a);
    t.insert(r);
    t.insert(e);
    t.insert(f);
    t.insert(u);
    t.insert(n);

    t.preorder();
}