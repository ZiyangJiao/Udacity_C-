//
// Created by Ziyang Jiao on 2020-06-25.
//

#include <iostream>
using namespace std;
template <class summable>
summable sum(const summable data[], int size, summable s = 0){
    for(int i = 0; i < size; ++i){
        s += data[i];
    }
    return s;
}
int main(){
    int size = 10;
    int* data = new int[size];
    for(int i = 0; i < size; ++i){
        data[i] = i;
    }
    int s = sum(data, size);
    cout<< "size is " << size << endl
        << "sum is " << s << endl;
    delete[] data;
    return 0;
}