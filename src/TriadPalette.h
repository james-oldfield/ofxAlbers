/**
 * @class TriadPalette
 * @brief Represents a Triadic colour scheme.
 * @author James Oldfield.
 */

#ifndef ____TriadPalette__
#define ____TriadPalette__

#include "ofMain.h"
#include "ColourPalette.h"

class TriadPalette: public ColourPalette {
  private:
  public:

    /**
     * @brief Main method for creating Triad colour schemes from a seed colour.
     * @param _seedColour The ofColor seed/base colour with which to construct the palette from.
     * @return A shared_ptr<vector<ofColor>> (typedef'd - SharedPtrColVec) to the vector of of colours.
     */
    SharedPtrColVec createPalette(const ofColor & _seedColour);

    /**
     * @brief Construct an Triad Palette object and set relevant vars.
     */
    TriadPalette();
    ~TriadPalette();

    TriadPalette(const TriadPalette & old);
};

#endif /* defined(____TriadPalette__) */
