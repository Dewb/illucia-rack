#include "rack.hpp"
#include "IlluciaDtr.hpp"

#pragma once

struct IlluciaDtrWidget : rack::app::ModuleWidget
{
    IlluciaDtrWidget(IlluciaDtr* module);

    void appendContextMenu(rack::ui::Menu* menu) override;

protected:
};

