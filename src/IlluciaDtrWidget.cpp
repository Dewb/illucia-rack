#include "plugin.hpp"

IlluciaDtrWidget::IlluciaDtrWidget(IlluciaDtr* module)
{
    setModule(module);

    setPanel(APP->window->loadSvg(asset::plugin(pluginInstance, "res/illucia-dtr.svg")));

    addChild(createWidget<ScrewSilver>(Vec(RACK_GRID_WIDTH, 0)));
    addChild(createWidget<ScrewSilver>(Vec(box.size.x - 2 * RACK_GRID_WIDTH, 0)));
    addChild(createWidget<ScrewSilver>(Vec(RACK_GRID_WIDTH, RACK_GRID_HEIGHT - RACK_GRID_WIDTH)));
    addChild(createWidget<ScrewSilver>(Vec(box.size.x - 2 * RACK_GRID_WIDTH, RACK_GRID_HEIGHT - RACK_GRID_WIDTH)));

    addInput(createInputCentered<PJ301MPort>(mm2px(Vec(97.404, 14.814)), module, IlluciaDtr::PORT11_INPUT));
    addInput(createInputCentered<PJ301MPort>(mm2px(Vec(121.526, 14.814)), module, IlluciaDtr::PORT12_INPUT));
    addInput(createInputCentered<PJ301MPort>(mm2px(Vec(145.649, 14.814)), module, IlluciaDtr::PORT13_INPUT));
    addInput(createInputCentered<PJ301MPort>(mm2px(Vec(169.771, 14.814)), module, IlluciaDtr::PORT14_INPUT));
    addInput(createInputCentered<PJ301MPort>(mm2px(Vec(97.404, 38.746)), module, IlluciaDtr::PORT21_INPUT));
    addInput(createInputCentered<PJ301MPort>(mm2px(Vec(121.526, 38.746)), module, IlluciaDtr::PORT22_INPUT));
    addInput(createInputCentered<PJ301MPort>(mm2px(Vec(145.649, 38.746)), module, IlluciaDtr::PORT23_INPUT));
    addInput(createInputCentered<PJ301MPort>(mm2px(Vec(169.771, 38.746)), module, IlluciaDtr::PORT24_INPUT));
    addInput(createInputCentered<PJ301MPort>(mm2px(Vec(97.404, 62.678)), module, IlluciaDtr::PORT31_INPUT));
    addInput(createInputCentered<PJ301MPort>(mm2px(Vec(121.526, 62.678)), module, IlluciaDtr::PORT32_INPUT));
    addInput(createInputCentered<PJ301MPort>(mm2px(Vec(145.649, 62.678)), module, IlluciaDtr::PORT33_INPUT));
    addInput(createInputCentered<PJ301MPort>(mm2px(Vec(169.771, 62.678)), module, IlluciaDtr::PORT34_INPUT));
    addInput(createInputCentered<PJ301MPort>(mm2px(Vec(97.404, 86.609)), module, IlluciaDtr::PORT41_INPUT));
    addInput(createInputCentered<PJ301MPort>(mm2px(Vec(121.526, 86.609)), module, IlluciaDtr::PORT42_INPUT));
    addInput(createInputCentered<PJ301MPort>(mm2px(Vec(145.649, 86.609)), module, IlluciaDtr::PORT43_INPUT));
    addInput(createInputCentered<PJ301MPort>(mm2px(Vec(169.771, 86.609)), module, IlluciaDtr::PORT44_INPUT));
    addInput(createInputCentered<PJ301MPort>(mm2px(Vec(96.169, 115.638)), module, IlluciaDtr::LED1_INPUT));
    addInput(createInputCentered<PJ301MPort>(mm2px(Vec(108.169, 115.638)), module, IlluciaDtr::LED2_INPUT));
    addInput(createInputCentered<PJ301MPort>(mm2px(Vec(120.169, 115.638)), module, IlluciaDtr::LED3_INPUT));
    addInput(createInputCentered<PJ301MPort>(mm2px(Vec(132.169, 115.638)), module, IlluciaDtr::LED4_INPUT));

    addOutput(createOutputCentered<PJ301MPort>(mm2px(Vec(105.744, 24.099)), module, IlluciaDtr::PORT11_OUTPUT));
    addOutput(createOutputCentered<PJ301MPort>(mm2px(Vec(129.866, 24.099)), module, IlluciaDtr::PORT12_OUTPUT));
    addOutput(createOutputCentered<PJ301MPort>(mm2px(Vec(153.988, 24.099)), module, IlluciaDtr::PORT13_OUTPUT));
    addOutput(createOutputCentered<PJ301MPort>(mm2px(Vec(178.111, 24.099)), module, IlluciaDtr::PORT14_OUTPUT));
    addOutput(createOutputCentered<PJ301MPort>(mm2px(Vec(105.744, 48.03)), module, IlluciaDtr::PORT21_OUTPUT));
    addOutput(createOutputCentered<PJ301MPort>(mm2px(Vec(129.866, 48.03)), module, IlluciaDtr::PORT22_OUTPUT));
    addOutput(createOutputCentered<PJ301MPort>(mm2px(Vec(153.988, 48.03)), module, IlluciaDtr::PORT23_OUTPUT));
    addOutput(createOutputCentered<PJ301MPort>(mm2px(Vec(178.111, 48.03)), module, IlluciaDtr::PORT24_OUTPUT));
    addOutput(createOutputCentered<PJ301MPort>(mm2px(Vec(105.744, 71.962)), module, IlluciaDtr::PORT31_OUTPUT));
    addOutput(createOutputCentered<PJ301MPort>(mm2px(Vec(129.866, 71.962)), module, IlluciaDtr::PORT32_OUTPUT));
    addOutput(createOutputCentered<PJ301MPort>(mm2px(Vec(153.988, 71.962)), module, IlluciaDtr::PORT33_OUTPUT));
    addOutput(createOutputCentered<PJ301MPort>(mm2px(Vec(178.111, 71.962)), module, IlluciaDtr::PORT34_OUTPUT));
    addOutput(createOutputCentered<PJ301MPort>(mm2px(Vec(105.744, 95.894)), module, IlluciaDtr::PORT41_OUTPUT));
    addOutput(createOutputCentered<PJ301MPort>(mm2px(Vec(129.866, 95.894)), module, IlluciaDtr::PORT42_OUTPUT));
    addOutput(createOutputCentered<PJ301MPort>(mm2px(Vec(153.988, 95.894)), module, IlluciaDtr::PORT43_OUTPUT));
    addOutput(createOutputCentered<PJ301MPort>(mm2px(Vec(178.111, 95.894)), module, IlluciaDtr::PORT44_OUTPUT));
    addOutput(createOutputCentered<PJ301MPort>(mm2px(Vec(144.739, 115.827)), module, IlluciaDtr::BUTTON1_OUTPUT));
    addOutput(createOutputCentered<PJ301MPort>(mm2px(Vec(156.739, 115.827)), module, IlluciaDtr::BUTTON2_OUTPUT));
    addOutput(createOutputCentered<PJ301MPort>(mm2px(Vec(168.739, 115.827)), module, IlluciaDtr::BUTTON3_OUTPUT));
    addOutput(createOutputCentered<PJ301MPort>(mm2px(Vec(180.739, 115.827)), module, IlluciaDtr::BUTTON4_OUTPUT));
    addOutput(createOutputCentered<PJ301MPort>(mm2px(Vec(199.692, 24.401)), module, IlluciaDtr::TOGGLE1_OUTPUT));
    addOutput(createOutputCentered<PJ301MPort>(mm2px(Vec(199.503, 48.591)), module, IlluciaDtr::TOGGLE2_OUTPUT));
    addOutput(createOutputCentered<PJ301MPort>(mm2px(Vec(199.677, 72.014)), module, IlluciaDtr::TOGGLE3_OUTPUT));
    addOutput(createOutputCentered<PJ301MPort>(mm2px(Vec(199.881, 95.838)), module, IlluciaDtr::TOGGLE4_OUTPUT));
    addOutput(createOutputCentered<PJ301MPort>(mm2px(Vec(37.763, 40.354)), module, IlluciaDtr::KNOB1_OUTPUT));
    addOutput(createOutputCentered<PJ301MPort>(mm2px(Vec(75.292, 40.354)), module, IlluciaDtr::KNOB2_OUTPUT));
    addOutput(createOutputCentered<PJ301MPort>(mm2px(Vec(37.763, 77.354)), module, IlluciaDtr::KNOB3_OUTPUT));
    addOutput(createOutputCentered<PJ301MPort>(mm2px(Vec(75.292, 77.354)), module, IlluciaDtr::KNOB4_OUTPUT));
    addOutput(createOutputCentered<PJ301MPort>(mm2px(Vec(37.763, 115.638)), module, IlluciaDtr::KNOB5_OUTPUT));
    addOutput(createOutputCentered<PJ301MPort>(mm2px(Vec(75.292, 115.638)), module, IlluciaDtr::KNOB6_OUTPUT));

    addChild(createLightCentered<MediumLight<RedLight>>(mm2px(Vec(199.751, 115.861)), module, IlluciaDtr::CONNECTION_LIGHT));

}

void IlluciaDtrWidget::appendContextMenu(Menu* menu)
{
    IlluciaDtr* mod = dynamic_cast<IlluciaDtr*>(module);
    if (mod) {
        menu->addChild(construct<MenuLabel>());
        menu->addChild(construct<MenuLabel>(&MenuLabel::text, "Not connected"));
    }
}