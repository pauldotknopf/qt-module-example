#ifndef MODGLOBAL_H
#define MODGLOBAL_H

#if defined(QT_BUILD_MOD_LIB)
#  define Q_MOD_EXPORT __attribute__((visibility("default")))
#else
#  define Q_MOD_EXPORT __attribute__((visibility("default")))
#endif

#endif // MODGLOBAL_H
