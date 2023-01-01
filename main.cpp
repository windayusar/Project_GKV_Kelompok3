#include <iostream>
#include <windows.h> 
#include <GL/gl.h> 
#include <GL/glut.h> 
#include <stdio.h>
#include <math.h>
using namespace std;
float _moveB = 0.0f;
float speed = 0.001f;

void mornScene(){
	
 	glClearColor(1.0f,1.0f,1.0f,1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3d(1,0,0);
    glLoadIdentity(); 
    gluOrtho2D(-4,4,-4,4);
    glMatrixMode(GL_MODELVIEW);
    
    

	
	    
//    langit
	glBegin(GL_POLYGON);
    glColor3ub(135,206,250);
    glVertex2f(-4.0f,1.0f);
    glVertex2f(4.0f,1.0f);
    glVertex2f(4.0f,4.0f);
    glVertex2f(-4.0f,4.0f);
    glEnd();
	
//-awan 5 (hilman) // stack di langit






//matahari 

	

//-gunung (adit)




//halaman
glBegin(GL_POLYGON);
glColor3ub(154,205,50);
glVertex2f(-4, -1);
glVertex2f(4, -1);
glVertex2f(4, 1);
glVertex2f(-4, 1);
glVertex2f(-4, -1);

    glEnd();


//-rumah  (wiwi)
//polygon 1-bagian rumah
    glBegin(GL_POLYGON);//warna merah
    glColor3ub(202,54,39);
    glVertex2f(-1.2621784803676, 0.0124325996875);
    glVertex2f(-1.1473486202508, 0.9405388730887);
    glVertex2f(-0.9507886601445, 1.2804238041058);
    glVertex2f(-0.4634837590476, 1.4933637608876);
    glVertex2f(0.0197261428804, 1.2804238041058);
    glVertex2f(0.2203811021555, 0.9241588764131);
    glVertex2f(0.2203811021555, 0.0314490575971);
    glVertex2f(-1.1479861604339, 0.020513618254);

    glEnd();
    
    //polygon 2-bagian atap
    glBegin(GL_POLYGON);//warna putih
    glColor3ub(0,0,0);
    glVertex2f(-1.1931009766566, 0.8528979542909);
    glVertex2f(-1.2542663898302, 0.8834806608777);
    glVertex2f(-1.0052357790521, 1.3509591758471);
    glVertex2f(-0.4634837590476, 1.4933637608876);
    glVertex2f(0.0197261428804, 1.2804238041058);
    glVertex2f(0.3310515844265, 0.8870817657017);
    glVertex2f(0.2679294422242, 0.8520139089226);
    glVertex2f(0.2203811021555, 0.9241588764131);
    glVertex2f(0.0197261428804, 1.2804238041058);
    glVertex2f(-0.4634837590476, 1.4933637608876);
    glVertex2f(-0.9507886601445, 1.2804238041058);
    glVertex2f(-1.1473486202508, 0.9405388730887);
    glVertex2f(-1.1931009766566, 0.8528979542909);
    glEnd();
    
    
    //polygon 3-papan depan
    glBegin(GL_POLYGON);//warna coklat
    glColor3ub(198,130,83);
    glVertex2f(-0.8910595299269, 0.6088398201089);
    glVertex2f(-0.8910595299269, 0.6672641363371);
    glVertex2f(-0.0368449477118, 0.6657219353942);
    glVertex2f(-0.0368449477118, 0.6042941456411);
    glVertex2f(-0.8910595299269, 0.6088398201089);
    glEnd();
    
    //polygon 4-pintu 
    glBegin(GL_POLYGON);//warna putih kecoklatan
    glColor3ub(228,218,195);
    glVertex2f(-0.8271328556043, 0.0182082000562);
    glVertex2f(-0.8247266993725, 0.5403441023562);
    glVertex2f(-0.1052859860651, 0.5379379461244);
    glVertex2f(-0.1052859860651, 0.0158020438244);
    glVertex2f(-0.8271328556043, 0.0182082000562);
    glEnd();
    
    //polygon 4-pintu bagian a
    glBegin(GL_POLYGON);//warna merah dongker
    glColor3ub(170,40,40);
    glVertex2f(-0.8271328556043, 0.0182082000562);
    glVertex2f(-1.2621784803676, 0.0124325996875);
    glVertex2f(-0.5473082244651, -0.0051581532835);
    glVertex2f(-0.8271328556043, 0.0182082000562);
    glEnd();
    
     //polygon 4-pintu bagian b
    glBegin(GL_POLYGON);//warna merah dongker
    glColor3ub(170,40,40);
    glVertex2f(-0.5098785782778, 0.0549520338813);
    glVertex2f(-0.7618012918783, 0.4969371808262);
    glVertex2f(-0.4850847248278, 0.4937195463256);
    glVertex2f(-0.5098785782778, 0.0549520338813);
    glEnd();
    
    
     //polygon 4-pintu bagian c
    glBegin(GL_POLYGON);//warna merah dongker
    glColor3ub(170,40,40);
    glVertex2f(-0.4432554763201, 0.0866887820013);
    glVertex2f(-0.4448642935704, 0.4953283635759);
    glVertex2f(-0.1649300920193, 0.4953283635759);
    glVertex2f(-0.4432554763201, 0.0866887820013);
    glEnd();
    
    //polygon 4-pintu bagian d
    glBegin(GL_POLYGON);//warna merah dongker
    glColor3ub(170,40,40);
    glVertex2f(-0.420732034816, 0.0545124369954);
    glVertex2f(-0.1407978332649, 0.4615432013198);
    glVertex2f(-0.1456242850158, 0.0545124369954);
    glVertex2f(-0.420732034816, 0.0545124369954);
    glEnd();
    
    //polygon 5-Jendela 
    glBegin(GL_POLYGON);//warna coklat putih 
    glColor3ub(228,218,195);
    glVertex2f(-0.6501753814672, 0.8420841201593);
    glVertex2f(-0.6482062788788, 1.2083372016124);
    glVertex2f(-0.2740767870719, 1.202429893847);
    glVertex2f(-0.2760458896604, 0.8401150175709);
    glVertex2f(-0.6501753814672, 0.8420841201593);
    glEnd();
    
    //polygon 5-Jendela a
    glBegin(GL_POLYGON);//warna abu-abu pekat
    glColor3ub(101,83,73);
    glVertex2f(-0.6315636003314, 0.859532359872);
    glVertex2f(-0.6331293712195, 1.0090634796805);
    glVertex2f(-0.4726378551946, 1.0090634796805);
    glVertex2f(-0.4734207406386, 0.86109813076);
   glVertex2f(-0.6315636003314, 0.859532359872);
    glEnd();
    
    //polygon 5-Jendela b
    glBegin(GL_POLYGON);//warna abu-abu pekat
    glColor3ub(101,83,73);
    glVertex2f(-0.6331293712195, 1.0302013866692);
    glVertex2f(-0.6346951421075, 1.1820811628098);
    glVertex2f(-0.4734207406386, 1.1844298191419);
    glVertex2f(-0.4718549697506, 1.0309842721132);
    glVertex2f(-0.6331293712195, 1.0302013866692);
   
    glEnd();
    
    //polygon 5-Jendela c
    glBegin(GL_POLYGON);//warna abu-abu pekat
    glColor3ub(101,83,73);
    glVertex2f(-0.4718549697506, 1.0309842721132);
    glVertex2f(-0.4514999482059, 1.1844298191419);
    glVertex2f(-0.291008432181, 1.1820811628098);
    glVertex2f(-0.2917913176251, 1.0286356157811);
    glVertex2f(-0.4718549697506, 1.0309842721132); 
    glEnd();
    
    //polygon 5-Jendela d
    glBegin(GL_POLYGON);//warna abu-abu pekat
    glColor3ub(101,83,73);
    glVertex2f(-0.4514999482059, 0.8587494744279);
    glVertex2f(-0.4507170627619, 1.0106292505686);
    glVertex2f(-0.2933570885131, 1.0082805942365);
	 glVertex2f(-0.2933570885131, 0.8587494744279);
	 glVertex2f(-0.4514999482059, 0.8587494744279);
    glEnd();
      






//-tanah





//-pohon (wiwi)





//-kincir angin  rumah( rey)


//sungai (winda)

glBegin(GL_POLYGON);
 glColor3ub(0,0,255);
 	glVertex2f(-4.0, -4.0);
  	glVertex2f(4.0, -4.0);
	glVertex2f(4.0, -1.0);
    glVertex2f(-4.0, -1.0);
    glVertex2f(-4.0, -3.5);
glEnd();

//bagian atas kapal  ( Winda)
 glPushMatrix();
    glTranslatef(_moveB, -0.0f, 0.0f);
glBegin(GL_POLYGON);
glColor3ub(255,246,207);
glVertex2f(-1.8, -2.0);
glVertex2f(-1.1, -2);
glVertex2f(-0.9, -2.1);
glVertex2f(-0.65, -2.1);
glVertex2f(-0.65, -1.9);
glVertex2f(-0.5, -1.9);
glVertex2f(-0.5, -1.8);
glVertex2f(-1.1, -1.8);
glVertex2f(-1.1, -1.5);
glVertex2f(-1.8, -1.5);
glVertex2f(-1.8, -2);
 glEnd();
//-kerangka kapal 
glBegin(GL_POLYGON);
 glColor3ub(0,40,86);
 glVertex2f(-2.4, -2);
 glVertex2f(-2.2, -2.6);
 glVertex2f(0.4, -2.6);
 glVertex2f(0.6, -2.1);
 glVertex2f(-0.9, -2.1);
 glVertex2f(-1.1, -2);
 glVertex2f(-2.4, -2);
 glEnd();

//aksesoris kapal 1	
glBegin(GL_POLYGON);
glColor3ub(231,41,23);
glVertex2f(-2.2, -2.6);
 glVertex2f(0.4, -2.6);
 glVertex2f(0.4433921971382, -2.5001130504878);
 glVertex2f(-2.2305506596507,-2.5007103561353);
glVertex2f(-2.2, -2.6);
 glEnd();


 //aksesoris kapal 3 cerebong
 glBegin(GL_POLYGON);
glColor3ub(231,41,23);
glVertex2f(-1.8, -1.5);
glVertex2f (-1.7358813476334, -1.5);
glVertex2f(-1.7369220039254, -1.3180734354845);
glVertex2f(-1.8, -1.3);
glVertex2f(-1.8, -1.5);
 glEnd();
 //aksesoris kapal 4 windows 1
 glBegin(GL_POLYGON);
 glColor3ub(0,0,0);
 glVertex2f(-1.7, -1.8);
 glVertex2f (-1.5, -1.8);
 glVertex2f (-1.5, -1.6);
 glVertex2f(-1.7, -1.6);
glVertex2f(-1.7, -1.8);
 glEnd();
 
  //aksesoris kapal 5 windows 2
 glBegin(GL_POLYGON);
 glColor3ub(0,0,0);
 glVertex2f(-1.4, -1.8);
glVertex2f(-1.2, -1.8);
glVertex2f(-1.2, -1.6);
glVertex2f(-1.4, -1.6);
 glVertex2f(-1.4, -1.8);
glEnd();
//aksesoris kapal 6 windows 3
 glBegin(GL_POLYGON);
 glColor3ub(0,0,0);
 glVertex2f(-1, -2.03);
  glVertex2f(-1, -1.94);
  glVertex2f (-0.78, -1.94);
glVertex2f(-0.78, -2.03);
 glEnd();
 //aksesoris kapal 7 bagian belakang
 glBegin(GL_POLYGON);
 glColor3ub(0,0,0);
glVertex2f(0.5, -2);
glVertex2f(0.3, -2);
  glVertex2f(0.3, -2.1);
  glVertex2f(0.6, -2.1);
  glVertex2f(0.6, -1.8);
  glVertex2f(0.5, -1.8);
	glVertex2f(0.5, -2);
  
	 glEnd();

   glPopMatrix();
   
   
//aksesoris kapal 7 circle 1
	glutSwapBuffers();

	
}


void update2(int value) {


    if(_moveB <4.0f)
    {
        _moveB -= speed;
    }
     //Notify GLUT that the display has changed

//_moveB -= 0.01;

    glutTimerFunc(20, update2, 0); //Notify GLUT to call update again in 25 milliseconds
    glutPostRedisplay();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(1500, 1000);
    glutCreateWindow("Project kelompok 3");
    glutDisplayFunc(mornScene);
    glutTimerFunc(0, update2, 0);
    glutMainLoop();
    return 0;
}
