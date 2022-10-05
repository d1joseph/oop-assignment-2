#ifndef BOOKINGSYSTEM_H_
#define BOOKINGSYSTEM_H_

class BookingSystem 
{
private:
    // init a dynamic array of CustomerRequirement
    static int LENGTH;
    CustomerRequirement* rqPtr = new Requirements[LENGTH];
public:
    // ctor
    BookingSystem()
    {
        LENGTH = 1;
    };
    // dtor
    ~BookingSystem() {};
    
    // Read in requirement
    void ReadIn(string); // Reads in a line from 'requirements.txt'
    // Maps the requirements.txt line data to an object instance, and pushes it to Requirements
    void CreateRequirements();
    /* Evaluates the requirements of each CustomerRequirement object and allocates
     a packaged based variables*/
    void ProcessRequirements();
}
#endif /* BOOKINGSYSTEM_H_ */