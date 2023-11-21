#include <iostream>
#include <vector>

class ArduinoControlandQueueClass
{

public:
    bool StartNextClass()
    {
        //when it's true it'll start the next class... 
        return true; //for now...
    }
};


class GUI
{
public:
    bool StartNextClass()
    {
        //when it's true it'll start the next class... 
        return true; //for now...
    }
};

class GraphObject
{
public:
    bool StartNextClass()
    {
        //when it's true it'll start the next class... 
        return true; //for now...
    }
};



class ControlGUI
{
public:
    void WaitForColorData(const std::vector<std::vector<float>>& colorData)
    {
        // Logic to wait for and process color data from SDRInformation Class...

    }
};

class SDRInputInformationClass
{
public:
    std::vector<std::vector<float>> GetColorData()
    {
        // Logic to obtain color data...
        // ...
        return colorData;
    }
    bool StartNextClass()
    {
        
        return true; //for now...
    }
};

class GUIProgramForRadioTelescope
{
public:
    void ArduinoHandshake()
    {
        // Logic for Arduino handshake...
        // ...
    }

    void Run()
    {
        ArduinoHandshake(); //wait for the arduino to come online... 

        ArduinoControlandQueueClass arduinoControl;
        if (arduinoControl.StartNextClass())
        {
            SDRInputInformationClass sdrInfo;
            if (sdrInfo.StartNextClass())
            {
                GUI gui;
                if (gui.StartNextClass())
                {
                    GraphObject graphObj;
                    if (graphObj.StartNextClass())
                    {
                        ControlGUI controlGUI;
                       

                        while (true)
                        {
                            controlGUI.WaitForColorData(sdrInfo.GetColorData());
                        }
                    }
                }
            }
        }
    }
};

int main()
{
    GUIProgramForRadioTelescope program;
    program.Run();

    return 0;
}


