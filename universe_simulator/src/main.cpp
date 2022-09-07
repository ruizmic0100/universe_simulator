#include <iostream>
#include <string>

#define Print(x) std::cout << x << std::endl;

/*---------- Universe Simulator------------
 *  Universe Things:
 *      - Planets
 *      - Stars
 *      - Black Holes
 *  
 *  Universe Operations:
 *      - Gravity
 *      - Collisions
 *      - Movement
 *      - Creation
 *      - Destruction
 * 
 *  Universe Collections:
 *      - Galaxies
 *      - Solar Systems
 *      - Voids
 *      - Nebula
 * 
 *  Universe Stats:
 *      - 3D Size (infinity)
 *      - Number of planets, stars, black holes, etc.
 *      - Entropy (energy, chaos, etc.)
 */


class UniverseFactory
{
// Public Class Members
public:

// Public Methods
public:
    UniverseFactory()
        : name_("Unknown"), volumeOfSpace_(0), numPlanets_(0), numStars_(0), numBlackHoles_(0), entropy_(0) { 
        Print("Creating blank universe"); 
    };

    UniverseFactory(const std::string& name, int volume, int planets, int stars, int blackholes, int entropy) 
        : name_(name), volumeOfSpace_(volume), numPlanets_(planets), numStars_(stars), numBlackHoles_(blackholes), entropy_(entropy) {
        Print("Constructing " + name + " Universe...");
    }

    void setVolumeOfSpace(int volume) {
        volumeOfSpace_ = volume;
    }

    void setNumPlanets(int amount) {
        numPlanets_ = amount;
    }

    void setNumStars(int amount) {
        numStars_ = amount;
    }

    void setNumBlackHoles(int amount) {
        numBlackHoles_ = amount;
    }

    void setEntropy(int amount) {
        entropy_ = amount;
    }

    void printStats() {
        Print("");
        Print("");
        Print("----------------------------------------------");
        Print(std::string("Universe ") + name_ + " configurations:");
        Print(std::string("Volume: ") + std::to_string(volumeOfSpace_));
        Print(std::string("Planets: ") + std::to_string(numPlanets_));
        Print(std::string("Stars: ") + std::to_string(numStars_));
        Print(std::string("BlackHoles: ") + std::to_string(numBlackHoles_));
        Print(std::string("Entropy: ") + std::to_string(entropy_));
    }


// Private Class Members
private:
    int volumeOfSpace_;
    int numPlanets_;
    int numStars_;
    int numBlackHoles_;
    int entropy_;
    std::string name_;

// Private Class Methods
private:
};

class GalaxyFactory : public UniverseFactory
{

};

class SolarSystemFactory
{

};

class PlanetFactory
{
public:

public:
    PlanetFactory(const std::string& name, int radius)
        : name_(name), r_(radius) {
        Print(std::string("Planet ") + name + " created!");
    }

private:
    int r_;
    std::string name_;

};

class StarFactory
{

};


#define gridX 20
#define gridY 20
void planetView()
{
    for (int i = 0; i < gridX; i++) {
        Print("\\.");
        for (int j = 0; j < gridY; j++) {
            Print("\\.");
        }
    }
}

std::string universeName;

int main()
{
    // Grab Universe name from user.
    Print("Universe Name: ");
    std::getline(std::cin, universeName);
    
    // Create universe and display created universe stats.
    UniverseFactory* universe = new UniverseFactory(universeName, 10, 1, 0, 0, 100);
    universe->printStats();

    // Create a planet and add it to our universe.
    PlanetFactory* planet = new PlanetFactory(std::string("Earth"), 10000);






    Print("Beginning Simulation");

    delete universe, planet;
}