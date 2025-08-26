#include <iostream>
#include <string>

using namespace std;

class Car 
{
private:
    string brand;
    int currentSpeed;
    int maxSpeed;
    bool engineOn;

public:
    // Constructor
    Car(string carBrand, int max) 
    {
        brand = carBrand;
        maxSpeed = max;
        currentSpeed = 0;
        engineOn = false;
    }
    
    // Start the engine
    void startEngine() 
    {
        engineOn = true;
        cout << brand << " engine started!" << endl;
    }
    
    // Stop the engine
    void stopEngine() 
    {
        engineOn = false;
        currentSpeed = 0;
        cout << brand << " engine stopped!" << endl;
    }
    
    // Accelerate the car
    void accelerate(int increment = 10) {
        if (!engineOn) 
        {
            cout << "Cannot accelerate - engine is off!" << endl;
            return;
        }
        
        if (currentSpeed + increment <= maxSpeed) 
        {
            currentSpeed += increment;
            cout << "Accelerating... Current speed: " << currentSpeed << " km/h" << endl;
        }
        
        else
        {
            currentSpeed = maxSpeed;
            cout << "Maximum speed reached: " << maxSpeed << " km/h" << endl;
        }
    }
    
    // Brake the car
    void brake(int decrement = 15) 
    {
        if (currentSpeed - decrement >= 0) 
            currentSpeed -= decrement;
        else 
            currentSpeed = 0;
            
        cout << "Braking... Current speed: " << currentSpeed << " km/h" << endl;
    }
    
    // Get current speed
    int getCurrentSpeed() const 
    {
        return currentSpeed;
    }
    
    // Get maximum speed
    int getMaxSpeed() const 
    {
        return maxSpeed;
    }
    
    // Get car info
    void displayInfo() const 
    {
        cout << "\n=== Car Information ===" << endl;
        cout << "Brand: " << brand << endl;
        cout << "Engine: " << (engineOn ? "ON" : "OFF") << endl;
        cout << "Current Speed: " << currentSpeed << " km/h" << endl;
        cout << "Max Speed: " << maxSpeed << " km/h" << endl;
        cout << "======================" << endl;
    }
};

int main() 
{
    // Create car objects
    Car myCar("Toyota", 180);
    Car sportsCar("Ferrari", 320);
    
    cout << "=== Testing Toyota ===" << endl;
    myCar.displayInfo();
    
    myCar.startEngine();
    myCar.accelerate(30);
    myCar.accelerate(40);
    myCar.accelerate(50);  
    myCar.accelerate(100); 
    
    myCar.brake(20);
    myCar.brake(50);
    myCar.stopEngine();
    
    cout << "\n=== Testing Ferrari ===" << endl;
    sportsCar.displayInfo();
    
    sportsCar.startEngine();
    sportsCar.accelerate(80);
    sportsCar.accelerate(100);
    
    sportsCar.brake(20);
    sportsCar.brake(50);
    sportsCar.stopEngine();
    return 0;
}
