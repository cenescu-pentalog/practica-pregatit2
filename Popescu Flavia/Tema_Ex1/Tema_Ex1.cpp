#include <iostream>
#include <string>
using namespace std;

class GeometricFigure
{
protected:
    string tip = "NA";
public:
    GeometricFigure()
    {
    }
    GeometricFigure(string tip)
    {
        this->tip = tip;
    }

    GeometricFigure(const GeometricFigure& gf)
    {
     this->tip = gf.tip;
    }

    virtual double Area() = 0;
    virtual float Perimeter() = 0;
};
class Circle : public GeometricFigure
{
private:
    float raza = 0;
public:
    Circle()
    {
    }
    Circle(float raza)
    {
        this->raza = raza;
    }
    Circle(const Circle& c)
    {
        this->raza = c.raza;
    }
    Circle operator=(const Circle& c)
    {
        this->raza = c.raza;
        return *this;
    }

    double Area()
    {
        return this->raza * this->raza * 3.14159265358979323846;
    }

    float Perimeter()
    {
        return 2 * this->raza * 3.14159265358979323846;
    }

};

class Rectangle : public GeometricFigure
{
private:
    float latime = 0;
    float lungime = 0;
public:
    Rectangle(float latime, float lungime)
    {
        this->latime = latime;
        this->lungime = lungime;
    }
    float Perimeter()
    {
        return 2 * this->latime + this->lungime * 2;
    }
    double Area()
    {
        return this->latime* this->lungime;
    }
    
};

class Square : public GeometricFigure
{
private:
    float latura = 0;
public:
    Square(float latura)
    {
        this->latura = latura;
    }
    float Perimeter()
    {
        return 4 * this->latura;
    }
    double Area()
    {
        return this->latura * this->latura;
    }
};

int main(int argc, char* argv)
{
    for (int i = 0;i < argc; i++)
    {
        cout << argv[i] << std::endl;
    }
    Circle c1(2.5);
    cout << "\nPerimetrul cercului: " << c1.Perimeter();
    cout << "\nAria cercului: "<<c1.Area();
    Rectangle r1(5.2, 8.5);
    cout << "\nPerimetrul dreptunghiului: " << r1.Perimeter();
    cout << "\nAria dreptunghiului: " << r1.Area();
    Square s1(3.2);
    cout << "\nPerimetrul patratului: " << s1.Perimeter();
    cout << "\nAria patratului: " << s1.Area();

}
