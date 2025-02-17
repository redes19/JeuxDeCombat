#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "player.h"


Class *CreateClass(Race race) {
    Class *newClass = malloc(sizeof(Class));
    newClass->race = race;

    switch (race) {
        case IOP:
            newClass->baseHealth = 175;
            newClass->MAX_SKILLS = 5;
            break;
        case SACRIEUR:
            newClass->baseHealth = 150;
            newClass->MAX_SKILLS = 5;
            break;
        case CRA:
            newClass->baseHealth = 100;
            newClass->MAX_SKILLS = 5;
            break;
        case XELOR:
            newClass->baseHealth = 115;
            newClass->MAX_SKILLS = 5;
            break;
        case VESTIGE:
            newClass->baseHealth = 130;
            newClass->MAX_SKILLS = 5;
            break;
        default:
            free(newClass);
            return NULL;
    }

    newClass->skills = malloc(newClass->MAX_SKILLS * sizeof(Skill *));

    // initialiser les skills des classes;

    return newClass;

}

void CreateSkills() {
    
}


void CreatePlayer(Player *player)
{
    int choice;

    printf("To get started, please select your class: \n");

    for (int i = 0; i < CLASS_COUNT - 1; i++) {
        printf("%d - %s\n",i, RaceNames[i]);
    }
    printf("Votre choix (selectionner le numéros de class: ");
    scanf("%d`n", &choice);

    if(choice < 0 || choice >= CLASS_COUNT - 1) {
        printf("Choix invalid\n");
        return;
    }

    player->class = CreateClass(choice);

    char tempName[20];
    printf("Entrer votre speudo: \n");
    scanf("%19s", tempName);

    strcpy(player->name, tempName);

    player->lvl = 1;
    player->health = player->class->baseHealth;
    player->skillCount = 2;

    player->unlockedSkills = malloc(sizeof(Skill *) * player->class->MAX_SKILLS);

    printf("Voici donc votre personnage: \n");
    printf("Votre speudo est - %s -, vous avez choisis la class : - %s -, vous êtes de niveau %d avec %d de PV, enfin vous connaissais %d de compétences", player->name, player->class, player->lvl, player->health, player->skillCount);
    // ne pas oublier de montrer ses skills
}

