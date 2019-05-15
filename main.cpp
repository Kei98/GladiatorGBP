#include "mainwindow.h"
#include <QApplication>
#include "qge/Game.h"
#include "qge/MapGrid.h"
#include "qge/Map.h"
#include "qge/Entity.h"
#include "qge/SpriteSheet.h"
#include "qge/TopDownSprite.h"




int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    /**
    MainWindow w;
    w.show();
**/
   qge::Map *map = new qge::Map();
   qge::MapGrid *mapGrid = new qge::MapGrid();
   mapGrid->setMapAtPos(map, 0, 0);

   qge::Game *game = new qge::Game(mapGrid, 0, 0);
   game->launch();


   qge::Entity *gladiator = new qge::Entity();

   qge::SpriteSheet gladiatorSp(":/Images/GladiatorSpriteS.png", 0, 0, 44, 44);

   qge::TopDownSprite *sprite = new qge::TopDownSprite();

   for(int i = 0; i < 5; i++){
       sprite->addFrame(gladiatorSp.tileAt(qge::Node(i,0)), "stand");
       sprite->addFrame(gladiatorSp.tileAt(qge::Node(i,1)), "walk");
       sprite->addFrame(gladiatorSp.tileAt(qge::Node(i,2)), "run");
       sprite->addFrame(gladiatorSp.tileAt(qge::Node(i,3)), "jump");
       sprite->addFrame(gladiatorSp.tileAt(qge::Node(i,4)), "attack");
       sprite->addFrame(gladiatorSp.tileAt(qge::Node(i,5)), "hurt");
       sprite->addFrame(gladiatorSp.tileAt(qge::Node(i,6)), "die");


   }

   gladiator->setOrigin(QPointF(64,64));
   gladiator->setSprite(sprite);

   gladiator->setPos(QPoint(300, 300));
   map->addEntity(gladiator);


   gladiator->sprite()->play("stand", -1, 5, 0);




    return a.exec();
}
