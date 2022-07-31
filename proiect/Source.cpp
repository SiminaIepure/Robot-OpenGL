//Robot-Proiect Iepure Carla-Simina

#include <math.h>
#include "glos.h"
#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glaux.h>

void myinit(void);
void CALLBACK display(void);
void CALLBACK myReshape(GLsizei w, GLsizei h);
void CALLBACK rotateLeft(void);
void CALLBACK rotateRight(void);
void CALLBACK rotateArms1(void);
void CALLBACK rotateArms2(void);
void CALLBACK IdleFunction(void);
void desen1();
void desen2();
static int angle = 0; static int x = 0; static int y = 0; static int z = 0;

void CALLBACK rotateLeft()
{
    x = (x + 10) % 360;
}
void CALLBACK rotateRight()
{
    x = (x - 10) % 360;
}
void CALLBACK rotateArms2() {
    y = (y + 5) % 360;
}
void CALLBACK rotateArms1() {
    y = (y - 5) % 360;
}
void myinit(void) {
    GLfloat ambient[] = { 1.0,1.0,1.0,1.0 };
    glEnable(GL_LIGHTING);
    glEnable(GL_LIGHT0);
    glLightfv(GL_LIGHT0, GL_AMBIENT, ambient);
    glDepthFunc(GL_LESS);
    glClearColor(0.41, 0.41, 0.41, 1.0);
    glEnable(GL_DEPTH_TEST);
}
void desen1() {
    //Cap
    glPushMatrix();
    GLfloat culoare1[] = { 1.0,1.0,1.0,1.0 };
    glMaterialfv(GL_FRONT, GL_AMBIENT, culoare1);
    glMaterialf(GL_FRONT, GL_SHININESS, 0);
    glTranslatef(20.0, 250.0, 0.0);
    auxSolidCube(35);
    glPopMatrix();

    //urechi
    glPushMatrix();
    GLfloat culoare37[] = { 0.0,0.0,0.0,1.0 };
    glMaterialfv(GL_FRONT, GL_AMBIENT, culoare37);
    glMaterialf(GL_FRONT, GL_SHININESS, 0);
    glTranslatef(-5.0, 250.0, 0.0);
    glRotatef(90.0, 0.0, 0.0, 1.0);
    auxSolidCylinder(1.5, 8.0);
    glPopMatrix();

    glPushMatrix();
    GLfloat culoare39[] = { 0.0,0.0,0.0,1.0 };
    glMaterialfv(GL_FRONT, GL_AMBIENT, culoare39);
    glMaterialf(GL_FRONT, GL_SHININESS, 0);
    glTranslatef(-9.0, 250.0, 0.0);
    auxSolidSphere(2.8);
    glPopMatrix();

    glPushMatrix();
    GLfloat culoare38[] = { 0.0,0.0,0.0,1.0 };
    glMaterialfv(GL_FRONT, GL_AMBIENT, culoare38);
    glMaterialf(GL_FRONT, GL_SHININESS, 0);
    glTranslatef(38.0, 250.0, 0.0);
    glRotatef(90.0, 0.0, 0.0, 1.0);
    auxSolidCylinder(1.5, 8.0);
    glPopMatrix();

    glPushMatrix();
    GLfloat culoare40[] = { 0.0,0.0,0.0,1.0 };
    glMaterialfv(GL_FRONT, GL_AMBIENT, culoare40);
    glMaterialf(GL_FRONT, GL_SHININESS, 0);
    glTranslatef(48.0, 250.0, 0.0);
    auxSolidSphere(2.8);
    glPopMatrix();

    //ochi
    glPushMatrix();
    GLfloat culoare2[] = { 0.0,0.0,0.0,1.0 };
    glMaterialfv(GL_FRONT, GL_AMBIENT, culoare2);
    glMaterialf(GL_FRONT, GL_SHININESS, 0);
    glTranslatef(14.0, 251.0, 17.0);
    auxSolidSphere(2.8);
    glPopMatrix();

    glPushMatrix();
    GLfloat culoare3[] = { 0.0,1.0,1.0,0.0 };
    glMaterialfv(GL_FRONT, GL_AMBIENT, culoare3);
    glMaterialf(GL_FRONT, GL_SHININESS, 0);
    glTranslatef(14.0, 251.0, 19.0);
    auxSolidSphere(1.1);
    glPopMatrix();

    glPushMatrix();
    GLfloat culoare4[] = { 0.0,0.0,0.0,1.0 };
    glMaterialfv(GL_FRONT, GL_AMBIENT, culoare4);
    glMaterialf(GL_FRONT, GL_SHININESS, 0);
    glTranslatef(26.0, 251.0, 17.0);
    auxSolidSphere(2.8);
    glPopMatrix();

    glPushMatrix();
    GLfloat culoare5[] = { 0.0,1.0,1.0,0.0 };
    glMaterialfv(GL_FRONT, GL_AMBIENT, culoare5);
    glMaterialf(GL_FRONT, GL_SHININESS, 0);
    glTranslatef(26.0, 251.0, 19.0);
    auxSolidSphere(1.1);
    glPopMatrix();

    //sprancene
    glPushMatrix();
    GLfloat culoare6[] = { 0.2,0.14,0.12,1.0 };
    glMaterialfv(GL_FRONT, GL_AMBIENT, culoare6);
    glMaterialf(GL_FRONT, GL_SHININESS, 0);
    glTranslatef(10.0, 256.0, 16.5);
    glRotatef(90.0, 0.0, 0.0, 1.0);
    auxSolidCylinder(1.5, 8.0);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(24.0, 256.0, 16.5);
    glRotatef(90.0, 0.0, 0.0, 1.0);
    auxSolidCylinder(1.5, 8.0);
    glPopMatrix();

    //nas,buze
    glPushMatrix();
    glTranslatef(20.0, 245.0, 16.0);
    auxSolidCube(5);
    glPopMatrix();

    glPushMatrix();
    GLfloat culoare9[] = { 0.0,0.0,0.0,1.0 };
    glMaterialfv(GL_FRONT, GL_AMBIENT, culoare9);
    glMaterialf(GL_FRONT, GL_SHININESS, 0);
    glTranslatef(17.0, 238.0, 20.0);
    glRotatef(90.0, 0.0, 0.0, 1.0);
    auxSolidCylinder(1.5, 8.0);
    glPopMatrix();

    //gat
    glPushMatrix();
    GLfloat culoare13[] = { 0.93,0.7,0.64,1.0 };
    glMaterialfv(GL_FRONT, GL_AMBIENT, culoare13);
    glMaterialf(GL_FRONT, GL_SHININESS, 0);
    glTranslatef(20.0, 240.0, 0.0);
    auxSolidCylinder(5.0, 22.0);
    glPopMatrix();

    //corp
    glPushMatrix();
    GLfloat culoare14[] = { 0.0,0.0,1.0,1.0 };
    glMaterialfv(GL_FRONT, GL_AMBIENT, culoare14);
    glMaterialf(GL_FRONT, GL_SHININESS, 0);
    glTranslatef(20.0, 220.0, 0.0);
    glRotatef(-90.0, 1.0, 0.0, 0.0);
    auxSolidTorus(4.0, 24.0);
    glPopMatrix();

    glPushMatrix();
    GLfloat culoare15[] = { 0.0,1.0,1.0,1.0 };
    glMaterialfv(GL_FRONT, GL_AMBIENT, culoare15);
    glMaterialf(GL_FRONT, GL_SHININESS, 0);
    glTranslatef(20.0, 220.0, 0.0);
    // glRotatef(0.0, 1.0, 0.0, 0.0);
    auxSolidCylinder(25.0, 60.0);
    glPopMatrix();

    glPushMatrix();
    GLfloat culoare18[] = { 0.0,0.0,1.0,1.0 };
    glMaterialfv(GL_FRONT, GL_AMBIENT, culoare18);
    glMaterialf(GL_FRONT, GL_SHININESS, 0);
    glTranslatef(20.0, 162.0, 0.0);
    glRotatef(-90.0, 1.0, 0.0, 0.0);
    auxSolidTorus(4.0, 25.0);
    glPopMatrix();

    //picioare
    glPushMatrix();
    GLfloat culoare19[] = { 1.0,1.0,1.0,1.0 };
    glMaterialfv(GL_FRONT, GL_AMBIENT, culoare19);
    glMaterialf(GL_FRONT, GL_SHININESS, 0);
    glTranslatef(12.0, 160.0, 0.0);
    auxSolidCylinder(4.0, 25.0);
    glPopMatrix();

    glPushMatrix();
    GLfloat culoare20[] = { 0.0,0.0,1.0,1.0 };
    glMaterialfv(GL_FRONT, GL_AMBIENT, culoare20);
    glMaterialf(GL_FRONT, GL_SHININESS, 0);
    glTranslatef(12.0, 130.0, 0.0);
    auxSolidSphere(5.5);
    glPopMatrix();

    glPushMatrix();
    GLfloat culoare21[] = { 1.0,1.0,1.0,1.0 };
    glMaterialfv(GL_FRONT, GL_AMBIENT, culoare21);
    glMaterialf(GL_FRONT, GL_SHININESS, 0);
    glTranslatef(28.0, 160.0, 0.0);
    auxSolidCylinder(4.0, 25.0);
    glPopMatrix();

    glPushMatrix();
    GLfloat culoare22[] = { 0.0,0.0,1.0,1.0 };
    glMaterialfv(GL_FRONT, GL_AMBIENT, culoare22);
    glMaterialf(GL_FRONT, GL_SHININESS, 0);
    glTranslatef(28.0, 130.0, 0.0);
    auxSolidSphere(5.5);
    glPopMatrix();

    glPushMatrix();
    GLfloat culoare23[] = { 1.0,1.0,1.0,1.0 };
    glMaterialfv(GL_FRONT, GL_AMBIENT, culoare23);
    glMaterialf(GL_FRONT, GL_SHININESS, 0);
    glTranslatef(12.0, 130.0, 0.0);
    auxSolidCylinder(4.0, 35.0);
    glPopMatrix();

    glPushMatrix();
    GLfloat culoare24[] = { 0.9,0.74,0.67,1.0 };
    glMaterialfv(GL_FRONT, GL_AMBIENT, culoare24);
    glMaterialf(GL_FRONT, GL_SHININESS, 0);
    glTranslatef(28.0, 130.0, 0.0);
    auxSolidCylinder(4.0, 35.0);
    glPopMatrix();

    //incaltaminte
    glPushMatrix();
    GLfloat culoare25[] = { 0.0,0.0,1.0,1.0 };
    glMaterialfv(GL_FRONT, GL_AMBIENT, culoare25);
    glMaterialf(GL_FRONT, GL_SHININESS, 0);
    glTranslatef(12.0, 95.0, 3.0);
    glRotatef(-90.0, 1.0, 0.0, 0.0);
    auxSolidBox(10.0, 14.0, 7.0);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(28.0, 95.0, 3.0);
    glRotatef(-90.0, 1.0, 0.0, 0.0);
    auxSolidBox(10.0, 14.0, 7.0);
    glPopMatrix();


}
void desen2() {
    //mana dreapta
    glPushMatrix();
    glTranslatef(26.0, 215.0, 0.0);
    auxSolidSphere(7.0);
    glPopMatrix();

    glPushMatrix();
    GLfloat culoare28[] = { 1.0,1.0,1.0,1.0 };
    glMaterialfv(GL_FRONT, GL_AMBIENT, culoare28);
    glMaterialf(GL_FRONT, GL_SHININESS, 0);
    glTranslatef(27.0, 215.0, 0.0);
    glRotatef(-45.0, 1.0, 0.0, 0.0);
    auxSolidCylinder(3.0, 33.0);
    glPopMatrix();

    glPushMatrix();
    GLfloat culoare29[] = { 0.0,0.0,1.0,1.0 };
    glMaterialfv(GL_FRONT, GL_AMBIENT, culoare29);
    glMaterialf(GL_FRONT, GL_SHININESS, 0);
    glTranslatef(27.0, 191.0, 22.0);
    auxSolidSphere(5.5);
    glPopMatrix();

    glPushMatrix();
    GLfloat culoare30[] = { 1.0,1.0,1.0,1.0 };
    glMaterialfv(GL_FRONT, GL_AMBIENT, culoare30);
    glMaterialf(GL_FRONT, GL_SHININESS, 0);
    glTranslatef(28.0, 191.0, 22.0);
    glRotatef(-90.0, 1.0, 1.0, 0.0);
    auxSolidCylinder(3.0, 28.0);
    glPopMatrix();

    glPushMatrix();
    GLfloat culoare31[] = { 0.0,0.0,1.0,1.0 };
    glMaterialfv(GL_FRONT, GL_AMBIENT, culoare31);
    glMaterialf(GL_FRONT, GL_SHININESS, 0);
    glTranslatef(16.0, 180.0, 39.0);
    auxSolidSphere(5.5);
    glPopMatrix();

    //mana stanga

    glPushMatrix();
    glRotatef(angle, 0, 1, 0);

    glPushMatrix();

    glTranslatef(-30.0, 215.0, 0.0);
    auxSolidSphere(7.0);
    glPopMatrix();

    glPushMatrix();
    GLfloat culoare33[] = { 1.0,1.0,1.0,1.0 };
    glMaterialfv(GL_FRONT, GL_AMBIENT, culoare33);
    glMaterialf(GL_FRONT, GL_SHININESS, 0);
    glTranslatef(-29.0, 215.0, 0.0);
    glRotatef(-90.0, 1.0, 1.0, 0.0);
    auxSolidCylinder(3.0, 33.0);
    glPopMatrix();

    glPushMatrix();
    GLfloat culoare34[] = { 0.0,0.0,1.0,1.0 };
    glMaterialfv(GL_FRONT, GL_AMBIENT, culoare34);
    glMaterialf(GL_FRONT, GL_SHININESS, 0);
    glTranslatef(-45.0, 201.0, 20.0);
    auxSolidSphere(5.5);
    glPopMatrix();

    glPushMatrix();
    GLfloat culoare35[] = { 1.0,1.0,1.0,1.0 };
    glMaterialfv(GL_FRONT, GL_AMBIENT, culoare35);
    glMaterialf(GL_FRONT, GL_SHININESS, 0);
    glTranslatef(-44.0, 200.0, 20.0);
    glRotatef(-135.0, 1.0, 0.0, 0.0);
    auxSolidCylinder(3.0, 28.0);
    glPopMatrix();

    glPushMatrix();
    GLfloat culoare36[] = { 0.0,0.0,1.0,1.0 };
    glMaterialfv(GL_FRONT, GL_AMBIENT, culoare36);
    glMaterialf(GL_FRONT, GL_SHININESS, 0);
    glTranslatef(-44.0, 220.0, 39.0);
    auxSolidSphere(5.5);
    glPopMatrix();
    glPopMatrix();
}

void CALLBACK IdleFunction(void)
{
    angle += 1;
    Sleep(100);
    display();
    if (angle > 20)
    {
        while (angle > 0)
        {
            angle--;
            Sleep(100);
            display();
        }

    }

}

void CALLBACK display(void)
{
    GLfloat position[] = { -200,400,0.0,1.0 };
    glLightfv(GL_LIGHT0, GL_POSITION, position);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();

    //glPushMatrix();
    glTranslatef(200.0, 0.0, 0.0);
    glRotatef((GLfloat)x, 0.0, 1.0, 0.0);
    desen1();

    //rotire maini
    glTranslatef(21.0, 0.0, 0.0);
    glRotatef((GLfloat)y, 0.0, 1.0, 0.0);
    desen2();

    //glPopMatrix();
    glFlush();
}


void CALLBACK myReshape(GLsizei w, GLsizei h)
{
    if (!h) return;
    glViewport(0, 0, w, h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    if (w <= h)
        glOrtho(0.0, 320.0, 320.0 * (GLfloat)h / (GLfloat)w,
            0.0 * (GLfloat)h / (GLfloat)w, -900.0, 400.0);
    else
        glOrtho(0.0 * (GLfloat)w / (GLfloat)h,
            320.0 * (GLfloat)w / (GLfloat)h, 0.0, 320.0, -900.0, 400.0);
    glMatrixMode(GL_MODELVIEW);
}

int main(int argc, char** argv)
{
    auxInitDisplayMode(AUX_SINGLE | AUX_RGB);
    auxInitPosition(0, 0, 1000, 500);
    auxInitWindow("ROBOT");
    myinit();
    auxKeyFunc(AUX_LEFT, rotateLeft);
    auxKeyFunc(AUX_RIGHT, rotateRight);
    auxKeyFunc(AUX_UP, rotateArms2);
    auxKeyFunc(AUX_DOWN, rotateArms1);
    auxReshapeFunc(myReshape);
    auxIdleFunc(IdleFunction);
    auxMainLoop(display);
    return(0);
}