#include <iostream>
#include <fstream>
#include <vector>
// DRIVE AND TEST CLASSES HERE
// #include"../include/BookingSystem.h"

using namespace std;


class Requirement 
{
private:
    int Id;
    int budget;
    string prefHotelType;
    vector<int>prefGames;
public:
    Requirement(int i, int b) 
    {
        Id = i;
        budget = b;
    }
    Requirement()
    {
        Id = 0;
        budget = 0;
    }
    ~Requirement() {}

    void setRequirements(int b, string h)
    {
        budget = b;
        prefHotelType = h;
    }

    void getRequirements(int id)
    {
        cout << "Requirement Id: " << Id << endl;
        cout << "Client budget: " << budget << endl;
        cout << "Preferred hotel type: " << prefHotelType << endl;
        cout << "Preferred games: " << endl;
    }
};


int main() 
{
    // Open file
    ifstream requirements;
    string line;
    
    requirements.open("/home/dhiv/Dev/C++/oop-assignment-2/docs/requirementList.txt", ios::in | ios::out);
    if (requirements.is_open())
    {
        while (getline(requirements, line))
        {
            cout << line << endl;
        }
        requirements.close();
    }
    else cout << "Unable to open file." << endl;
    exit(1);

    return 0;
}