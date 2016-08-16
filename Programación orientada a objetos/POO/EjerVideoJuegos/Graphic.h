#pragma once

class Graphic
{
protected:
    int popularity;
    
public:
    virtual void printMe() = 0;
    
    int getPopularity()
    {
        return popularity;
    }
};
