//
// YOur comments here...
//

#include "Show.h"

// TODO: Implement the 6 methods (3 getters, 3 setters) for the Show struct.
//
// Remember to use the scope resolution operator (Show::) for each method.
//
// --- Accessors (Getters) ---
// (e.g., std::string Show::getTitle() { ... })
// --- Accessors (Getters) ---
std::string Show::getTitle() {
    return title;
}
std::string Show::getVenue() {
    return venue;
}
int Show::getShowTime() {
    return showTime;
}
//
// --- Mutators (Setters) ---
void Show::setTitle(std::string newTitle){
    title = newTitle;
}
void Show::setVenue(std::string newVenue) {
    venue = newVenue;
}
void Show::setShowTime(int newShowTime) {
    showTime = newShowTime;
}
//