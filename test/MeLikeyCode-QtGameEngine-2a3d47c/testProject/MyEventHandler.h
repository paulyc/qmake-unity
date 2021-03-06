#ifndef MYEVENTHANDLER_H
#define MYEVENTHANDLER_H

#include <QObject>
#include <QPoint>

namespace qge{
    class Game;
}

class EventHandler : public QObject
{
    Q_OBJECT
public:
    EventHandler(qge::Game* forGame);
public slots:
    void onMousePressed(QPoint pos, Qt::MouseButton button);
private:
    qge::Game* game_;
};
#endif
