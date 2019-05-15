#ifndef GLADIATOR_H
#define GLADIATOR_H

class Gladiator
{
public:
    Gladiator(int, int, int, int, int, int);

    int getId() const;
    void setId(int value);

    int getAge() const;
    void setAge(int value);

    int getNextGenSurvivalProb() const;
    void setNextGenSurvivalProb(int value);

    int getExpectedGenNum() const;
    void setExpectedGenNum(int value);

    int getEI() const;
    void setEI(int value);

    int getPhyCondition() const;
    void setPhyCondition(int value);

    int getSupStrength() const;
    void setSupStrength(int value);

    int getLowSrength() const;
    void setLowSrength(int value);

    int getResistence() const;
    void setResistence(int value);

private:
    int id;
    int age;
    int nextGenSurvivalProb;
    int expectedGenNum;
    int EI;
    int phyCondition;
    int supStrength;
    int lowSrength;
    int resistence;


    int calcRes();

    int calcProb();

    int calcExpG();
};

#endif // GLADIATOR_H
