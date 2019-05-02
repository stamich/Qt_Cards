//
// Created by michal on 02.05.19.
//

#ifndef QTONE_CARD_H
#define QTONE_CARD_H

#ifndef CARD_H
#define CARD_H

#include "cards_export.h"
#include <QString>
#include <QLabel>

class CARDS_EXPORT Card : public QLabel {
Q_OBJECT
public:
Card(QString name, QWidget* parent=0);
int value();
bool isAce() const;
private:
QPixmap m_pixmap;

};

#endif //  #ifndef CARD_H

#endif //QTONE_CARD_H
