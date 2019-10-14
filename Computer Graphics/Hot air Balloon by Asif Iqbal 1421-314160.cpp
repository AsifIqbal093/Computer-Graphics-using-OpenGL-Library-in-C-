#include<glut.h>
float angle=20.0;
float x=0,y=2,z=-4,w=0.01,s=2.0;
float i=0.5,o=0.5,p=5,q=01.0;
GLfloat ANGLE_STEP=0.6;
const int screenWidth = 800;
const int screenHeight = 600;
GLfloat WHITE[]={1,1,1,1},BLACK[]={0,0,0,1};
GLfloat YELLOW[]={1,1,0,1},RED[]={1,0,0,1},GREN[]={0,1,0,0};
GLfloat PINK[]={1,0,1,1},GREEN[]={0,3.0,0,1},P[]={0.1,0.1,0.1,1};
GLfloat GREY[]={0.2,0.2,0.2,1},BROWN[]={0.37,0.22,0.01};
GLfloat R[]={0,0.1,0,1},V[]={0,0.3,0.4,1},CREAM[]={0.5,0.4,0.8,1.0};
GLfloat B[]={0.5,0.3,0.1,1},ORIGIN[]={1,0,0,1};
void init()
{
	GLfloat lightIntensity[]={1,1,1,1};
	GLfloat light_position[]={1,3,1,0};
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glLightfv(GL_LIGHT0,GL_DIFFUSE,WHITE);
	glLightfv(GL_LIGHT0,GL_SPECULAR, BLACK);
	glEnable(GL_LIGHTING);
	glEnable(GL_LIGHT0);
	glOrtho(-5,5,-4,4,-80,80);
	glClearColor(0.20,0.59,0.82,1);
	glEnable(GL_DEPTH_TEST);	
}
void background()
{
		/*------------Greenry-------------------*/
	glPushMatrix();
	glMaterialfv(GL_FRONT, GL_DIFFUSE, GREEN);				
	glMaterialfv(GL_FRONT, GL_EMISSION, BLACK);
	glTranslated(0,-5,-3);
	glScaled(90,1,38);
	glutSolidCube(1);
	glPopMatrix();

	glPushMatrix();
	glMaterialfv(GL_FRONT, GL_DIFFUSE,GREEN );				
	glMaterialfv(GL_FRONT, GL_EMISSION, BROWN);
	glTranslated(1.1,-14,-18);
	glScaled(2.2,2,0);
	/*--------------mountain6-------------*/
	glPushMatrix();
	glTranslated(-56,-11,-10);
	glScaled(10,8,4);
	glBegin(GL_POLYGON);
    glVertex2f(2.9,1.9);
    glVertex2f(3.4,2.4);
    glVertex2f(3.9,1.9);
	glEnd();
	glPopMatrix();
	/*----------------mountain6-------------------*/
	glPushMatrix();
	glTranslated(-49,-11,-10);
	glScaled(10,8,4);
	glBegin(GL_POLYGON);
    glVertex2f(2.9,1.9);
    glVertex2f(3.4,2.4);
    glVertex2f(3.9,1.9);
	glEnd();
	glPopMatrix();
	/*--------------mountain5-----------------------*/
	glPushMatrix();
	glTranslated(-42,-11,-10);
	glScaled(10,8,4);
	glBegin(GL_POLYGON);
    
    glVertex2f(2.9,1.9);
    glVertex2f(3.4,2.4);
    glVertex2f(3.9,1.9);
	glEnd();
	glPopMatrix();
	/*----------------mountain---------------*/
	glPushMatrix();
	glTranslated(-36,-11,-10);
	glScaled(10,8,4);
	glBegin(GL_POLYGON);
    glColor3f(0.1,0.25,0.1);
    glVertex2f(2.9,1.9);
    glVertex2f(3.4,2.4);
    glVertex2f(3.9,1.9);
	glEnd();
	glPopMatrix();
		/*-----------mountain2------------*/
	glPushMatrix();
	glTranslated(-30,-11,-10);
	glScaled(10,8,4);
	glBegin(GL_POLYGON);
    glColor3f(0.1,0.25,0.1);
    glVertex2f(2.9,1.9);
    glVertex2f(3.4,2.4);
    glVertex2f(3.9,1.9);
	glEnd();
	glPopMatrix();
		/*-----------mountain3---------*/
	glPushMatrix();
	glTranslated(-24,-11,-10);
	glScaled(10,8,4);
	glBegin(GL_POLYGON);
    glColor3f(0.1,0.25,0.1);
    glVertex2f(2.9,1.9);
    glVertex2f(3.4,2.4);
    glVertex2f(3.9,1.9);
	glEnd();
	glPopMatrix();
		/*----------------mountain4-------------*/
	glPushMatrix();
	glTranslated(-16,-11,-10);
	glScaled(10,8,4);
	glBegin(GL_POLYGON);
    glColor3f(0.1,0.25,0.1);
    glVertex2f(2.9,1.9);
    glVertex2f(3.4,2.4);
    glVertex2f(3.9,1.9);
	glEnd();
	glPopMatrix();
	glPopMatrix();
	

	/*----------------- Sun------------------*/
	glPushMatrix();
	glMaterialfv(GL_FRONT, GL_DIFFUSE, YELLOW);				
	glMaterialfv(GL_FRONT, GL_EMISSION, BLACK);
	glScaled(2,2,0.5);
	glTranslated(-7,4,-20);
	glTranslatef(w,0,0);
	glutSolidSphere(0.3,20,20);
	glPopMatrix();
	glPushMatrix();
	glTranslated(-2,0,3);
	glPopMatrix();
		glPushMatrix();
	     /*------Road---------*/
	glPushMatrix();
	glMaterialfv(GL_FRONT, GL_DIFFUSE,BLACK);				
	glMaterialfv(GL_FRONT, GL_EMISSION, BLACK);
	glTranslated(0,-4,0);
	glScaled(60,0.00001,1.5);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glMaterialfv(GL_FRONT, GL_DIFFUSE,WHITE);				
	glTranslated(0,-3.95,0.65);
	glScaled(60,0.00002,0.08);
	glutSolidCube(1);
	glPopMatrix();

	glPushMatrix();
	glMaterialfv(GL_FRONT, GL_DIFFUSE,WHITE);				
	glTranslated(0,-3.95,-0.65);
	glScaled(60,0.00002,0.1);
	glutSolidCube(1);
	glPopMatrix();
	/*--------------cotages1----------------*/
	glPushMatrix();
	glMaterialfv(GL_FRONT, GL_DIFFUSE,CREAM);				
	glMaterialfv(GL_FRONT, GL_EMISSION, BLACK);
	glTranslated(-12,-3,-6);
	glScaled(2,4,1.2);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glMaterialfv(GL_FRONT, GL_DIFFUSE,CREAM);				
	glMaterialfv(GL_FRONT, GL_EMISSION, BLACK);
	glTranslated(-12,-0.8,-6);
	glScaled(2,2,1);
	glRotated(45,1,0,0);
	glutSolidCube(1);
	glPopMatrix();
	glPopMatrix();
	glFlush();
	glPushMatrix();
	glMaterialfv(GL_FRONT, GL_DIFFUSE,CREAM);				
	glMaterialfv(GL_FRONT, GL_EMISSION, BLACK);
	glTranslated(-12,-2.8,-6);
	glScaled(2.25,0.1,1.35);
	glutSolidCube(1);
	glPopMatrix();
	glPopMatrix();
	glFlush();

	glPushMatrix();
	glMaterialfv(GL_FRONT, GL_DIFFUSE,CREAM);				
	glMaterialfv(GL_FRONT, GL_EMISSION, BLACK);
	glTranslated(-12,-1.0,-6);
	glScaled(2.25,0.1,1.35);
	glutSolidCube(1);
	glPopMatrix();
	glPopMatrix();
	glFlush();
	glPushMatrix();
	glMaterialfv(GL_FRONT, GL_DIFFUSE,CREAM);				
	glMaterialfv(GL_FRONT, GL_EMISSION, BLACK);
	glTranslated(-12,-2.8,-6);
	glScaled(2.25,0.1,1.35);
	glutSolidCube(1);
	glPopMatrix();
	glFlush();

	glPushMatrix();
	glMaterialfv(GL_FRONT, GL_DIFFUSE,CREAM);				
	glMaterialfv(GL_FRONT, GL_EMISSION, BLACK);
	glTranslated(-12,-1.0,-6);
	glScaled(2.25,0.1,1.35);
	glutSolidCube(1);
	glPopMatrix();
	glFlush();
	/*--------------Window------------------*/


	glPushMatrix();
	glMaterialfv(GL_FRONT, GL_DIFFUSE,B);				
	glMaterialfv(GL_FRONT, GL_EMISSION, BLACK);
	glTranslated(-11.8,-3.6,-5.0);
	glScaled(0.75,0.75,0.01);
	glutWireCube(1);
	glPopMatrix();
	glPopMatrix();
	glFlush();
	glPushMatrix();
	glMaterialfv(GL_FRONT, GL_DIFFUSE,B);				
	glMaterialfv(GL_FRONT, GL_EMISSION, BLACK);
	glTranslated(-11.8,-1.6,-5.0);
	glScaled(0.75,0.75,0.01);
	glutWireCube(1);
	glPopMatrix();
	glFlush();

	


	/*--------------cotages2 ----------------*/

	glPushMatrix();
	glMaterialfv(GL_FRONT, GL_DIFFUSE,CREAM);				
	glMaterialfv(GL_FRONT, GL_EMISSION, BLACK);
	glTranslated(-10,-2,-6);
	glScaled(2,6,1.2);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glMaterialfv(GL_FRONT, GL_DIFFUSE,CREAM);				
	glMaterialfv(GL_FRONT, GL_EMISSION, BLACK);
	glTranslated(-10,1.2,-6);
	glScaled(2,2,1);
	glRotated(45,1,0,0);
	glutSolidCube(1);
	glPopMatrix();
	glPopMatrix();
	
	glPushMatrix();
	glMaterialfv(GL_FRONT, GL_DIFFUSE,CREAM);				
	glMaterialfv(GL_FRONT, GL_EMISSION, BLACK);
	glTranslated(-10,1.0,-6);
	glScaled(2.25,0.1,1.35);
	glutSolidCube(1);
	glPopMatrix();
	glPopMatrix();
	glFlush();

	glPushMatrix();
	glMaterialfv(GL_FRONT, GL_DIFFUSE,CREAM);				
	glMaterialfv(GL_FRONT, GL_EMISSION, BLACK);
	glTranslated(-10,-1.0,-6);
	glScaled(2.25,0.1,1.35);
	glutSolidCube(1);
	glPopMatrix();
	glPopMatrix();
	glFlush();

	glPushMatrix();
	glMaterialfv(GL_FRONT, GL_DIFFUSE,CREAM);				
	glMaterialfv(GL_FRONT, GL_EMISSION, BLACK);
	glTranslated(-10,-2.8,-6);
	glScaled(2.25,0.1,1.35);
	glutSolidCube(1);
	glPopMatrix();
	glPopMatrix();
	glFlush();
		/*--------------Window------------------*/


	glPushMatrix();
	glMaterialfv(GL_FRONT, GL_DIFFUSE,B);				
	glMaterialfv(GL_FRONT, GL_EMISSION, BLACK);
	glTranslated(-9.8,-3.6,-5.0);
	glScaled(0.75,0.75,0.01);
	glutWireCube(1);
	glPopMatrix();
	glPopMatrix();
	glFlush();
	glPushMatrix();
	glMaterialfv(GL_FRONT, GL_DIFFUSE,B);				
	glMaterialfv(GL_FRONT, GL_EMISSION, BLACK);
	glTranslated(-9.8,-1.6,-5.0);
	glScaled(0.75,0.75,0.01);
	glutWireCube(1);
	glPopMatrix();
	glFlush();

	glPushMatrix();
	glMaterialfv(GL_FRONT, GL_DIFFUSE,B);				
	glMaterialfv(GL_FRONT, GL_EMISSION, BLACK);
	glTranslated(-9.8,0.4,-5.0);
	glScaled(0.75,0.75,0.01);
	glutWireCube(1);
	glPopMatrix();
	glPopMatrix();
	glFlush();

	

	/*--------------cotages3----------------*/
	glPushMatrix();
	glMaterialfv(GL_FRONT, GL_DIFFUSE,CREAM);				
	glMaterialfv(GL_FRONT, GL_EMISSION, BLACK);
	glTranslated(-8,-3,-6);
	glScaled(2,4,1.2);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glMaterialfv(GL_FRONT, GL_DIFFUSE,CREAM);				
	glMaterialfv(GL_FRONT, GL_EMISSION, BLACK);
	glTranslated(-8,-0.8,-6);
	glScaled(2,2,1);
	glRotated(45,1,0,0);
	glutSolidCube(1);
	glPopMatrix();
	glFlush();

	glPushMatrix();
	glMaterialfv(GL_FRONT, GL_DIFFUSE,CREAM);				
	glMaterialfv(GL_FRONT, GL_EMISSION, BLACK);
	glTranslated(-8,-1.0,-6);
	glScaled(2.25,0.1,1.35);
	glutSolidCube(1);
	glPopMatrix();
	glFlush();

	glPushMatrix();
	glMaterialfv(GL_FRONT, GL_DIFFUSE,CREAM);				
	glMaterialfv(GL_FRONT, GL_EMISSION, BLACK);
	glTranslated(-8,-2.8,-6);
	glScaled(2.25,0.1,1.35);
	glutSolidCube(1);
	glPopMatrix();
	glFlush();

	glPushMatrix();
	glMaterialfv(GL_FRONT, GL_DIFFUSE,CREAM);				
	glMaterialfv(GL_FRONT, GL_EMISSION, BLACK);
	glTranslated(-7.4,0.6,-5.9);
	glScaled(0.2,0.4,0.1);
	glutSolidCube(1);
	glPopMatrix();
	glFlush();

	glPushMatrix();
	glMaterialfv(GL_FRONT, GL_DIFFUSE,CREAM);				
	glMaterialfv(GL_FRONT, GL_EMISSION, BLACK);
	glTranslated(-12,0.6,-5.9);
	glScaled(0.2,0.4,0.1);
	glutSolidCube(1);
	glPopMatrix();
	glFlush();

	glPushMatrix();
	glMaterialfv(GL_FRONT, GL_DIFFUSE,CREAM);				
	glMaterialfv(GL_FRONT, GL_EMISSION, BLACK);
	glTranslated(-10,2.6,-5.9);
	glScaled(0.2,0.4,0.1);
	glutSolidCube(1);
	glPopMatrix();
	glFlush();


		/*--------------Window------------------*/


	glPushMatrix();
	glMaterialfv(GL_FRONT, GL_DIFFUSE,B);				
	glMaterialfv(GL_FRONT, GL_EMISSION, BLACK);
	glTranslated(-7.8,-3.6,-5.0);
	glScaled(0.75,0.75,0.01);
	glutWireCube(1);
	glPopMatrix();
	glPopMatrix();
	glFlush();
	glPushMatrix();
	glMaterialfv(GL_FRONT, GL_DIFFUSE,B);				
	glMaterialfv(GL_FRONT, GL_EMISSION, BLACK);
	glTranslated(-7.8,-1.6,-5.0);
	glScaled(0.75,0.75,0.01);
	glutWireCube(1);
	glPopMatrix();
	glFlush();

	/*--------------Boundry-------------------------*/
			/*-----------Pr1------------*/
	glPushMatrix();
	glMaterialfv(GL_FRONT, GL_DIFFUSE,BROWN);				
	glMaterialfv(GL_FRONT, GL_EMISSION,BLACK );
	glTranslated(-14,-4.0,-3);
	glScaled(0.25,2.0,0.2);
	glutSolidCone(0.4,0.5,3,5);
	glPopMatrix();
			/*------Pr2-------*/
	glPushMatrix();
	glMaterialfv(GL_FRONT, GL_DIFFUSE,BROWN);				
	glMaterialfv(GL_FRONT, GL_EMISSION,BLACK );
	glTranslated(-14,-4.0,-8);
	glScaled(0.25,2.0,0.2);
	glutSolidCone(0.4,0.5,3,5);
	glPopMatrix();

		/*--------pr3---------*/
	glPushMatrix();
	glMaterialfv(GL_FRONT, GL_DIFFUSE,BROWN);				
	glMaterialfv(GL_FRONT, GL_EMISSION,BLACK );
	glTranslated(-4,-4.0,-3);
	glScaled(0.25,2.0,0.2);
	glutSolidCone(0.4,0.5,3,5);
	glPopMatrix();
		/*-------Pr4------------*/
	glPushMatrix();
	glMaterialfv(GL_FRONT, GL_DIFFUSE,BROWN);				
	glMaterialfv(GL_FRONT, GL_EMISSION,BLACK );
	glTranslated(-4,-4.0,-8);
	glScaled(0.25,2.0,0.2);
	glutSolidCone(0.4,0.5,3,5);
	glPopMatrix();
			/*-------Pr5------------*/
	glPushMatrix();
	glMaterialfv(GL_FRONT, GL_DIFFUSE,BROWN);				
	glMaterialfv(GL_FRONT, GL_EMISSION,BLACK );
	glTranslated(-4,-4.0,-5.9);
	glScaled(0.25,2.0,0.2);
	glutSolidCone(0.4,0.5,3,5);
	glPopMatrix();
			/*-------Pr4------------*/
	glPushMatrix();
	glMaterialfv(GL_FRONT, GL_DIFFUSE,BROWN);				
	glMaterialfv(GL_FRONT, GL_EMISSION,BLACK );
	glTranslated(-4,-4.0,-5.1);
	glScaled(0.25,2.0,0.2);
	glutSolidCone(0.4,0.5,3,5);
	glPopMatrix();
	/*--------attachment--------*/
	glPushMatrix();
	glMaterialfv(GL_FRONT, GL_DIFFUSE,BROWN);				
	glMaterialfv(GL_FRONT, GL_EMISSION, BLACK);
	glTranslated(-9,-3.7,-3);
	glScaled(10,0.1,0.01);
	glutSolidCube(1);
	glPopMatrix();

	glPushMatrix();
	glMaterialfv(GL_FRONT, GL_DIFFUSE,BROWN);				
	glMaterialfv(GL_FRONT, GL_EMISSION, BLACK);
	glTranslated(-9,-3.9,-3);
	glScaled(10,0.1,0.01);
	glutSolidCube(1);
	glPopMatrix();

		/*--------attachment--------*/
	glPushMatrix();
	glMaterialfv(GL_FRONT, GL_DIFFUSE,BROWN);				
	glMaterialfv(GL_FRONT, GL_EMISSION, BLACK);
	glTranslated(-9,-3.7,-8);
	glScaled(10,0.1,0.01);
	glutSolidCube(1);
	glPopMatrix();
	
	glPushMatrix();
	glMaterialfv(GL_FRONT, GL_DIFFUSE,BROWN);				
	glMaterialfv(GL_FRONT, GL_EMISSION, BLACK);
	glTranslated(-9,-3.9,-8);
	glScaled(10,0.1,0.01);
	glutSolidCube(1);
	glPopMatrix();

		/*--------attachment--------*/
	glPushMatrix();
	glMaterialfv(GL_FRONT, GL_DIFFUSE,BROWN);				
	glMaterialfv(GL_FRONT, GL_EMISSION, BLACK);
	glTranslated(-14,-3.7,-5.5);
	glScaled(0.1,0.1,5);
	glutSolidCube(1);
	glPopMatrix();
	
	glPushMatrix();
	glMaterialfv(GL_FRONT, GL_DIFFUSE,BROWN);				
	glMaterialfv(GL_FRONT, GL_EMISSION, BLACK);
	glTranslated(-14,-3.9,-5.5);
	glScaled(0.1,0.1,5);
	glutSolidCube(1);
	glPopMatrix();

			/*--------attachment--------*/
	glPushMatrix();
	glMaterialfv(GL_FRONT, GL_DIFFUSE,BROWN);				
	glMaterialfv(GL_FRONT, GL_EMISSION, BLACK);
	glTranslated(-4,-3.7,-4);
	glScaled(0.1,0.1,2.0);
	glutSolidCube(1);
	glPopMatrix();

	glPushMatrix();
	glMaterialfv(GL_FRONT, GL_DIFFUSE,BROWN);				
	glMaterialfv(GL_FRONT, GL_EMISSION, BLACK);
	glTranslated(-4,-3.7,-6.8);
	glScaled(0.1,0.1,2.0);
	glutSolidCube(1);
	glPopMatrix();
	
	glPushMatrix();
	glMaterialfv(GL_FRONT, GL_DIFFUSE,BROWN);				
	glMaterialfv(GL_FRONT, GL_EMISSION, BLACK);
	glTranslated(-4,-3.9,-4);
	glScaled(0.1,0.1,2.0);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glMaterialfv(GL_FRONT, GL_DIFFUSE,BROWN);				
	glMaterialfv(GL_FRONT, GL_EMISSION, BLACK);
	glTranslated(-4,-3.9,-6.8);
	glScaled(0.1,0.1,2.0);
	glutSolidCube(1);
	glPopMatrix();

}
void tree()
{

	/*----------Tree-------------------*/

	glPushMatrix();
	glMaterialfv(GL_FRONT, GL_DIFFUSE,BROWN);				
	glMaterialfv(GL_FRONT, GL_EMISSION, BROWN);
	glTranslated(0,-4,-7);
	glScaled(0.15,1.0,0.01);
	glutSolidCube(1);
	glPopMatrix();
	glFlush();
	glPushMatrix();
	glMaterialfv(GL_FRONT, GL_DIFFUSE,GREEN);				
	glMaterialfv(GL_FRONT, GL_EMISSION,GREEN );
	glTranslated(0,-3.0,-7);
	glScaled(0.5,2.0,0.2);
	glutSolidCone(0.8,2.0,3,10);
	glPopMatrix();

	/*----------Tree-------------------*/

	glPushMatrix();
	glMaterialfv(GL_FRONT, GL_DIFFUSE,BROWN);				
	glMaterialfv(GL_FRONT, GL_EMISSION, BROWN);
	glTranslated(-6,-4,4);
	glScaled(0.15,1.0,0.01);
	glutSolidCube(1);
	glPopMatrix();
	glFlush();
	glPushMatrix();
	glMaterialfv(GL_FRONT, GL_DIFFUSE,GREEN);				
	glMaterialfv(GL_FRONT, GL_EMISSION,GREEN );
	glTranslated(-6,-3.0,4);
	glScaled(0.5,2.0,0.2);
	glutSolidCone(0.8,2.0,3,10);
	glPopMatrix();

	/*----------Tree-------------------*/
	glPushMatrix();
	glMaterialfv(GL_FRONT, GL_DIFFUSE,BROWN);				
	glMaterialfv(GL_FRONT, GL_EMISSION, BROWN);
	glTranslated(65,-4,-2);
	glScaled(0.15,1.0,0.01);
	glutSolidCube(1);
	glPopMatrix();
	glFlush();
	glPushMatrix();
	glMaterialfv(GL_FRONT, GL_DIFFUSE,GREEN);				
	glMaterialfv(GL_FRONT, GL_EMISSION,GREEN );
	glTranslated(65,-3.0,-2);
	glScaled(0.5,2.0,0.2);
	glutSolidCone(0.8,2.0,3,10);
	glPopMatrix();
	
	/*----------Tree-------------------*/
	glPushMatrix();
	glMaterialfv(GL_FRONT, GL_DIFFUSE,BROWN);				
	glMaterialfv(GL_FRONT, GL_EMISSION, BROWN);
	glTranslated(10,-4,2);
	glScaled(0.15,1.0,0.01);
	glutSolidCube(1);
	glPopMatrix();
	glFlush();
	glPushMatrix();
	glMaterialfv(GL_FRONT, GL_DIFFUSE,GREEN);				
	glMaterialfv(GL_FRONT, GL_EMISSION,GREEN );
	glTranslated(10,-3.0,2);
	glScaled(0.5,2.0,0.2);
	glutSolidCone(0.8,2.0,3,10);
	glPopMatrix();

	/*----------Tree**-------------------*/
	glPushMatrix();
	glMaterialfv(GL_FRONT, GL_DIFFUSE,BROWN);				
	glMaterialfv(GL_FRONT, GL_EMISSION, B);
	glTranslated(3,-4,-4);
	glScaled(0.15,1.0,0.01);
	glutSolidCube(1);
	glPopMatrix();
	glFlush();
	glPushMatrix();
	glMaterialfv(GL_FRONT, GL_DIFFUSE,GREEN);				
	glMaterialfv(GL_FRONT, GL_EMISSION,GREEN );
	glTranslated(3,-3.5,-4);
	glScaled(1.0,1.0,0.2);
	glutSolidCone(0.8,2.0,3,10);
	glPopMatrix();
	glPushMatrix();
	glMaterialfv(GL_FRONT, GL_DIFFUSE,GREEN);				
	glMaterialfv(GL_FRONT, GL_EMISSION,GREEN );
	glTranslated(3,-3.0,-4);
	glScaled(1.0,1.0,0.2);
	glutSolidCone(0.8,2.0,3,10);
	glPopMatrix();

		/*----------Tree**-------------------*/
	glPushMatrix();
	glMaterialfv(GL_FRONT, GL_DIFFUSE,BROWN);				
	glMaterialfv(GL_FRONT, GL_EMISSION, B);
	glTranslated(12,-4,-10);
	glScaled(0.15,1.0,0.01);
	glutSolidCube(1);
	glPopMatrix();
	glFlush();
	glPushMatrix();
	glMaterialfv(GL_FRONT, GL_DIFFUSE,GREEN);				
	glMaterialfv(GL_FRONT, GL_EMISSION,GREEN );
	glTranslated(12,-3.5,-10);
	glScaled(1.0,1.0,0.2);
	glutSolidCone(0.8,2.0,3,10);
	glPopMatrix();
	glPushMatrix();
	glMaterialfv(GL_FRONT, GL_DIFFUSE,GREEN);				
	glMaterialfv(GL_FRONT, GL_EMISSION,GREEN );
	glTranslated(12,-3.0,-10);
	glScaled(1.0,1.0,0.2);
	glutSolidCone(0.8,2.0,3,10);
	glPopMatrix();
	
			/*----------Tree**-------------------*/
	glPushMatrix();
	glMaterialfv(GL_FRONT, GL_DIFFUSE,BROWN);				
	glMaterialfv(GL_FRONT, GL_EMISSION, B);
	glTranslated(-18,-4,-6);
	glScaled(0.15,1.0,0.01);
	glutSolidCube(1);
	glPopMatrix();
	glFlush();
	glPushMatrix();
	glMaterialfv(GL_FRONT, GL_DIFFUSE,GREEN);				
	glMaterialfv(GL_FRONT, GL_EMISSION,GREEN );
	glTranslated(-18,-3.5,-6);
	glScaled(1.0,1.0,0.2);
	glutSolidCone(0.8,2.0,3,10);
	glPopMatrix();
	glPushMatrix();
	glMaterialfv(GL_FRONT, GL_DIFFUSE,GREEN);				
	glMaterialfv(GL_FRONT, GL_EMISSION,GREEN );
	glTranslated(-18,-3.0,-6);
	glScaled(1.0,1.0,0.2);
	glutSolidCone(0.8,2.0,3,10);
	glPopMatrix();

			/*----------Tree**-------------------*/
	glPushMatrix();
	glMaterialfv(GL_FRONT, GL_DIFFUSE,BROWN);				
	glMaterialfv(GL_FRONT, GL_EMISSION, B);
	glTranslated(8,-4,-12);
	glScaled(0.15,1.0,0.01);
	glutSolidCube(1);
	glPopMatrix();
	glFlush();
	glPushMatrix();
	glMaterialfv(GL_FRONT, GL_DIFFUSE,GREEN);				
	glMaterialfv(GL_FRONT, GL_EMISSION,GREEN );
	glTranslated(8,-3.5,-12);
	glScaled(1.0,1.0,0.2);
	glutSolidCone(0.8,2.0,3,12);
	glPopMatrix();
	glPushMatrix();
	glMaterialfv(GL_FRONT, GL_DIFFUSE,GREEN);				
	glMaterialfv(GL_FRONT, GL_EMISSION,GREEN );
	glTranslated(8,-3.0,-12);
	glScaled(1.0,1.0,0.2);
	glutSolidCone(0.8,2.0,3,10);
	glPopMatrix();

	/*----------Tree-------------------*/
	glPushMatrix();
	glMaterialfv(GL_FRONT, GL_DIFFUSE,BROWN);				
	glMaterialfv(GL_FRONT, GL_EMISSION, BROWN);
	glTranslated(18,-4,-12);
	glScaled(0.15,1.5,0.01);
	glutSolidCube(1);
	glPopMatrix();
	glFlush();
	glPushMatrix();
	glMaterialfv(GL_FRONT, GL_DIFFUSE,GREEN);				
	glMaterialfv(GL_FRONT, GL_EMISSION,GREEN );
	glTranslated(18,-2.8,-12);
	glScaled(0.5,2.0,0.2);
	glutSolidCone(0.8,2.0,3,10);
	glPopMatrix();
	
	glFlush();
}
void Track()
{

	glPushMatrix();
	   /*-------------Car--------------------*/
	glTranslated(3,-4,0);
	glPushMatrix();
	glMaterialfv(GL_FRONT, GL_DIFFUSE, GREY);				
	glMaterialfv(GL_FRONT, GL_EMISSION, BLACK);
	glTranslated(2,0,0);
	glScaled(0.6,0.2,0.25);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glMaterialfv(GL_FRONT, GL_DIFFUSE, GREY);				
	glMaterialfv(GL_FRONT, GL_EMISSION, BLACK);
	glTranslated(1.7,0.10,0);
	glScaled(0.4,0.5,0.25);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glMaterialfv(GL_FRONT, GL_DIFFUSE, GREY);				
	glMaterialfv(GL_FRONT, GL_EMISSION, BLACK);
	glTranslated(1.2,0,0);
	glScaled(0.8,0.2,0.25);
	glutSolidCube(1);
	glPopMatrix();
	    /*-------- tyres---------*/
	        /*-------first--------*/
	glPushMatrix();		
	glTranslated(2.1,0,0.252);	
	glScaled(0.35,0.35,0.35);
	glMaterialfv(GL_FRONT,GL_DIFFUSE,BLACK);
    glMaterialfv(GL_FRONT,GL_EMISSION,BLACK);
	glRotated(angle,0,0,1);
	glutSolidTorus(0.1,0.2,20,20);
	glMaterialfv(GL_FRONT,GL_EMISSION,WHITE);
	glutWireSphere(0.2,10,10);
	glPopMatrix();
	 /*--------Second tyre---------*/
	glPushMatrix();		
	glTranslated(2.1,0,-0.252);	
	glScaled(0.35,0.35,0.35);
	glMaterialfv(GL_FRONT,GL_DIFFUSE,BLACK);
    glMaterialfv(GL_FRONT,GL_EMISSION,BLACK);
	glRotated(angle,0,0,1);
	glutSolidTorus(0.1,0.2,20,20);
	glMaterialfv(GL_FRONT,GL_EMISSION,WHITE);
	glutWireSphere(0.2,10,10);
	glPopMatrix();
	 /*-------Third tyre------*/
	glPushMatrix();		
	glTranslated(1.2,0,0.252);	
	glScaled(0.35,0.35,0.35);
	glMaterialfv(GL_FRONT,GL_DIFFUSE,BLACK);
    glMaterialfv(GL_FRONT,GL_EMISSION,BLACK);
	glRotated(angle,0,0,1);
	glutSolidTorus(0.1,0.2,20,20);
	glMaterialfv(GL_FRONT,GL_EMISSION,WHITE);
	glutWireSphere(0.2,10,10);
	glPopMatrix();
	 /*-------Fourth tyre------*/
	glPushMatrix();		
	glTranslated(1.2,0,-0.252);	
	glScaled(0.35,0.35,0.35);
	glMaterialfv(GL_FRONT,GL_DIFFUSE,BLACK);
    glMaterialfv(GL_FRONT,GL_EMISSION,BLACK);
	glRotated(angle,0,0,1);
	glutSolidTorus(0.1,0.2,20,20);
	glMaterialfv(GL_FRONT,GL_EMISSION,WHITE);
	glutWireSphere(0.2,10,10);
	glPopMatrix();
	glPopMatrix();


	glPushMatrix();
	 /*------bus--------*/
	glTranslated(0,-4,0);
	glPushMatrix();
	glMaterialfv(GL_FRONT, GL_DIFFUSE, P);				
	glMaterialfv(GL_FRONT, GL_EMISSION, BLACK);
	glTranslated(-0.5,0.15,0);
	glScaled(1.1,0.5,0.25);
	glutSolidCube(1);
	glPopMatrix();
	 
	glPushMatrix();
	glMaterialfv(GL_FRONT, GL_DIFFUSE, P);				
	glMaterialfv(GL_FRONT, GL_EMISSION, BLACK);
	glTranslated(-1.6,0.15,0);
	glScaled(1.1,0.5,0.25);
	glutSolidCube(1);
	glPopMatrix();
	  /*--------first Tyre-----------*/

	glPushMatrix();		
	glTranslated(-0.35,0,0.252);	
	glScaled(0.35,0.35,0.35);
	glMaterialfv(GL_FRONT,GL_DIFFUSE,BLACK);
    glMaterialfv(GL_FRONT,GL_EMISSION,BLACK);
	glRotated(angle,0,0,1);
	glutSolidTorus(0.1,0.2,20,20);
	glMaterialfv(GL_FRONT,GL_EMISSION,WHITE);
	glutWireSphere(0.2,10,10);
	glPopMatrix();

	/*--------Second tyre---------*/
	glPushMatrix();		
	glTranslated(-0.35,0,-0.252);	
	glScaled(0.35,0.35,0.35);
	glMaterialfv(GL_FRONT,GL_DIFFUSE,BLACK);
    glMaterialfv(GL_FRONT,GL_EMISSION,BLACK);
	glRotated(angle,0,0,1);
	glutSolidTorus(0.1,0.2,20,20);
	glMaterialfv(GL_FRONT,GL_EMISSION,WHITE);
	glutWireSphere(0.2,10,10);
	glPopMatrix();
	  /*--------first Tyre-----------*/

	glPushMatrix();		
	glTranslated(-1.6,0,0.252);	
	glScaled(0.35,0.35,0.35);
	glMaterialfv(GL_FRONT,GL_DIFFUSE,BLACK);
    glMaterialfv(GL_FRONT,GL_EMISSION,BLACK);
	glRotated(angle,0,0,1);
	glutSolidTorus(0.1,0.2,20,20);
	glMaterialfv(GL_FRONT,GL_EMISSION,WHITE);
	glutWireSphere(0.2,10,10);
	glPopMatrix();

	/*--------Second tyre---------*/
	glPushMatrix();		
	glTranslated(-1.6,0,-0.252);	
	glScaled(0.35,0.35,0.35);
	glMaterialfv(GL_FRONT,GL_DIFFUSE,BLACK);
    glMaterialfv(GL_FRONT,GL_EMISSION,BLACK);
	glRotated(angle,0,0,1);
	glutSolidTorus(0.1,0.2,20,20);
	glMaterialfv(GL_FRONT,GL_EMISSION,WHITE);
	glutWireSphere(0.2,10,10);
	glPopMatrix();

	 /*-------Third tyre------*/
	glPushMatrix();		
	glTranslated(-1.9,0,0.252);	
	glScaled(0.35,0.35,0.35);
	glMaterialfv(GL_FRONT,GL_DIFFUSE,BLACK);
    glMaterialfv(GL_FRONT,GL_EMISSION,BLACK);
	glRotated(angle,0,0,1);
	glutSolidTorus(0.1,0.2,20,20);
	glMaterialfv(GL_FRONT,GL_EMISSION,WHITE);
	glutWireSphere(0.2,10,10);
	glPopMatrix();

	 /*-------Fourth tyre------*/
	glPushMatrix();		
	glTranslated(-1.9,0,-0.252);	
	glScaled(0.35,0.35,0.35);
	glMaterialfv(GL_FRONT,GL_DIFFUSE,BLACK);
    glMaterialfv(GL_FRONT,GL_EMISSION,BLACK);
	glRotated(angle,0,0,1);
	glutSolidTorus(0.1,0.2,20,20);
	glMaterialfv(GL_FRONT,GL_EMISSION,WHITE);
	glutWireSphere(0.2,10,10);
	glPopMatrix();
	glPopMatrix();


	
	glPushMatrix();
	/*------Vain--------*/
	glTranslated(-3,-4,0);
	glPushMatrix();
	glMaterialfv(GL_FRONT, GL_DIFFUSE, B);				
	glMaterialfv(GL_FRONT, GL_EMISSION, BLACK);
	glTranslated(-2.5,0.1,0);
	glScaled(0.3,0.2,0.25);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glMaterialfv(GL_FRONT, GL_DIFFUSE, B);				
	glMaterialfv(GL_FRONT, GL_EMISSION, BLACK);
	glTranslated(-3.2,0.15,0);
	glScaled(1.2,0.5,0.25);
	glutSolidCube(1);
	glPopMatrix();
	  /*--------first Tyre-----------*/
	glPushMatrix();		
	glTranslated(-2.5,0,0.252);	
	glScaled(0.35,0.35,0.35);
	glMaterialfv(GL_FRONT,GL_DIFFUSE,BLACK);
    glMaterialfv(GL_FRONT,GL_EMISSION,BLACK);
	glRotated(angle,0,0,1);
	glutSolidTorus(0.1,0.2,20,20);
	glMaterialfv(GL_FRONT,GL_EMISSION,WHITE);
	glutWireSphere(0.2,10,10);
	glPopMatrix();
	/*--------Second tyre---------*/
	glPushMatrix();		
	glTranslated(-2.5,0,-0.252);	
	glScaled(0.35,0.35,0.35);
	glMaterialfv(GL_FRONT,GL_DIFFUSE,BLACK);
    glMaterialfv(GL_FRONT,GL_EMISSION,BLACK);
	glRotated(angle,0,0,1);
	glutSolidTorus(0.1,0.2,20,20);
	glMaterialfv(GL_FRONT,GL_EMISSION,WHITE);
	glutWireSphere(0.2,10,10);
	glPopMatrix();

	 /*-------Third tyre------*/
	glPushMatrix();		
	glTranslated(-3.6,0,0.252);	
	glScaled(0.35,0.35,0.35);
	glMaterialfv(GL_FRONT,GL_DIFFUSE,BLACK);
    glMaterialfv(GL_FRONT,GL_EMISSION,BLACK);
	glRotated(angle,0,0,1);
	glutSolidTorus(0.1,0.2,20,20);
	glMaterialfv(GL_FRONT,GL_EMISSION,WHITE);
	glutWireSphere(0.2,10,10);
	glPopMatrix();
	 /*-------Fourth tyre------*/
	glPushMatrix();		
	glTranslated(-3.6,0,-0.252);	
	glScaled(0.35,0.35,0.35);
	glMaterialfv(GL_FRONT,GL_DIFFUSE,BLACK);
    glMaterialfv(GL_FRONT,GL_EMISSION,BLACK);
	glRotated(angle,0,0,1);
	glutSolidTorus(0.1,0.2,20,20);
	glMaterialfv(GL_FRONT,GL_EMISSION,WHITE);
	glutWireSphere(0.2,10,10);
	glPopMatrix();
	glPopMatrix();

	glFlush();
}
void myBalloon()
{
	      /*-----ballooon----*/
	glPushMatrix();
	glMaterialfv(GL_FRONT, GL_DIFFUSE, RED);				
	glMaterialfv(GL_FRONT, GL_EMISSION, BLACK);
	glTranslated(0,1,0);
	glScaled(1.2,1.8,1.2);
	glutSolidSphere(1,40,20);
	glPopMatrix();
	glPushMatrix();
	glMaterialfv(GL_FRONT, GL_DIFFUSE, PINK);				
	glMaterialfv(GL_FRONT, GL_EMISSION, BLACK);
	glRotated(90,0,1,0);
	glTranslated(0,1,0);
	glScaled(1.2,1.8,1.2);
	glutWireSphere(1.0,20,30);
	glPopMatrix();
	glPushMatrix();
	    /*-----box-----*/
	glMaterialfv(GL_FRONT, GL_DIFFUSE, WHITE);				
	glMaterialfv(GL_FRONT, GL_EMISSION, BLACK);
	glTranslated(0,-2,0);
	glScaled(1,1,1);
	glutSolidCube(1);
	glPopMatrix();
	glBegin(GL_LINES);
	glVertex3f( 0,-0.8, 0);   
    glVertex3f(-0.5,-1.5,-0.5);
	glBegin(GL_LINES);
    glVertex3f(0,-0.8, 0);    
    glVertex3f(-0.5,-1.5,0.5);
	glBegin(GL_LINES);
    glVertex3f(0,-0.8,0);   
    glVertex3f(0.5,-1.5,-0.5);
	glBegin(GL_LINES);
    glVertex3f(0,-0.8,0);   
    glVertex3f(0.5,-1.5,0.5);  
    glEnd();
	glPopMatrix();
	glFlush(); 	
}
void myDisplay()
{
	glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	gluLookAt(0,o,p,0.0,0.0,0.0,0,i,0.3);
	glPushMatrix();
	glTranslated(0,0,0);
	background();
	glPopMatrix();
	tree();
	glPushMatrix();
	glTranslated(s,0,0);
	Track();
	glPopMatrix();
	glPushMatrix();
	glTranslated(x,y,z);
	glRotated(angle,0,1,0);
	glScaled(1.0,1.0,1.0);
	myBalloon();
	glPopMatrix();
	glFlush();
	
}
void renderScene(void)
{
	glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	myDisplay();
	angle-=0.05;
	x+=.0005;
	s+=.005;
	if(x>60)
		x=0.0;
	if(s>30)
		s=-20;

	glutPostRedisplay();
	glutSwapBuffers();
}
void reshape(int w ,int h)
{
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(80.0,(GLdouble)w/(GLdouble)h,0.5,40.0);
	glViewport(1,1,(GLsizei)w,(GLsizei)h);
}
void myKeyboard (unsigned char theKey, int mouseX, int mouseY)
{
	switch(theKey)
	{
	case 'a':
		x+=0.1f;
		break;
	case 'b':
		x-=0.1f;
		break;
	case 'x':
		y+=0.1f;
		break;
	case 'y':
		y-=0.1f;
		break;case 'n':
		z+=0.1f;
		break;
	case 'f':
		z-=0.1f;
		break;
		case '+':
		i+=0.1f;
		break;
	case '-':
		i-=0.1f;
		break;
	case 'z':
		o+=0.1f;
		break;
	case 'd':
		o-=0.1f;
		break;
	case 'e':
		p+=0.1f;
		break;
	case 'r':
		p-=0.1f;
		break;
	default: break; 
	}
}
void myMouse(int button,int state,int x,int y) 
{ 
    
   switch(button) 
   { 
      case GLUT_LEFT_BUTTON:
		  	if (state == GLUT_DOWN)
         { 
          
           glEnable(GL_LIGHT0);
			 break; 
     
         } 
      case (GLUT_RIGHT_BUTTON):  
		  	if (state == GLUT_DOWN)
         { 
          
           glDisable(GL_LIGHT0); 
              break;
         } 
			glutPostRedisplay();
 
   } 
}

void main(int argc, char **argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);
	glutInitWindowSize(800,600);
	glutInitWindowPosition(100,100);
	glutCreateWindow("my Window");
	init();
	glViewport(0,0,800,600);
	glutDisplayFunc(renderScene);
	glutIdleFunc(renderScene);
	glutKeyboardFunc(myKeyboard);
	glutMouseFunc(myMouse);
	glutReshapeFunc(reshape);
	glutDisplayFunc(myDisplay);
    glClearColor(0,0,0.8,0);
	glMatrixMode(GL_PROJECTION);
	glViewport(0,0,800,600);
	glutMainLoop();
}