#pragma once

#include <string>
//#include "PluginInstance.h"

#include <PluginCore/PluginInstance.h>
//#include <PluginCore/PluginManager.h>

class ShapePlugin : public PluginInstance
{
public:
	explicit ShapePlugin(const std::string &strName);
	~ShapePlugin(void);

	virtual bool Load();

	virtual bool UnLoad();

	//���ز�����֣�����׺����dll��
	virtual std::string GetFileName() const;

	//���ز�������֣�������׺
	virtual std::string GetDisplayName() const;
};
