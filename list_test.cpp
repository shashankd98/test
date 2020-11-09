#include <iostream>
using namespace std;

class list
{
    public:
    int *arr;
    int capacity;
    int size;

    void create(int input)
    {
        if(input>0) capacity=input;
        else capacity=15;
        arr=new int[capacity];
        size=0;
    }
    void setvalue(int index,int value)
    {
        arr[index]=value;
    }
};

int main()
{
    list a;
    int i;
    a.create(10);
    for(i=0;i<10;i++) a.setvalue(i,i*i);
    for(i=0;i<10;i++) cout<< a.arr[i]<<"\n";
}