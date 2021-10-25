#include<stdlib.h>
//#include<graphics.h>
#pragma hdrstop
int width=600, height=600;
int windowID;
GLfloat minX=-2.2f,maxX=0.8f,minY=-1.5f,maxY=1.5;
GLfloat stepX=(maxX-minX)/(GLfloat)width;
GLfloat stepY=(maxY-minY)/(GLfloat)height;
GLfloat black[] = {0.0f,0.0f,0.0f};
const int paletteSize=128;
GLfloat palette[paletteSize][3];
const GLfloat radius=5.0f;
bool fullScreen=false;
GLfloat* calculateColor(GLfloat u,GLfloat v)
{
 GLfloat re=u;
 GLfloat im=v;
 GLfloat tempRe=0.0;
 for(int i=0;i<paletteSize;i++)
 {
 tempRe=re*re-im*im+u;
 im=re *im * 2+v;
 re=tempRe;
 if((re*re +im*im)>radius)
 {
 return palette[i];
 }
 }
 return black;
}
void repaint()
{
glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
glBegin(GL_POINTS);
for(GLfloat y=maxY;y>=minY;y-=stepY)
{
 for(GLfloat x=minX;x<=maxX;x+=stepX)
 {
 glColor3fv(calculateColor(x,y));
 glVertex3f(x,y,0.0f);
 }
 }
 glEnd();
 glutSwapBuffers();
}
void createPalette()
{
 for(int i=0;i<32;i++)
{
 palette[i][0]=(8*i)/(GLfloat)255;
 palette[i][1]=(128-4*i)/(GLfloat)255;
 palette[i][2]=(255-8*i)/(GLfloat)255;
}
for(int i=0;i<32;i++)
{
 palette[32+i][0]=(GLfloat)1;
 palette[32+i][0]=(8*i)/(GLfloat)255;
 palette[32+i][0]=(GLfloat)0;
}
for(int i=0;i<32;i++)
{
 palette[64+i][0]=(128-4*i)/(GLfloat)255;
 palette[64+i][0]=(GLfloat)1;
 palette[64+i][0]=(8*i)/(GLfloat)255;
}
for(int i=0;i<32;i++)
{
 palette[96+i][0]=(GLfloat)0;
 palette[96+i][0]=(255-8*i)/(GLfloat)255;
 palette[96+i][0]=(8*i)/(GLfloat)255;
}
}
int main(int argc,char** argv)
{
 glutInit(&argc,argv);
 createPalette();
 glutInitDisplayMode(GLUT_DEPTH |GLUT_DOUBLE|GLUT_RGBA);
 glClearColor(0.0f,0.0f,0.0f,0.0f);
GLsizei windowX=(glutGet(GLUT_SCREEN_WIDTH)-width)/2;
GLsizei windowY=(glutGet(GLUT_SCREEN_HEIGHT)-height)/2;
 glutInitWindowPosition(windowX,windowY);
glutInitWindowSize(width,height);
windowID=glutCreateWindow("FRAKTALE");
glShadeModel(GL_SMOOTH);
 glEnable(GL_DEPTH_TEST);
glViewport(0,0,(GLsizei)width,(GLsizei)height);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
glOrtho(minX,maxX,minY,maxY,((GLfloat)-1),(GLfloat)1);
 glutDisplayFunc(repaint);
 glutMainLoop();
return 0;
 }
