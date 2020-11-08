#include<iostream>
using namespace std;

class simple
{
    public:
        void simplefunc()
        {
            int a=1;
            int b[10];
            int i;
            for(i=0;i<10;i++)
            {
                cin >> b[i];
            }
            cout<<"ddadadone!\n" <<a<<b[8]<<"\n";
        }
};

void simplefunc()
{
    cout<<"func without class!\n";
}
int main()
{
    cout<<"Hello world!\n";
    simple sc;
    sc.simplefunc();
    simplefunc();
}