#ifndef BIGNUMBERSLIB_GLOBAL_H
#define BIGNUMBERSLIB_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(BIGNUMBERSLIB_LIBRARY)
#  define BIGNUMBERSLIBSHARED_EXPORT Q_DECL_EXPORT
#else
#  define BIGNUMBERSLIBSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // BIGNUMBERSLIB_GLOBAL_H