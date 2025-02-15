#ifndef PLAYER_H
#define PLAYER_H

typedef enum
{
    IOP,
    SACRIEUR,
    CRA,
    XELOR,
    VESTIGE,
    CLASS_COUNT,
} Race;

static const char *RaceNames[] = {
    "Iop",
    "Sacrieur",
    "Cra",
    "Xelor",
    "Vestige",
};

typedef struct {
    Race race;
    int health;
} Class;

typedef struct {
    char name[20];
    Class class;
    int lvl;
    int pointPersonnage;
} Player;


void ChooseClass();

#endif