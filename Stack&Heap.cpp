#include<iostream>
using namespace std;

int main(){
    int a =10; //in stack
    int *p = new int(); //allocate memory in heap
    *p =10;
    delete(p);
    p= new int[4];
    delete[]p;
    p=NULL;

    return 0;
    

}