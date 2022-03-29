

#include "MyOpenGLWidget.h"

#include <iostream>


MyOpenGLWidget::MyOpenGLWidget()
{

    // Make sure the context is current when deleting the texture
    // and the buffers.
    makeCurrent();

}

MyOpenGLWidget::~MyOpenGLWidget()
{ 
    makeCurrent();

    doneCurrent();
}

void MyOpenGLWidget::initializeGL()
{
    std::clog << "MyOpenGLWidget::initializeGL()" << std::endl;

    // Set up the rendering context, load shaders and other resources, etc.:
    // QOpenGLFunctions *f = QOpenGLContext::currentContext()->functions();
    // f->glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    // ...

    // initializeOpenGLFunctions();
    // glClearColor(...);

    // m_context->makeCurrent(this);
    // initializeOpenGLFunctions();
}

void MyOpenGLWidget::resizeGL(int w, int h)
{
    std::clog << "MyOpenGLWidget::resizeGL()" << std::endl;

    // Update projection matrix and other size related settings:
    // m_projection.setToIdentity();
    // m_projection.perspective(45.0f, w / float(h), 0.01f, 100.0f);
    // ...
}

void MyOpenGLWidget::paintGL()
{
    std::clog << "MyOpenGLWidget::paintGL()" << std::endl;

    // Clear color and depth buffer
    // glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    // Draw the scene:
    // QOpenGLFunctions *f = QOpenGLContext::currentContext()->functions();
    // f->glClear(GL_COLOR_BUFFER_BIT);
    // ...

    // painter->setPen(Qt::NoPen);
    // painter->setBrush(Qt::black);
    // painter->drawEllipse(QRectF(-radius,-radius,radius*2,radius*2));




    // glBegin(GL_POLYGON);
    //     glColor3f(1, 0, 0); glVertex3f(-0.6, -0.75, 0.5);
    //     glColor3f(0, 1, 0); glVertex3f(0.6, -0.75, 0);
    //     glColor3f(0, 0, 1); glVertex3f(0, 0.75, 0);
    // glEnd();
  // Draw a white grid "floor" for the tetrahedron to sit on.
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    for (GLfloat i = -2.5; i <= 2.5; i += 0.25)
    {
        glVertex3f(i, 0, 2.5); glVertex3f(i, 0, -2.5);
        glVertex3f(2.5, 0, i); glVertex3f(-2.5, 0, i);
    }
    glEnd();


}





void MyOpenGLWidget::mousePressEvent(QMouseEvent *e)
{
}

void MyOpenGLWidget::mouseReleaseEvent(QMouseEvent *e)
{
}

void MyOpenGLWidget::timerEvent(QTimerEvent *e)
{
}

void MyOpenGLWidget::initShaders()
{
}

void MyOpenGLWidget::initTextures()
{
}

