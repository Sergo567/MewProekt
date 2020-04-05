#include <iostream>
#include "Stack.h"

using namespace std;

int main()
{
Stack<int> A(3);
Stack<int> B(6);
A.push(5);
A.push(6);
B.push(7);
B.push(8);
int a = A.top();
int b = B.pop();
cout << a << endl;
cout << b << endl;
int k = A.IsFull();
cout << k << endl;
int k1 = B.IsEmpty();
cout << k1<<endl;
Stack<int> C(B);
cout << C.top()<<endl;
B = A;
cout << B.top()<<endl;
cout << "\n";
system("pause");
}