#ifndef TERRAIN_H
#define TERRAIN_H
#include "cube.h"
#include <QOpenGLTexture>
#include <QtOpenGL>
class Terrain: public Cube
{
public:
    Terrain();

    void drawTerrain();

    QImage textherbe;
};

#endif // TERRAIN_H
