#include <iostream>
using namespace std;

//auto a(int a, int b = 5)-> int;
// stack heap => pointer(stack)
//instead of malloc use new Type
/*
    int *p new int; // heap allocation, p is located in the stack
    *p = 5; // 5 is in the heap
    delete p; // free 5 from memory !!p is still in the stack!!

    //EX:
    p= new T[300]; array of ints allocated in heap
    cout << p[0]; //read 0 index
    for(int *i = p; i < i+300; i++)
        cin >> *i;
    for (int i = 0; i < 300 ; i++ )
        cin >> i[i];

    delete[] p; //suprimmer tout les 300 ints
*/
int main()
{

    return 0;
}