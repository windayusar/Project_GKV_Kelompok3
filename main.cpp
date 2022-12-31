#include <windows.h> 
#include <GL/gl.h> 
#include <GL/glut.h> 
#include <stdio.h>

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





//-pesawat( salsa) // stack di langit





//-gunung (adit)





//-bunga (adit)






//-rumah  (wiwi)






//-sungai  (wiwi)





//-pohon  (wiwi)





//-kincir angin  ada 2( rey)





//-kapal  ( Winda)

	
	
	
	
	
	
	
	
	
	

	glutSwapBuffers();

	
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(1500, 1000);
    glutCreateWindow("Project kelompok 3");
    glutDisplayFunc(mornScene);
    glutMainLoop();
    return 0;
}