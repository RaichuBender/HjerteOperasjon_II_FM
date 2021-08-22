namespace Axa
{
	namespace App
	{
		int Main (void *_this, char **argv);
	}
}

extern "C" int axaAppMain(void *_this, char **argv) { Axa::App::Main(_this, argv); }
