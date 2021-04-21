#include "VecNf.h"
void VecNf::operator=(VecNf v){
    size = v.size;
    delete[] ptr;
    ptr = new float[size];
    for(int i = 0;i<v.size;i++){
            ptr[i] = v.ptr[i];
    }
    
    cout<< "ASSIGNMENT!!!"<< endl;
}
float& VecNf::operator[](int i){
    return ptr[i];
}