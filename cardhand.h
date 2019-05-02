//
// Created by michal on 02.05.19.
//

#ifndef QT_CARDS_CARDHAND_H
#define QT_CARDS_CARDHAND_H

#ifndef CARDHAND_H
#define CARDHAND_H

#include <QString>
#include <QList>
#include <card.h>

class CardHand : public QList <Card>
{
public:
    int getValue();
    QString toString();
};

#endif // CARDHAND_H
#endif //QT_CARDS_CARDHAND_H
