#include "ShapeExport.h"
#include "ShapePlugin.h"
//#include "PluginManager.h"
//#include <PluginCore/PluginInstance.h>
#include <PluginCore/PluginManager.h>

static PluginInstance *pPlugin = NULL;

 PluginInstance* StartPlugin()
 {
	 pPlugin = new ShapePlugin("shapefile");
	 PluginManager::GetInstance().LoadPlugin(pPlugin);

	 return pPlugin;
 }

void StopPlugin()
{
	PluginManager::GetInstance().UnLoadPlugin(pPlugin);

	delete pPlugin;
}