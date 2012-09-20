#include "cinder/app/AppBasic.h"
#include "cinder/gl/gl.h"

using namespace ci;
using namespace ci::app;
using namespace std;

class HW02App : public AppBasic {
  public:
	void setup();
	void mouseDown( MouseEvent event );	
	void update();
	void draw();
	void prepareSettings(Settings* settings);

  private:
	static const int kAppWidth=800;
	static const int kAppHeight=600;
	static const Vec2f kUnitX;

};

const Vec2f HW02App::kUnitX = Vec2f(100.0f,100.0f);

void HW02App::prepareSettings(Settings* settings){
	settings->setWindowSize(kAppWidth,kAppHeight);
	settings->setResizable(false);
}

void HW02App::setup()
{
}

void HW02App::mouseDown( MouseEvent event )
{
}

void HW02App::update()
{
}

void HW02App::draw()
{
	// clear out the window with black
	gl::clear( Color( 250, 250, 250 ) ); 
	gl::drawSolidCircle(kUnitX,50.0f,0);
	gl::color(0.0f,0.0f,0.0f);
}

CINDER_APP_BASIC( HW02App, RendererGl )
