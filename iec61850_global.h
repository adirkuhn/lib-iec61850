#ifndef IEC61850_GLOBAL_H
#define IEC61850_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(IEC61850_LIBRARY)
#  define IEC61850SHARED_EXPORT Q_DECL_EXPORT
#else
#  define IEC61850SHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // IEC61850_GLOBAL_H