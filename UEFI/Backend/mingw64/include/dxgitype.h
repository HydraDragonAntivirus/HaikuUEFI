/*** Autogenerated by WIDL 9.11 from include/dxgitype.idl - Do not edit ***/

#ifdef _WIN32
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif
#include <rpc.h>
#include <rpcndr.h>
#endif

#ifndef COM_NO_WINDOWS_H
#include <windows.h>
#include <ole2.h>
#endif

#ifndef __dxgitype_h__
#define __dxgitype_h__

#ifndef __WIDL_INLINE
#if defined(__cplusplus) || defined(_MSC_VER)
#define __WIDL_INLINE inline
#elif defined(__GNUC__)
#define __WIDL_INLINE __inline__
#endif
#endif

/* Forward declarations */

/* Headers for imported files */

#include <dxgicommon.h>
#include <dxgiformat.h>

#ifdef __cplusplus
extern "C" {
#endif

#if 0
typedef unsigned int UINT;
typedef LONG WINBOOL;
#endif
typedef enum DXGI_MODE_ROTATION {
    DXGI_MODE_ROTATION_UNSPECIFIED = 0x0,
    DXGI_MODE_ROTATION_IDENTITY = 0x1,
    DXGI_MODE_ROTATION_ROTATE90 = 0x2,
    DXGI_MODE_ROTATION_ROTATE180 = 0x3,
    DXGI_MODE_ROTATION_ROTATE270 = 0x4
} DXGI_MODE_ROTATION;
typedef enum DXGI_MODE_SCANLINE_ORDER {
    DXGI_MODE_SCANLINE_ORDER_UNSPECIFIED = 0x0,
    DXGI_MODE_SCANLINE_ORDER_PROGRESSIVE = 0x1,
    DXGI_MODE_SCANLINE_ORDER_UPPER_FIELD_FIRST = 0x2,
    DXGI_MODE_SCANLINE_ORDER_LOWER_FIELD_FIRST = 0x3
} DXGI_MODE_SCANLINE_ORDER;
typedef enum DXGI_MODE_SCALING {
    DXGI_MODE_SCALING_UNSPECIFIED = 0x0,
    DXGI_MODE_SCALING_CENTERED = 0x1,
    DXGI_MODE_SCALING_STRETCHED = 0x2
} DXGI_MODE_SCALING;
#ifndef D3DCOLORVALUE_DEFINED
#define D3DCOLORVALUE_DEFINED
typedef struct _D3DCOLORVALUE {
    float r;
    float g;
    float b;
    float a;
} D3DCOLORVALUE;
#endif
typedef D3DCOLORVALUE DXGI_RGBA;
typedef struct DXGI_MODE_DESC {
    UINT Width;
    UINT Height;
    DXGI_RATIONAL RefreshRate;
    DXGI_FORMAT Format;
    DXGI_MODE_SCANLINE_ORDER ScanlineOrdering;
    DXGI_MODE_SCALING Scaling;
} DXGI_MODE_DESC;
typedef struct DXGI_GAMMA_CONTROL_CAPABILITIES {
    WINBOOL ScaleAndOffsetSupported;
    float MaxConvertedValue;
    float MinConvertedValue;
    UINT NumGammaControlPoints;
    float ControlPointPositions[1025];
} DXGI_GAMMA_CONTROL_CAPABILITIES;
typedef struct DXGI_RGB {
    float Red;
    float Green;
    float Blue;
} DXGI_RGB;
typedef struct DXGI_GAMMA_CONTROL {
    DXGI_RGB Scale;
    DXGI_RGB Offset;
    DXGI_RGB GammaCurve[1025];
} DXGI_GAMMA_CONTROL;
/* Begin additional prototypes for all interfaces */


/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __dxgitype_h__ */