//
// Created by Eric Moderbacher on 9/17/23.
//
#include <iostream>

// These are how the user interacts with the program...
// The user only tells the program what must be true and the program returns the drawing or false if it is impossible
class userConstraint
{
    //just a function pointer
    bool (*constraint)(std::vector<u_int64_t>);

};


// a point is fully constrained when it has a unique address for every dimension
// these constrains will have many sources and can either be explicit or defined by interactions of other objects such as collisions of 3 planes or 2 non-parallel lines
class point
{
    private:
        std::array<u_int64_t, 3> spatialAddresses; // this is private because the only time this should be set by a user is if they are specifically using a user constraint
        std::array<bool, 3> addressesConstrained; //could use single byte / bitset
        std::array<constraint> constraints; //esm todo change to a virtual base class constraint rather than just user constraints



    public:
        point(std::vector<userConstraint> constraints) //esm todo change to a virtual base class constraint rather than just user constraints
        {

        }



};

// line must be described by two points.



int main()
{
    std::cout << "Hello World!";

    return 0;
}




