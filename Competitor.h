#ifndef Competitor_h
#define Competitor_h

#include <string>

class Competitor
{
public:
    Competitor(const std::string& NAME, int HEALTH, int SHIELD);
    virtual ~Competitor();
    
    std::string GetName() const;
    int GetHealth() const;
    int GetShield() const;
    
    bool IsDefeated() const;
    virtual void GetsAttacked() = 0;
    
protected:
    std::string name;
    int health;
    int shield;
    
};

#endif /* Competitor_h */
