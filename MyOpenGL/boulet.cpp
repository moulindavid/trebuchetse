#include "boulet.h"
#include <QtWidgets>
#include <QtOpenGL>
#include <QDebug>
#include <QGLWidget>
#include <QOpenGLTexture>
#include <GL/glu.h>

// constante gravitationnel
static const double G = 9.81;
// position initiale
static const double X0 = 1;
static const double Y0 = 1;
static const double Z0 = 1;

Boulet::Boulet()
{
    textrock=QImage(":/texture/Image/rock.JPG");
}


//TODO gerer le mouvement de la balle
void Boulet::drawBoulet()
{
    QOpenGLTexture* text1 = new QOpenGLTexture(textrock);
    text1->setMinificationFilter(QOpenGLTexture::LinearMipMapLinear);
    text1->setMagnificationFilter(QOpenGLTexture::Linear);
    text1->bind();
    GLUquadric* sphere = gluNewQuadric();
    glColor3f(127,127,127);
    gluQuadricTexture(sphere,GL_TRUE);
    glPushMatrix();
        gluSphere(sphere, 1, 32,32);
    glPopMatrix();
}
