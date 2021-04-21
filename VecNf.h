#include <iostream>
#include <vector>

using namespace std;
class VecNf{
    private:
    float *ptr;
    int size;

    public:
    VecNf(float a[],int b){
        ptr = new float[b];
        for(int i = 0;i<b;i++){
            ptr[i] = a[i];
        }
        size = b;
    }
    VecNf(){
        ptr = nullptr;
        size = 0;
    }
    VecNf(const VecNf& v){
        ptr = new float[v.size];
        for(int i = 0;i<v.size;i++){
            ptr[i] = v.ptr[i];
        }
        size = v.size;
    }
    VecNf operator+(VecNf v){
        if(size != v.size){
            cout<< "dimensions inconsistent";
            VecNf N;
            return N;
        }
        float *pt = new float[size];
        VecNf A(pt,size);
        for(int i = 0;i<v.size;i++){
            A[i] = ptr[i] + v[i];
        }
        return A;
    }
    VecNf operator-(VecNf v){
        if(size != v.size){
            cout<< "dimensions inconsistent";
            VecNf N;
            return N;
        }
        float *pt = new float[size];
        VecNf A(pt,size);
        for(int i = 0;i<v.size;i++){
            A[i] = ptr[i] - v[i];
        }
        return A;
    }
    float operator*(VecNf v){
        if(size != v.size){
            cout<< "dimensions inconsistent" << endl;
            return 0.0;
        }
        float sum = 0;
        for(int i = 0;i<v.size;i++){
            sum += ptr[i] * v[i];
        }
        return sum;
    }
    VecNf operator*(float f){
        float *pt = new float[size];
        VecNf A(pt,size);
        for(int i = 0;i<size;i++){
            A[i] = ptr[i] * f;
        }
        return A;
    }
    void operator=(VecNf v);//
    float& operator[](int i);//
    int Size(){return size;}
};