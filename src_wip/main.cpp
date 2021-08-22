#include <windows.h>

HINSTANCE HINSTANCE_1408b93a8;

int WinMain(HINSTANCE hInst,HINSTANCE hPrevInst,LPSTR strCmdLine,int nCmdShow)
{
    int ret;
    char *argv [1];
    
    HINSTANCE_1408b93a8 = hInst;
    argv = strCmdLine;
    ret = Axa::App::Main(NULL,argv);
    return ret;
}
