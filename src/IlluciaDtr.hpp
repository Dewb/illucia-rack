#pragma once
#include "SerialConnection.hpp"
#include "rack.hpp"

struct IlluciaDtr : rack::Module
{
    enum ParamIds
    {
        NUM_PARAMS
    };
    enum InputIds
    {
        PORT11_INPUT,
        PORT12_INPUT,
        PORT13_INPUT,
        PORT14_INPUT,
        PORT21_INPUT,
        PORT22_INPUT,
        PORT23_INPUT,
        PORT24_INPUT,
        PORT31_INPUT,
        PORT32_INPUT,
        PORT33_INPUT,
        PORT34_INPUT,
        PORT41_INPUT,
        PORT42_INPUT,
        PORT43_INPUT,
        PORT44_INPUT,
        LED1_INPUT,
        LED2_INPUT,
        LED3_INPUT,
        LED4_INPUT,
        NUM_INPUTS
    };
    enum OutputIds
    {
        PORT11_OUTPUT,
        PORT12_OUTPUT,
        PORT13_OUTPUT,
        PORT14_OUTPUT,
        PORT21_OUTPUT,
        PORT22_OUTPUT,
        PORT23_OUTPUT,
        PORT24_OUTPUT,
        PORT31_OUTPUT,
        PORT32_OUTPUT,
        PORT33_OUTPUT,
        PORT34_OUTPUT,
        PORT41_OUTPUT,
        PORT42_OUTPUT,
        PORT43_OUTPUT,
        PORT44_OUTPUT,
        BUTTON1_OUTPUT,
        BUTTON2_OUTPUT,
        BUTTON3_OUTPUT,
        BUTTON4_OUTPUT,
        TOGGLE1_OUTPUT,
        TOGGLE2_OUTPUT,
        TOGGLE3_OUTPUT,
        TOGGLE4_OUTPUT,
        KNOB1_OUTPUT,
        KNOB2_OUTPUT,
        KNOB3_OUTPUT,
        KNOB4_OUTPUT,
        KNOB5_OUTPUT,
        KNOB6_OUTPUT,
        NUM_OUTPUTS
    };
    enum LightIds
    {
        CONNECTION_LIGHT,
        NUM_LIGHTS
    };

    IlluciaDtr();
    ~IlluciaDtr();

    void process(const ProcessArgs& args) override;

    json_t* dataToJson() override;
    void dataFromJson(json_t* rootJ) override;

    SerialConnection serial;

protected:
    int mode;
};
