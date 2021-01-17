#include <vivid.mod/engine.mod/.bmx/engine.bmx.release.win32.x64.h>
static BBString _s2={
	&bbStringClass,
	0x733bf73c76e6abe9,
	5,
	{32,65,112,112,58}
};
static BBString _s3={
	&bbStringClass,
	0xbe40bdeefcdb003b,
	4,
	{32,70,83,58}
};
static BBString _s1={
	&bbStringClass,
	0x84c4a257326ff1eb,
	3,
	{32,72,58}
};
static BBString _s0={
	&bbStringClass,
	0xed382c82c5b2396c,
	15,
	{67,114,101,97,116,105,110,103,32,65,112,112,32,87,58}
};
struct BBDebugScope_6{int kind; const char *name; BBDebugDecl decls[7]; };
void _vivid_engine_AppMetrics_New_iiSi(struct vivid_engine_AppMetrics_obj* o,BBINT bbt_w,BBINT bbt_h,BBSTRING bbt_app,BBINT bbt_fs) {
	bbObjectCtor((BBOBJECT)o);
	o->clas = &vivid_engine_AppMetrics;
	o->_vivid_engine_appmetrics_width = 0;
	o->_vivid_engine_appmetrics_height = 0;
	o->_vivid_engine_appmetrics_fullscreen = 0;
	o->_vivid_engine_appmetrics_name = &bbEmptyString;
	o->_vivid_engine_appmetrics_width =bbt_w;
	o->_vivid_engine_appmetrics_height =bbt_h;
	o->_vivid_engine_appmetrics_name =bbt_app;
	o->_vivid_engine_appmetrics_fullscreen =o->_vivid_engine_appmetrics_fullscreen ;
}
struct vivid_engine_AppMetrics_obj* _vivid_engine_AppMetrics_New_iiSi_ObjectNew(BBClass * clas,BBINT bbt_w,BBINT bbt_h,BBSTRING bbt_app,BBINT bbt_fs) {
	struct vivid_engine_AppMetrics_obj* o = (struct vivid_engine_AppMetrics_obj*)bbObjectNewNC(clas);
	_vivid_engine_AppMetrics_New_iiSi(o, bbt_w, bbt_h, bbt_app, bbt_fs);
	return o;
}
void _vivid_engine_AppMetrics_New(struct vivid_engine_AppMetrics_obj* o) {
	bbObjectCtor((BBOBJECT)o);
	o->clas = &vivid_engine_AppMetrics;
	o->_vivid_engine_appmetrics_width = 0;
	o->_vivid_engine_appmetrics_height = 0;
	o->_vivid_engine_appmetrics_fullscreen = 0;
	o->_vivid_engine_appmetrics_name = &bbEmptyString;
}
struct BBDebugScope_6 vivid_engine_AppMetrics_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"AppMetrics",
	{
		{
			BBDEBUGDECL_FIELD,
			"Width",
			"i",
			.field_offset=offsetof(struct vivid_engine_AppMetrics_obj,_vivid_engine_appmetrics_width)
		},
		{
			BBDEBUGDECL_FIELD,
			"Height",
			"i",
			.field_offset=offsetof(struct vivid_engine_AppMetrics_obj,_vivid_engine_appmetrics_height)
		},
		{
			BBDEBUGDECL_FIELD,
			"FullScreen",
			"i",
			.field_offset=offsetof(struct vivid_engine_AppMetrics_obj,_vivid_engine_appmetrics_fullscreen)
		},
		{
			BBDEBUGDECL_FIELD,
			"Name",
			"$",
			.field_offset=offsetof(struct vivid_engine_AppMetrics_obj,_vivid_engine_appmetrics_name)
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()i",
			.var_address=(void*)&_vivid_engine_AppMetrics_New
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"New",
			"(i,i,$,i):AppMetrics",
			.var_address=(void*)&_vivid_engine_AppMetrics_New_iiSi
		},
		BBDEBUGDECL_END
	}
};
struct BBClass_vivid_engine_AppMetrics vivid_engine_AppMetrics={
	&bbObjectClass,
	bbObjectFree,
	(BBDebugScope*)&vivid_engine_AppMetrics_scope,
	sizeof(struct vivid_engine_AppMetrics_obj),
	(void (*)(BBOBJECT))_vivid_engine_AppMetrics_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct vivid_engine_AppMetrics_obj,_vivid_engine_appmetrics_name) - offsetof(struct vivid_engine_AppMetrics_obj,_vivid_engine_appmetrics_width) + sizeof(BBSTRING)
	,0
	,offsetof(struct vivid_engine_AppMetrics_obj,_vivid_engine_appmetrics_width)
};

void _vivid_engine_Application_New(struct vivid_engine_Application_obj* o) {
	bbObjectCtor((BBOBJECT)o);
	o->clas = &vivid_engine_Application;
}
BBINT _vivid_engine_Application_CreateApp_TAppMetrics(struct vivid_engine_Application_obj* o,struct vivid_engine_AppMetrics_obj* bbt_metrics){
	brl_standardio_Print(bbStringConcat(bbStringConcat(bbStringConcat(bbStringConcat(bbStringConcat(bbStringConcat(bbStringConcat(&_s0,bbStringFromInt(bbt_metrics->_vivid_engine_appmetrics_width )),&_s1),bbStringFromInt(bbt_metrics->_vivid_engine_appmetrics_height )),&_s2),bbt_metrics->_vivid_engine_appmetrics_name ),&_s3),bbStringFromInt(bbt_metrics->_vivid_engine_appmetrics_fullscreen )));
	brl_graphics_SetGraphicsDriver((struct brl_graphics_TGraphicsDriver_obj*)((struct brl_graphics_TGraphicsDriver_obj*)bbObjectDowncast((BBOBJECT)brl_glmax2d_GLMax2DDriver(),(BBClass*)&brl_graphics_TGraphicsDriver)),2);
	brl_graphics_Graphics(800,600,0,60,0,-1,-1);
	return 0;
}
BBINT _vivid_engine_Application_UpdateApp(struct vivid_engine_Application_obj* o){
	return 0;
}
BBINT _vivid_engine_Application_RenderApp(struct vivid_engine_Application_obj* o){
	return 0;
}
BBINT _vivid_engine_Application_InitApp(struct vivid_engine_Application_obj* o){
	return 0;
}
BBINT _vivid_engine_Application_Run_ii(struct vivid_engine_Application_obj* o,BBINT bbt_ups,BBINT bbt_fps){
	((struct vivid_engine_Application_obj*)o)->clas->m_InitApp((struct vivid_engine_Application_obj*)o);
	while(1){
		brl_max2d_Cls();
		((struct vivid_engine_Application_obj*)o)->clas->m_UpdateApp((struct vivid_engine_Application_obj*)o);
		((struct vivid_engine_Application_obj*)o)->clas->m_RenderApp((struct vivid_engine_Application_obj*)o);
		brl_graphics_Flip(-1);
	}
}
struct BBDebugScope_6 vivid_engine_Application_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"Application",
	{
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()i",
			.var_address=(void*)&_vivid_engine_Application_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"CreateApp",
			"(:AppMetrics)i",
			.var_address=(void*)&_vivid_engine_Application_CreateApp_TAppMetrics
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"UpdateApp",
			"()i",
			.var_address=(void*)&_vivid_engine_Application_UpdateApp
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"RenderApp",
			"()i",
			.var_address=(void*)&_vivid_engine_Application_RenderApp
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"InitApp",
			"()i",
			.var_address=(void*)&_vivid_engine_Application_InitApp
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Run",
			"(i,i)i",
			.var_address=(void*)&_vivid_engine_Application_Run_ii
		},
		BBDEBUGDECL_END
	}
};
struct BBClass_vivid_engine_Application vivid_engine_Application={
	&bbObjectClass,
	bbObjectFree,
	(BBDebugScope*)&vivid_engine_Application_scope,
	sizeof(struct vivid_engine_Application_obj),
	(void (*)(BBOBJECT))_vivid_engine_Application_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	0
	,0
	,sizeof(void*)
	,_vivid_engine_Application_CreateApp_TAppMetrics
	,_vivid_engine_Application_UpdateApp
	,_vivid_engine_Application_RenderApp
	,_vivid_engine_Application_InitApp
	,_vivid_engine_Application_Run_ii
};

static int __bb_vivid_engine_engine_inited = 0;
int __bb_vivid_engine_engine(){
	if (!__bb_vivid_engine_engine_inited) {
		__bb_vivid_engine_engine_inited = 1;
		__bb_brl_blitz_blitz();
		__bb_brl_standardio_standardio();
		__bb_pub_glew_glew();
		__bb_pub_opengl_opengl();
		__bb_brl_graphics_graphics();
		__bb_brl_glgraphics_glgraphics();
		__bb_brl_glmax2d_glmax2d();
		bbObjectRegisterType((BBCLASS)&vivid_engine_AppMetrics);
		bbObjectRegisterType((BBCLASS)&vivid_engine_Application);
		return 0;
	}
	return 0;
}