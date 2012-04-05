#include "cinder/app/AppBasic.h"
#include "cinder/gl/gl.h"

using namespace ci;
using namespace ci::app;
using namespace std;

class exampleproject1App : public AppBasic {
  public:
    void prepareSettings( Settings *settings );
	void setup();
	void mouseDown( MouseEvent event );	
	void update();
	void draw();
};

void exampleproject1App::prepareSettings( Settings *settings ){
    settings->setWindowSize( 1000, 500 );
    settings->setFrameRate( 3.0f );
}

void exampleproject1App::setup()
{
}

void exampleproject1App::mouseDown( MouseEvent event )
{
}

void exampleproject1App::update()
{
    
}

// Function: Return a random number between 0 and 1
float rand01 () { return float(rand() % 256) / 255; }

void exampleproject1App::draw()
{
    // post some integer or float to test random arithmetic
//    console() << "Hello: " << float(rand() % 256) / 256 << std::endl;
	// clear out the window with a random color
	gl::clear( Color( rand01(), rand01(), rand01() ) ); 
}


CINDER_APP_BASIC( exampleproject1App, RendererGl )
