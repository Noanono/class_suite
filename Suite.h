//
// Created by noah on 22/09/23.
//

#ifndef CLASS_SUITE_SUITE_H
#define CLASS_SUITE_SUITE_H


class Suite {
private:
    float u0;
    float un;
    unsigned int n;

public:
    Suite(float =0, float = 0, unsigned int = 0);
    ~Suite();
    float get_u0() const;
    float get_un() const;
    unsigned int get_n() const;
    void set_u0(float);
    void set_un(float);
    void set_n(unsigned int);


};


#endif //CLASS_SUITE_SUITE_H
