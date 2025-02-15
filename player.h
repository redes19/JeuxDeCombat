#ifndef PLAYER_H
#define PLAYER_H

typedef enum {
    IOP = "iop",
    SACRIEUR = "sacrieur",
    CRA = "cra",
    XELOR = "xelor",
    VESTIGE = "vestige",
} Class;

typedef struc {
    char name[20];
    Class class;
    int lvl;
} Player;


void ChooseClass();

#endif