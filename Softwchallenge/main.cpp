#include <iostream>

using namespace std;



int farea(int l1,int l2)

{
    float a;
    a=l1*l2;
    return a;


}

int warea(float l1, float l2, float h)
{
    float wa;
    wa=2* (l1*h) + 2* (l2*h) + farea(l1,l2);
    return wa;

}

int vroom(float l1,float l2,float h)
{
    float fa;
    fa= farea(l1,l2);
    float v=fa*h;
    return v;



}


int main()
{   float l1,l2,h;

    cin>>l1>>l2>>h;

    cout<<"Floor area is "<<farea(l1,l2)<<endl;

    cout<<"Room volume is "<<vroom(l1,l2,h)<<" m3"<<endl;

    cout<<"Required volume of paint is "<<(float)warea(l1,l2,h)/10<" liters";


    return 0;
}
