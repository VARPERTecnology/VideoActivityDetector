#include "VideoAnalyser.h"

using namespace DeteccionDeActividad; 

[STAThreadAttribute]
int main(int argc, char *argv[])
{
	VideoAnalyser ^analyser = gcnew VideoAnalyser();

	Application::Run(analyser);

	return 0;
}