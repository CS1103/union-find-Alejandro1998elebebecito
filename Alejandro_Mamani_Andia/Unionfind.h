//
// Created by bebecito on 26/05/2019.
//

#ifndef INC_2019_UNIONFIND_H
#define INC_2019_UNIONFIND_H
#include <iostream>
#include <vector>
#include <stack>
#include <deque>
using namespace std;

class Unionfind {
    int  *parent;
    int n;
public:
    Unionfind(int n)
    {
        parent = new int[n];
        this->n = n;
        makeSet();
    }
    ~Unionfind()
    {
        delete []parent;
    }
    void makeSet()
    {
        for (int i = 0; i < n; i++) {
            parent[i] = i;
        }
    }
    int find(int x)
    {
        if ( x==parent[x]) {
            return  x;
        }
        else return find(parent[x]);
    }
    void Union( int x , int y ){
        int xRoot = find( x );
        int yRoot = find( y );
        parent[ xRoot ] = yRoot;
    }
};
#endif //INC_2019_UNIONFIND_H
