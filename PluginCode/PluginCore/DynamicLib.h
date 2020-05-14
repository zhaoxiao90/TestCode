#ifndef DYNAMICLIB_INCLUDE
#define DYNAMICLIB_INCLUDE

//��̬����أ�ȡ������ַ�����ڲ�ʹ��
#include "Export.h"

class DynamicLib
{
public:
	DynamicLib(void);
	~DynamicLib(void);

	const char* GetName() const;

	//װ�ض�̬��
	bool LoadLib(const char* strLibName);

	void* GetSymbolAddress(const char* strSymbolName) const;

	void FreeLib();

private:
	HLIB m_hDynLib;		//��̬����
	char* m_pszLibName;	//��̬������
};

#endif
