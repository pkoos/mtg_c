#ifndef CARD_H_
#define CARD_H_

#include <stdio.h>

typedef enum {
    LAND,
    CREATURE,
    ARTIFACT,
    ENCHANTMENT,
    PLANESWALKER,
    BATTLE,
    INSTANT,
    SORCERY
} cardType;

typedef struct card {
    char * name;
    char * manaValue;
    cardType cardType;
} card;

char * cardTypeToString(cardType type);
char * printCard(card card);

#endif
