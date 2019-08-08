
#ifndef RVIZ_EXPORT_H
#define RVIZ_EXPORT_H

#ifdef RVIZ_STATIC_DEFINE
#  define RVIZ_EXPORT
#  define RVIZ_NO_EXPORT
#else
#  ifndef RVIZ_EXPORT
#    ifdef rviz_EXPORTS
        /* We are building this library */
#      define RVIZ_EXPORT __declspec(dllexport)
#    else
        /* We are using this library */
#      define RVIZ_EXPORT __declspec(dllimport)
#    endif
#  endif

#  ifndef RVIZ_NO_EXPORT
#    define RVIZ_NO_EXPORT 
#  endif
#endif

#ifndef RVIZ_DEPRECATED
#  define RVIZ_DEPRECATED __declspec(deprecated)
#endif

#ifndef RVIZ_DEPRECATED_EXPORT
#  define RVIZ_DEPRECATED_EXPORT RVIZ_EXPORT RVIZ_DEPRECATED
#endif

#ifndef RVIZ_DEPRECATED_NO_EXPORT
#  define RVIZ_DEPRECATED_NO_EXPORT RVIZ_NO_EXPORT RVIZ_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef RVIZ_NO_DEPRECATED
#    define RVIZ_NO_DEPRECATED
#  endif
#endif

#endif /* RVIZ_EXPORT_H */
