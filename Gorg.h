#ifndef Gorg_h
#define Gorg_h

#include "Competitor.h"

class Gorg : public Competitor
{
public:
    Gorg();
    virtual void GetsAttacked() override;

    
private:
    int max_shield;
};

#endif /* Gorg_h */
