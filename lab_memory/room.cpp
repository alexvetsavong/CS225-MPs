/**
 * @file room.cpp
 * Implementation of the Room class.
 */

#include <iostream>
#include "room.h"

Room::Room()
    : capacity(0), count(0), max_letters(26), letters(NULL), letterCount(0)
{
}

Room::Room(const std::string& init_name, int init_capacity)
    : name(init_name),
      capacity(init_capacity),
      count(0),
      max_letters(26),
      letterCount(0)
{
    letters = new Letter[max_letters];
}

Room::Room(const Room& other)
{
    copy(other);
    // std::cout << "cctor called\n";
}

Room& Room::operator=(const Room& other)
{
    if (this != &other) {
        clear();
        copy(other);
    }
    // std::cout << "aoptr called\n";
    return *this;
}

Room::~Room()
{
    clear();
    // std::cout << "dctor called\n";
}

void Room::addLetter(const Letter& L)
{
      // std::cout <<"Adding the letter " << L.letter <<". ";
      // std::cout <<"There are " << L.count <<" of them\n";
      letters[letterCount] = L;
      count += L.count;
      letterCount++;
}

int Room::spaceRemaining()
{
    return capacity - count;
}

void Room::print(std::ostream & stream /* = std::cout */)
{
    stream << name << " (" << count << "/" << capacity << "):";
    for (int L = 0; L < letterCount; L++)
        stream << " " << letters[L].letter;
    stream << std::endl;
}

void Room::clear()
{
    // if (letters != NULL) 
    delete[] letters;
    // std::cout << "dctor called\n";
}

void Room::copy(const Room& other)
{
    name = other.name;
    capacity = other.capacity;
    count = other.count;
    letterCount = other.letterCount;
    letters = new Letter[max_letters];
    // std::cout << "cctor called\n";

}
