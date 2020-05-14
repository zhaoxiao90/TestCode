
#ifndef PLUGININSTANCE_INCLUDE
#define PLUGININSTANCE_INCLUDE


#include "Export.h"

class PLUGINCORE_API PluginInstance
{
public:
	explicit PluginInstance(const std::string &strName);
	virtual ~PluginInstance(void);

	virtual bool Load() = 0;

	virtual bool UnLoad() = 0;

	//���ز�����֣�����׺����dll��
	virtual std::string GetFileName() const = 0;

	//���ز�������֣�������׺
	virtual std::string GetDisplayName() const = 0;

private:
	PluginInstance(const PluginInstance &rhs);
	const PluginInstance &operator=(const PluginInstance &rhs);
};

//������غ�ж��ʱ���õĺ���
typedef PluginInstance *( *START_PLUGIN_FUN )();
typedef void( *STOP_PLUGIN_FUN )();

#endif
