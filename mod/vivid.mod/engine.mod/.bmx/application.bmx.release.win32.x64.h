#ifndef VIVID_ENGINE_APPLICATION_BMX_RELEASE_WIN32_X64_H
#define VIVID_ENGINE_APPLICATION_BMX_RELEASE_WIN32_X64_H

#include <brl.mod/blitz.mod/.bmx/blitz.bmx.release.win32.x64.h>
int _bb_vivid_engine_application();
struct vivid_engine_application_AppMetrics_obj;
struct vivid_engine_application_Application_obj;
void _vivid_engine_application_AppMetrics_New_iiSi(struct vivid_engine_application_AppMetrics_obj* o,BBINT bbt_w,BBINT bbt_h,BBSTRING bbt_app,BBINT bbt_fs);
struct vivid_engine_application_AppMetrics_obj* _vivid_engine_application_AppMetrics_New_iiSi_ObjectNew(BBClass * clas,BBINT bbt_w,BBINT bbt_h,BBSTRING bbt_app,BBINT bbt_fs);
void _vivid_engine_application_AppMetrics_New(struct vivid_engine_application_AppMetrics_obj* o);
struct BBClass_vivid_engine_application_AppMetrics {
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

struct vivid_engine_application_AppMetrics_obj {
	struct BBClass_vivid_engine_application_AppMetrics* clas;
	BBINT _vivid_engine_application_appmetrics_width;
	BBINT _vivid_engine_application_appmetrics_height;
	BBINT _vivid_engine_application_appmetrics_fullscreen;
	BBSTRING _vivid_engine_application_appmetrics_name;
};
extern struct BBClass_vivid_engine_application_AppMetrics vivid_engine_application_AppMetrics;
void _vivid_engine_application_Application_New(struct vivid_engine_application_Application_obj* o);
typedef BBINT (*vivid_engine_application_Application_CreateApp_TAppMetrics_m)(struct vivid_engine_application_Application_obj*,struct vivid_engine_application_AppMetrics_obj*);
BBINT _vivid_engine_application_Application_CreateApp_TAppMetrics(struct vivid_engine_application_Application_obj*,struct vivid_engine_application_AppMetrics_obj*);
struct BBClass_vivid_engine_application_Application {
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
	vivid_engine_application_Application_CreateApp_TAppMetrics_m m_CreateApp_TAppMetrics;
};

struct vivid_engine_application_Application_obj {
	struct BBClass_vivid_engine_application_Application* clas;
};
extern struct BBClass_vivid_engine_application_Application vivid_engine_application_Application;

#endif
