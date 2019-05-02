//
// Created by michal on 02.05.19.
//

#include <QtGui>
#include "Card.h"
#include "card_pics.h"

Card::Card(QString name, QWidget* parent) : QLabel(parent) {
    setObjectName(name);
    qDebug() << "nowa karta: " << name ;
    m_pixmap = QPixmap::fromImage(CardPics::instance()->get(name));
    setPixmap(m_pixmap);
}

bool Card::isAce() const {
    return objectName().startsWith('a', Qt::CaseInsensitive);
}


