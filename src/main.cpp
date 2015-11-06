#include "VirtualGEVCam.h"
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    VirtualGEVCam* pVtCam = new VirtualGEVCam(".\\InData", "virtual-camera.zip", "VirtualDevice.ini");

    if (pVtCam->Init() != MV_OK)
    {
        cout << "VirtualGEVCam init error" << endl;
        return -1;
    }

    if (pVtCam->Starting() != MV_OK)
    {
        cout << "VirtualGEVCam starting error" << endl;
        return -1;
    }

    pVtCam->DeInit();

    return 0;
}
