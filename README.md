# What is this?
A univeristy project. I wrote an object oriented implementation of a travel booking algorithm written in C++.

## The Problem
Design and implement a booking system for the 2026 FIFA World Cup. The system will sell packages to customers with
each package, P, composed of three categories: flights, hotels and game tickets. 
### Assumptions
* We can assume that all games are hosted in one city, New York
* The World cup will last 10 days from day 0 to day 9
# Constants and Variables
There are some constants and variables we need to also consider in this problem:
* FLIGHT_PRICE = The price of a full flight ticket from Sydney to New York is $2,000
* DISCOUNT = Depending on the day of departure, a discount to FLIGHT_PRICE can be given. Calculated as (9 - dayN) * 0.05
* When calculating DISCOUNT, it should be calculated such that the to the end of the World cup, the cheaper the fly-in ticket and dearer the fly-out tickets E.g Day 3 FIn, Day 13 FOut = FLIGHT_PRICE * (1 - 3 * 0.05) + FLIGHT_PRICE * (1 - (9-8) * 0.05) = 3,600 ($). Assume flight supply is unlimited
* CUP_DAY[] = Init an array of integer constants from 0 to 9, to represent the day of the cup. We will use this to map:
    * Daily quota of rooms
    * Daily sales
    * Other related data
* HOTEL_ROOMS[] = An array of room types - regular, bronze and gold with rates of $150, $220, $310, per room/night,  respectively
* BRONZE_ROOM_DISCOUNT = Bronze rooms receive a discount of 0.20 if the vacancy > 50%
* GOLD_ROOM_DISCOUNT = Gold rooms receive a discount of 0.40 if vacancy > 50% and 0.20 if vacancy > 20%
* VOUCHERS_SOLD_ROOMTYPE = Hotel rooms are paid up-front and sold in vouchers. 1 voucher = 1 night stay. If a customer requires a stay of 5 nights, then 5 * ROOMTYPE_RATE = total price for hotels
* GAME_TICKETS there are 15 games played across 10 days, see below table for ticket prices and quotas:
[add game tickets table]

# Implementations
???