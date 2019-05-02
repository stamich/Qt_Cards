//
// Created by michal on 02.05.19.
//

#ifndef PROJECT_NAME_CARD_PICS_H
#define PROJECT_NAME_CARD_PICS_H

#ifndef CARDPICS_H
#define CARDPICS_H

#include <QMap>
#include <QString>
#include <QPixmap>
#include <QLabel>
#include <QObject>
#include "cards_export.h"

class CARDS_EXPORT CardPics : public QObject {
public:
    explicit CardPics(QObject* parent=0);
    ~CardPics() ;
    static CardPics* instance();

    QImage get(QString card) const;
    static const QString values;
    static const QString suits;
protected:
    static QString fileName(QString card);
private:
    QMap<QString, QImage> m_images;
};

#endif        //  #ifndef CARDPICS_H

#endif //PROJECT_NAME_CARD_PICS_H
