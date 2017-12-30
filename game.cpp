#include "game.h"
#include <QGraphicsScene>
#include "tower.h"
Game::Game()
{
    //create a scene
    scene = new QGraphicsScene(this);

    //set the scene
    setScene(scene);

    //create a tower
    Tower * t = new Tower();

    //add the towet to the scene
    scene->addItem(t);
}
