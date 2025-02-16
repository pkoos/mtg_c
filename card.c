#include "card.h"

char * cardTypeToString(cardType type) {
    switch (type) {
        case LAND:
            return "Land";
        case CREATURE:
            return "Creature";
        case ARTIFACT:
            return "Artifact";
        case ENCHANTMENT:
            return "Enchantment";
        case PLANESWALKER:
            return "Planeswalker";
        case BATTLE:
            return "Battle";
        case INSTANT:
            return "Instant";
        case SORCERY:
            return "Sorcery";
        default:
            return "Invalid card type";
    }
}

char * printCard(card card) {
    printf("name: %s,\ntype: %s,\nmana value: %s\n", card.name, cardTypeToString(card.cardType), card.manaValue);
}
