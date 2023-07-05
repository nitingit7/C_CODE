#include <iostream>
using namespace std;

int main()
{
    float density_of_fluid, density_of_object, radius_of_object;
    float volume_of_object, weight_of_object, buoyant_force;

    cout << "Enter the density of fluid: ";
    cin >> density_of_fluid;

    cout << "Enter the density of object: ";
    cin >> density_of_object;

    cout << "Enter the radius of object: ";
    cin >> radius_of_object;

    volume_of_object = (4.0 / 3.0) * 3.14 * radius_of_object * radius_of_object * radius_of_object;
    weight_of_object = volume_of_object * density_of_object;
    buoyant_force = volume_of_object * density_of_fluid * 9.8;

    if (buoyant_force >= weight_of_object)
        cout << "The object will float in the fluid." << endl;
    else
        cout << "The object will sink in the fluid." << endl;

    return 0;
}