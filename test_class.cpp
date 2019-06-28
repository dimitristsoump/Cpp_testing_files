#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <cmath>

using namespace std;
/*
class solid_bod {
    int mass=10;
    public:
        double Xm;
        double Ym;
        double Zm;
        
        double Ixx;
        double Iyy;
        double Izz;
        
        solid_bod(double xm,double ym,double zm )
        {
            Xm=xm;
            Ym=ym;
            Zm=zm;
            Ixx=mass*Xm;
            Iyy=mass*Ym;
            Izz=mass*Zm;
        }
        
        
};


class solid_body1 : public solid_bod
{
    public:
        int velxx;
        int velyy;
        int velzz;

};
*/
class Shape
{
    public:
        double length;
        double width;
        
        double Area(){
            return length*width;
        }
};

class Circle : public Shape
{
    public:
        Circle(double l,double w){
            length=l;
            width=w;
        }
        double area;
};
int main() //prepei na yparxei synarthsh pou na legetai main kai na einai type int !!!!
{
    /*
    string number="273.8       3.344  2.78  23.41"; //prepei oi arithmoi na xwrizontai mono apo kena!!
    
    stringstream ss;
    ss << number;
    double input;
    while(ss >> input)
    {
        cout<<input <<endl;
    }
    
    solid_bod Ball1(10,23,30);
    solid_body1 Car;
    int a=Car.velxx=30;
    int b=Ball1.Xm=20;
    cout << b << " "<< a <<endl;
    */
    Shape orthogon;
    orthogon.length=6;
    Circle circl(3,4);
    circl.area=2;

    cout << circl.area <<endl<< circl.width <<endl<< orthogon.length<<endl;
}