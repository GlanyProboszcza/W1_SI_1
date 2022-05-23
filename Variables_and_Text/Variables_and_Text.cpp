
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

// initializing variables
string robot_name, robot_status, user_input;
int battery_charge_status;
float temperatue, velocity;

int main()
{
    // Setting initial values to variables
    robot_name = "Henio";
    robot_status = "Idle"; // Exploring/Sampling/Returning/Idle
 
    
    do {        
        //Pseudo-random integral value between ​0​ and RAND_MAX restricted to 100 by modulo operation
        battery_charge_status = rand() % 101;
        //https://stackoverflow.com/questions/686353/random-float-number-generation 
        temperatue = -125 + static_cast <float> (rand()) / (static_cast <float> (RAND_MAX / (200 + 125)));
        velocity = 0 + static_cast <float> (rand()) / (static_cast <float> (RAND_MAX / (20 - 0)));

        cout << "Which number of variable to check?\n1. Robot's name\n2. Battery charge status\n3. Temperature and velocity\n4. Robot status" << endl;
        cin >> user_input;
        
        if (user_input == "1") {
            cout << "Robot's name is: " << robot_name << endl;
            cout << "Change my name to: " << endl;
            cin >> robot_name;
        }
        else if (user_input == "2") {
            cout << "Battery charge status is: " << battery_charge_status << "%" << endl;
        }
        else if (user_input == "3") {
            cout << "Temperature is: " << temperatue << char(248) <<"C.\nVelocity of the rover is: " << velocity << "km/h" << endl;
        }
        else if (user_input == "4") {
            cout << "Robot status: " << robot_status << endl;
            cout << "Change my status to: " << endl;
            cin >> robot_status;
        }
        else {
            cout << "\n Wrong choice! Once again." << endl;
        }

    } while(true);



}
