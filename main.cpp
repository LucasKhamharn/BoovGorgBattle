// Author: Lucas Khamharn
// Prog: Boov vs Gorg
// Date: 20240229
// Descr: This program is a game designed to simulate battles between
// the Boov and the Gorg and calculate the percentage of battles won
// by each fighter, providing insight into their relative strengths.


#include <ctime>
#include <iostream>
#include "Boov.h"
#include "Gorg.h"
#include "Competitor.h"


int main()
{
    // Different randomness each time program is executed
    srand(static_cast<unsigned>(time(NULL)));
    
    // Run many simulations
    const int NUMBER_OF_SIMULATIONS = 1000000;
    
    // Count the total number of rounds survived
    int boovWins = 0;
    int gorgWins = 0;
    
    // Repeat many times
    for (int i = 0; i <= NUMBER_OF_SIMULATIONS; ++i)
    {
        // See how long a single Boov can last
        Competitor* oh = new Boov("Oh", 31, 13);
        Competitor* george = new Gorg;
        
        
        // While still healthy enough to do battle...
        while ((oh->IsDefeated() == false) && (george->IsDefeated() == false))
        {
            george->GetsAttacked();
            
            if(george->IsDefeated() == false)
            {
                oh->GetsAttacked();
            }
        }
        
        if(george->IsDefeated() == true)
        {
            ++boovWins;
        }
        else
        {
            ++gorgWins;
        }
        
        // Free memory allocated with new
        delete oh;
        delete george;
    }
    
    double boov_pct = boovWins / static_cast<double>(NUMBER_OF_SIMULATIONS) * 100;
    double gorg_pct = gorgWins / static_cast<double>(NUMBER_OF_SIMULATIONS) * 100;

    std::cout << "Boov: " << boov_pct << std::endl;
    std::cout << "Gorg: " << gorg_pct << std::endl;
    
    // Exit program
    return 0;
}
