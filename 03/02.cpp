#include<iostream>

float bmi(float mass_kg, float height_m);
float convert_to_m(int height_feet, int height_inch);
float convert_to_kg(int mass_lb);
int main()
{
    using namespace std;
    cout << "Enter your mass in funts";
    int mass_lb;
    cin >> mass_lb;

    cout << "Enter your height \n feets:";
    int feets;
    cin >> feets;
    cout << "inches:";
    int inches;
    cin >> inches;

    cout << "Your BMI is: " << bmi(convert_to_kg(mass_lb), convert_to_m(feets, inches)) << endl;

    return 0;
}
float convert_to_kg(int mass_lb)
{
    const float LB_IN_KG = 2.2;

    return mass_lb/LB_IN_KG;
}
float convert_to_m(int height_feet, int height_inch)
{
    const float M_IN_INCH = 0.0254;
    const int INCH_IN_FEET = 12;

    return (height_feet*INCH_IN_FEET + height_inch)*M_IN_INCH;
}
float bmi(float mass_kg, float height_m)
{
 return mass_kg/(height_m*height_m);
}