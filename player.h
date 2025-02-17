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

typedef struct
{
    char name[20];
    void (*skillFunction)();
} Skill;

typedef struct {
    Race race;
    int baseHealth;
    Skill *skills; // tableau dinamique des compétences
    int MAX_SKILLS; // nombre de compétences total
} Class;

typedef struct {
    char name[20];
    Class *class;
    Skill **unlockedSkills; // tableau dinamique des compétences débloquées
    int lvl;
    int health;
    int skillCount; // nombre de compétences débloquées
} Player;


void CreatePlayer();

// fonction free
void freeClass(Class *class);
void freePlayer(Player *player);

#endif