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
    Suite(float =0, float = 0);
    ~Suite();
    /*  Role    : Afficher un terme de la suite
    Entrees : 1 entier
    Sortie  : vide
     */
    void afficher_terme(unsigned int);
    float get_u0() const;
    float get_un() const;
    void set_u0(float);
    void set_un(float);


};


#endif //CLASS_SUITE_SUITE_H
