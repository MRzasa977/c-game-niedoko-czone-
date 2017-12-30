#ifndef TOWER_H
#define TOWER_H
#include <QGraphicsPixmapItem>
#include <QGraphicsPolygonItem>
#include <QGraphicsItem>
class Tower: public QGraphicsPathItem
{
public:
    Tower(QGraphicsItem * parent = 0);
private:
    QGraphicsPolygonItem * attack_area;

};

#endif // TOWER_H
