#ifndef VIVID_ENGINE_ENGINE_BMX_RELEASE_WIN32_X64_H
#define VIVID_ENGINE_ENGINE_BMX_RELEASE_WIN32_X64_H

#include <brl.mod/blitz.mod/.bmx/blitz.bmx.release.win32.x64.h>
#include <brl.mod/standardio.mod/.bmx/standardio.bmx.release.win32.x64.h>
#include <pub.mod/glew.mod/.bmx/glew.bmx.release.win32.x64.h>
#include <pub.mod/opengl.mod/.bmx/opengl.bmx.release.win32.x64.h>
#include <brl.mod/graphics.mod/.bmx/graphics.bmx.release.win32.x64.h>
#include <brl.mod/glgraphics.mod/.bmx/glgraphics.bmx.release.win32.x64.h>
#include <brl.mod/glmax2d.mod/.bmx/glmax2d.bmx.release.win32.x64.h>
int __bb_vivid_engine_engine();
struct vivid_engine_AppMetrics_obj;
struct vivid_engine_Application_obj;
void _vivid_engine_AppMetrics_New_iiSi(struct vivid_engine_AppMetrics_obj* o,BBINT bbt_w,BBINT bbt_h,BBSTRING bbt_app,BBINT bbt_fs);
struct vivid_engine_AppMetrics_obj* _vivid_engine_AppMetrics_New_iiSi_ObjectNew(BBClass * clas,BBINT bbt_w,BBINT bbt_h,BBSTRING bbt_app,BBINT bbt_fs);
void _vivid_engine_AppMetrics_New(struct vivid_engine_AppMetrics_obj* o);
struct BBClass_vivid_engine_AppMetrics {
	BBClass*  super;
	void      (*free)( BBObject *o );
	BBDebugScope* debug_scope;
	unsigned int instance_size;
	void      (*ctor)( BBOBJECT o );
	void      (*dtor)( BBOBJECT o );
	BBSTRING  (*ToString)( BBOBJECT x );
	int       (*Compare)( BBOBJECT x,BBOBJECT y );
	BBOBJECT  (*SendMessage)( BBOBJECT o,BBOBJECT m,BBOBJECT s );
	BBINTERFACETABLE itable;
	void*     extra;
	unsigned int obj_size;
	unsigned int instance_count;
	unsigned int fields_offset;
};

struct vivid_engine_AppMetrics_obj {
	struct BBClass_vivid_engine_AppMetrics* clas;
	BBINT _vivid_engine_appmetrics_width;
	BBINT _vivid_engine_appmetrics_height;
	BBINT _vivid_engine_appmetrics_fullscreen;
	BBSTRING _vivid_engine_appmetrics_name;
};
extern struct BBClass_vivid_engine_AppMetrics vivid_engine_AppMetrics;
void _vivid_engine_Application_New(struct vivid_engine_Application_obj* o);
typedef BBINT (*vivid_engine_Application_CreateApp_TAppMetrics_m)(struct vivid_engine_Application_obj*,struct vivid_engine_AppMetrics_obj*);
BBINT _vivid_engine_Application_CreateApp_TAppMetrics(struct vivid_engine_Application_obj*,struct vivid_engine_AppMetrics_obj*);
typedef BBINT (*vivid_engine_Application_UpdateApp_m)(struct vivid_engine_Application_obj*);
BBINT _vivid_engine_Application_UpdateApp(struct vivid_engine_Application_obj*);
typedef BBINT (*vivid_engine_Application_RenderApp_m)(struct vivid_engine_Application_obj*);
BBINT _vivid_engine_Application_RenderApp(struct vivid_engine_Application_obj*);
typedef BBINT (*vivid_engine_Application_InitApp_m)(struct vivid_engine_Application_obj*);
BBINT _vivid_engine_Application_InitApp(struct vivid_engine_Application_obj*);
typedef BBINT (*vivid_engine_Application_Run_ii_m)(struct vivid_engine_Application_obj*,BBINT,BBINT);
BBINT _vivid_engine_Application_Run_ii(struct vivid_engine_Application_obj*,BBINT,BBINT);
struct BBClass_vivid_engine_Application {
	BBClass*  super;
	void      (*free)( BBObject *o );
	BBDebugScope* debug_scope;
	unsigned int instance_size;
	void      (*ctor)( BBOBJECT o );
	void      (*dtor)( BBOBJECT o );
	BBSTRING  (*ToString)( BBOBJECT x );
	int       (*Compare)( BBOBJECT x,BBOBJECT y );
	BBOBJECT  (*SendMessage)( BBOBJECT o,BBOBJECT m,BBOBJECT s );
	BBINTERFACETABLE itable;
	void*     extra;
	unsigned int obj_size;
	unsigned int instance_count;
	unsigned int fields_offset;
	vivid_engine_Application_CreateApp_TAppMetrics_m m_CreateApp_TAppMetrics;
	vivid_engine_Application_UpdateApp_m m_UpdateApp;
	vivid_engine_Application_RenderApp_m m_RenderApp;
	vivid_engine_Application_InitApp_m m_InitApp;
	vivid_engine_Application_Run_ii_m m_Run_ii;
};

struct vivid_engine_Application_obj {
	struct BBClass_vivid_engine_Application* clas;
};
extern struct BBClass_vivid_engine_Application vivid_engine_Application;

#endif
