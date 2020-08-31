#include "IlluciaDtr.hpp"

IlluciaDtr::IlluciaDtr()
{
    config(NUM_PARAMS, NUM_INPUTS, NUM_OUTPUTS, NUM_LIGHTS);
}

IlluciaDtr::~IlluciaDtr()
{
}

void IlluciaDtr::process(const ProcessArgs& args)
{
    for (auto& param : params)
    {
    }

    for (auto& input : inputs)
    {
    }

    for (auto& output : outputs)
    {
    }

    for (auto& light : lights)
    {
        light.setBrightness(255);
    }
}

json_t* IlluciaDtr::dataToJson()
{
    json_t* rootJ = json_object();
    json_object_set_new(rootJ, "mode", json_integer(mode));
    return rootJ;
}

void IlluciaDtr::dataFromJson(json_t* rootJ)
{
    mode = json_number_value(json_object_get(rootJ, "mode"));
}
