#pragma once

class Graphic
{
protected:
    int popularidad;
    
public:
    virtual void printMe() = 0;
    
    int getPopularity()
    {
        return popularidad;
    }
};