#include "gladiator.h"

Gladiator::Gladiator(int id, int age, int ei, int phyC, int supSt, int lowSt)
{
    setId(id);
    setAge(age);
    setEI(ei);
    setPhyCondition(phyC);
    setSupStrength(supSt);
    setLowSrength(lowSt);
    calcRes();
    calcProb();
    calcExpG();

}

int Gladiator::calcRes()
{
    int age1 = 85 - getAge(); // hay que limitar las edades para que sean entre 15 y 84
    int ress = (age1 + 2*getEI() + 3/2*getPhyCondition()+ getSupStrength() + getLowSrength()*6/5);
    setResistence(ress);

}

int Gladiator::calcProb()
{

    //645 es como el valor máximo de la resistencia, hay que comparar con el daño que hace el enemigo
 int prob = getResistence()/645*100;
 setNextGenSurvivalProb(prob);

}

int Gladiator::calcExpG()
{
    //supongo que si la probabilidad es muy alta, lo máximo de rondas que va a poder avanzar serán 3
    int exp = getNextGenSurvivalProb()/99*3;
    setExpectedGenNum(exp);

}



int Gladiator::getId() const
{
    return id;
}

void Gladiator::setId(int value)
{
    id = value;
}
int Gladiator::getAge() const
{
    return age;
}

void Gladiator::setAge(int value)
{
    age = value;
}
int Gladiator::getNextGenSurvivalProb() const
{
    return nextGenSurvivalProb;
}

void Gladiator::setNextGenSurvivalProb(int value)
{
    nextGenSurvivalProb = value;
}
int Gladiator::getExpectedGenNum() const
{
    return expectedGenNum;
}

void Gladiator::setExpectedGenNum(int value)
{
    expectedGenNum = value;
}
int Gladiator::getEI() const
{
    return EI;
}

void Gladiator::setEI(int value)
{
    EI = value;
}
int Gladiator::getPhyCondition() const
{
    return phyCondition;
}

void Gladiator::setPhyCondition(int value)
{
    phyCondition = value;
}
int Gladiator::getSupStrength() const
{
    return supStrength;
}

void Gladiator::setSupStrength(int value)
{
    supStrength = value;
}
int Gladiator::getLowSrength() const
{
    return lowSrength;
}

void Gladiator::setLowSrength(int value)
{
    lowSrength = value;
}
int Gladiator::getResistence() const
{
    return resistence;
}

void Gladiator::setResistence(int value)
{
    resistence = value;
}









