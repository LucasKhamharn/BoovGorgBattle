#ifndef Boov_h
#define Boov_h

#include <string>
#include "Competitor.h"

class Boov : public Competitor
{
public:
    Boov(const std::string& NAME, int HEALTH, int SHIELD);
    
    virtual void GetsAttacked() override;
};

#endif /* Boov_h */
