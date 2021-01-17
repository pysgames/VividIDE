#include "application.bmx.release.win32.x64.h"
struct BBDebugScope_2{int kind; const char *name; BBDebugDecl decls[3]; };
struct BBDebugScope_6{int kind; const char *name; BBDebugDecl decls[7]; };
void _vivid_engine_application_AppMetrics_New_iiSi(struct vivid_engine_application_AppMetrics_obj* o,BBINT bbt_w,BBINT bbt_h,BBSTRING bbt_app,BBINT bbt_fs) {
	bbObjectCtor((BBOBJECT)o);
	o->clas = &vivid_engine_application_AppMetrics;
	o->_vivid_engine_application_appmetrics_width = 0;
	o->_vivid_engine_application_appmetrics_height = 0;
	o->_vivid_engine_application_appmetrics_fullscreen = 0;
	o->_vivid_engine_application_appmetrics_name = &bbEmptyString;
	o->_vivid_engine_application_appmetrics_width =bbt_w;
	o->_vivid_engine_application_appmetrics_height =bbt_h;
	o->_vivid_engine_application_appmetrics_name =bbt_app;
	o->_vivid_engine_application_appmetrics_fullscreen =o->_vivid_engine_application_appmetrics_fullscreen ;
}
struct vivid_engine_application_AppMetrics_obj* _vivid_engine_application_AppMetrics_New_iiSi_ObjectNew(BBClass * clas,BBINT bbt_w,BBINT bbt_h,BBSTRING bbt_app,BBINT bbt_fs) {
	struct vivid_engine_application_AppMetrics_obj* o = (struct vivid_engine_application_AppMetrics_obj*)bbObjectNewNC(clas);
	_vivid_engine_application_AppMetrics_New_iiSi(o, bbt_w, bbt_h, bbt_app, bbt_fs);
	return o;
}
void _vivid_engine_application_AppMetrics_New(struct vivid_engine_application_AppMetrics_obj* o) {
	bbObjectCtor((BBOBJECT)o);
	o->clas = &vivid_engine_application_AppMetrics;
	o->_vivid_engine_application_appmetrics_width = 0;
	o->_vivid_engine_application_appmetrics_height = 0;
	o->_vivid_engine_application_appmetrics_fullscreen = 0;
	o->_vivid_engine_application_appmetrics_name = &bbEmptyString;
}
struct BBDebugScope_6 vivid_engine_application_AppMetrics_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"AppMetrics",
	{
		{
			BBDEBUGDECL_FIELD,
			"Width",
			"i",
			.field_offset=offsetof(struct vivid_engine_application_AppMetrics_obj,_vivid_engine_application_appmetrics_width)
		},
		{
			BBDEBUGDECL_FIELD,
			"Height",
			"i",
			.field_offset=offsetof(struct vivid_engine_application_AppMetrics_obj,_vivid_engine_application_appmetrics_height)
		},
		{
			BBDEBUGDECL_FIELD,
			"FullScreen",
			"i",
			.field_offset=offsetof(struct vivid_engine_application_AppMetrics_obj,_vivid_engine_application_appmetrics_fullscreen)
		},
		{
			BBDEBUGDECL_FIELD,
			"Name",
			"$",
			.field_offset=offsetof(struct vivid_engine_application_AppMetrics_obj,_vivid_engine_application_appmetrics_name)
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()i",
			.var_address=(void*)&_vivid_engine_application_AppMetrics_New
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"New",
			"(i,i,$,i):AppMetrics",
			.var_address=(void*)&_vivid_engine_application_AppMetrics_New_iiSi
		},
		BBDEBUGDECL_END
	}
};
struct BBClass_vivid_engine_application_AppMetrics vivid_engine_application_AppMetrics={
	&bbObjectClass,
	bbObjectFree,
	(BBDebugScope*)&vivid_engine_application_AppMetrics_scope,
	sizeof(struct vivid_engine_application_AppMetrics_obj),
	(void (*)(BBOBJECT))_vivid_engine_application_AppMetrics_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct vivid_engine_application_AppMetrics_obj,_vivid_engine_application_appmetrics_name) - offsetof(struct vivid_engine_application_AppMetrics_obj,_vivid_engine_application_appmetrics_width) + sizeof(BBSTRING)
	,0
	,offsetof(struct vivid_engine_application_AppMetrics_obj,_vivid_engine_application_appmetrics_width)
};

void _vivid_engine_application_Application_New(struct vivid_engine_application_Application_obj* o) {
	bbObjectCtor((BBOBJECT)o);
	o->clas = &vivid_engine_application_Application;
}
BBINT _vivid_engine_application_Application_CreateApp_TAppMetrics(struct vivid_engine_application_Application_obj* o,struct vivid_engine_application_AppMetrics_obj* bbt_metrics){
	return 0;
}
struct BBDebugScope_2 vivid_engine_application_Application_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"Application",
	{
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()i",
			.var_address=(void*)&_vivid_engine_application_Application_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"CreateApp",
			"(:AppMetrics)i",
			.var_address=(void*)&_vivid_engine_application_Application_CreateApp_TAppMetrics
		},
		BBDEBUGDECL_END
	}
};
struct BBClass_vivid_engine_application_Application vivid_engine_application_Application={
	&bbObjectClass,
	bbObjectFree,
	(BBDebugScope*)&vivid_engine_application_Application_scope,
	sizeof(struct vivid_engine_application_Application_obj),
	(void (*)(BBOBJECT))_vivid_engine_application_Application_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	0
	,0
	,sizeof(void*)
	,_vivid_engine_application_Application_CreateApp_TAppMetrics
};

static int _bb_vivid_engine_application_inited = 0;
int _bb_vivid_engine_application(){
	if (!_bb_vivid_engine_application_inited) {
		_bb_vivid_engine_application_inited = 1;
		__bb_brl_blitz_blitz();
		bbObjectRegisterType((BBCLASS)&vivid_engine_application_AppMetrics);
		bbObjectRegisterType((BBCLASS)&vivid_engine_application_Application);
		return 0;
	}
	return 0;
}