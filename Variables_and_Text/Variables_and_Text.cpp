
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

// initializing variables
string robot_name, robot_status, user_input;
int battery_charge_status;
float temperatue_celsius, temperature_kelvin, velocity;

int main()
{
    // Setting initial values to variables
    robot_name = "Henio";
    robot_status = "Exploring"; // type of status: Exploring/Sampling/Returning/Idle

    // welcome sign
    cout << "Hi! You are connected to program for checking your Mars rover." << endl;
 
    
    do {        
        //Pseudo-random integral value between ​0​ and RAND_MAX restricted to 100 by modulo operation
        battery_charge_status = rand() % 101;

        //https://stackoverflow.com/questions/686353/random-float-number-generation 
        temperatue_celsius = -125 + static_cast <float> (rand()) / (static_cast <float> (RAND_MAX / (200 + 125)));
        velocity = 0 + static_cast <float> (rand()) / (static_cast <float> (RAND_MAX / (20 - 0)));
        
        cout << "\nWhich number of variable to check?\n1. Robot's name\n2. Battery charge status\n3. Temperature and velocity\n4. Robot status\n5. EXIT\n" << endl;
        cout << "I want check: ", cin >> user_input;
        
        if (user_input == "1") {
            cout << "\nRobot's name is: " << robot_name << endl;
            cout << "Change my name to: "; 
            cin >> robot_name;
            cout << "\nName changed to -------- " << robot_name << " --------" << endl;
            cout << endl;
        }
        else if (user_input == "2") {
            cout << "\nBattery charge status is: \n" << battery_charge_status << "%" << endl;
        }
        else if (user_input == "3") {
            cout << "\nThe actual temperature on Mars: " << temperatue_celsius << char(248) << "C." << endl;
            temperature_kelvin = temperatue_celsius + 273.15;
            cout << "The actual temperature on Mars: " << temperature_kelvin << "K." << endl;
            cout << "\nVelocity of the rover is: " << velocity << "km/h" << endl;
        }
        else if (user_input == "4") {
            cout << "\nRobot status: " << robot_status << endl;
            cout << "\nChange my status to [Exploring/Sampling/Returning/Idle]: ", cin >> robot_status;
            cout << "\nStatus changed to -------- " << robot_status << " --------" << endl;
        }
        else if (user_input == "5") {
            cout << "See you next time! Bye!" << endl;
            break;
        }
      
        else {
            cout << "\n Wrong choice! Once again.\n" << endl;
        }

    } while (true);

}
