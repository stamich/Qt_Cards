//
// Created by michal on 02.05.19.
//

#ifndef QT_CARDS_CARDDECK_H
#define QT_CARDS_CARDDECK_H

#ifndef CARDDECK_H
#define CARDDECK_H

#include "card.h"
#include "cardhand.h"
#include <QList>

class CardDeck : public QList <Card>
{
public:
    CardDeck();
    CardHand deal(int handSize);
    QString toString();
    int getCardsLeft() const;
    void restoreDeck();
};

#endif // CARDDECK_H
#endif //QT_CARDS_CARDDECK_H
