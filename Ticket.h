// Author: Khean Phaengdy
//Date: 11/17/2025
//Assignment:  Lab Activities - Defining Structures & Working With GitHub: Ticket.h

#ifndef FIRSTSTRUCT_TICKET_H
#define FIRSTSTRUCT_TICKET_H

#include <string>

/**
 * @struct Ticket
 * @brief A simple struct to hold data for a single theater ticket.
 *
 * This struct will use all public members for direct access.
 */
struct Ticket {
    // TODO: Add the data members for the Ticket struct here.
    //
    // Based on Part 2a of the lab instructions, you should add:
    std::string section;
    int row;
    int seat;
    double price;
};

#endif //FIRSTSTRUCT_TICKET_H
