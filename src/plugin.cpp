#include "plugin.hpp"

Plugin* pluginInstance;

void init(Plugin* p)
{
    pluginInstance = p;

    Model* illuciaModel = createModel<IlluciaDtr, IlluciaDtrWidget>("illucia-dtr");

    p->addModel(illuciaModel);
}