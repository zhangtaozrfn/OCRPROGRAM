#pragma once

#include <QtCore/qglobal.h>

#ifndef BUILD_STATIC
# if defined(SYSCOMMONCONFIGFILE_LIB)
#  define SYSCOMMONCONFIGFILE_EXPORT Q_DECL_EXPORT
# else
#  define SYSCOMMONCONFIGFILE_EXPORT Q_DECL_IMPORT
#  pragma comment(lib,"SysCommonConfigFile.lib")
# endif
#else
# define SYSCOMMONCONFIGFILE_EXPORT
#endif
