

#include "GL/glx.h"
#include "fonts.h"

void drawBox( int x, int y )
{

	static float angle = 0.0 ; 
	
    glColor3ub( 255, 100 , 10 ) ;
    glPushMatrix();
    glTranslatef( x, y, 0 );
    glRotatef( angle, 0.0f, 0.0f, 1.0f );//
	glTranslatef( -50,-50, 0 ) ;
	angle += 2.5;
    glBegin(GL_QUADS);
        glVertex2i(   0,   0 );
        glVertex2i(   0, 100 ); 
        glVertex2i( 100, 100 ); 
        glVertex2i( 100,   0 ); 
        //glVertex2f(  0.0f, 20.0f); 
        //glVertex2f( 12.0f, -10.0f);
    glEnd();

	Rect r;
	r.bot = 50;
	r.left = 50;
	r.center = 1;
	ggprint8b( &r, 16, 0x00ffffff, "JiannTyng Lu.") ;

    glPopMatrix();
}






void showName( void )
{

	Rect r;
	glClear( GL_COLOR_BUFFER_BIT );
	//
	r.bot = 0;
	r.left = 10;
	r.center = 0;
	ggprint8b(&r, 16, 0x00ff0000, "JiannTyng Lu");
	//ggprint8b(&r, 16, 0x00ffff00, "n bullets: %i", g.nbullets);
	//ggprint8b(&r, 16, 0x00ffff00, "n asteroids: %i", g.nasteroids);
	//ggprint8b(&r, 16, 0x00ffff00, "n asteroids destroyed: ");	

}
