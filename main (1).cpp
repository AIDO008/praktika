#include <iostream>
using namespace std;
#include <math.h>
float mpd(float x) // functions mpd - "metod polovinnogo deleniya"
{
return (3*cos(2*x+4));
}
int main()
{
setlocale(0, "");
float a,b,e,x; int k=0;
cout<<"1. y=3*cos(2*x+4)\n";
cout<<"Левая граница a=";
cin>>a;
cout<<"Правая граница b=";
cin>>b;
cout<<"Точность e=";
cin>>e;
x=(a+b)/2;
cout<<"Корень уравнения:"<<x;
while(fabs(b-a)>e)
{
if(mpd(a)*mpd(x)<=0) b=x;
else a=x;
x=(a+b)/2;
k++;
cout<<"\nТочность: "<<fabs(b-a)<<" Итерация №="<<k<<" Корень уравнения: "<<x;
}
cout<<"\nКоличество итераций ="<<k<<"\nКорень уравнения: "<<x;
return 0;
}