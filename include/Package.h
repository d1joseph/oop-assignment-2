#ifndef PACKAGE_H_
#define PACKAGE_H_

#include <vector>

// COMPOSITION
class Package {
    FlightTicket* Departing; // flight ticket object
    FlightTicket* Returning; // flight ticket object
    std::vector <HotelVoucher*> Accomodation; // vector of hotel voucher objects
    std::vector <GameTicket*> Games; // vector of game ticket objects
public:
    Package(){};
    ~Package();
}

#endif /* GAMETICKET_H_ */