
#include "VecNf.h"
using namespace std; 

void doNothing(VecNf tar) { return; }
VecNf operator*(float f,VecNf v){
    float *pt = new float[v.Size()];
    VecNf A(pt,v.Size());
    for(int i = 0;i<v.Size();i++){
        A[i] = v[i] * f;
    }
    return A;
}
void operator<<(ostream& out,VecNf v){
    for (int i = 0; i < v.Size(); i++) {
    out << v[i] << " ";
    } out << endl;
}


int main()
{
float a_value[] = { 3.0, 2.0 };
float b_value[] = { 1, 2, 3 };
float c_value[] = { 6, 5, 4 };
VecNf A(a_value, 2);
VecNf B(b_value, 3);
VecNf C(c_value, 3);
VecNf T;
T = A; // Assignment
for (int i = 0; i < T.Size(); i++) {
    cout << T[i] << " ";
} cout << endl;

T = B; // Assignment
for (int i = 0; i < T.Size(); i++) {
    cout << T[i] << " ";
} cout << endl;

T = B + C; // Vector addition
for (int i = 0; i < T.Size(); i++) {
    cout << T[i] << " ";
} cout << endl;

doNothing(T); // call by value

cout << C * B << endl; // Scale

cout << A * C << endl; // Inconsistent
 
system("pause");
return 0;
}

//g++ main.cpp VecNf.cpp -o main && main.exe