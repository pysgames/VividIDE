ModuleInfo "Version: 0.01"
ModuleInfo "Author: Antony Wells"
ModuleInfo "License: private"
ModuleInfo "Copyright: Vivid Games"
ModuleInfo "Modserver: NA"
ModuleInfo "History: 0.01"
import brl.blitz
import brl.standardio
import pub.glew
import pub.opengl
import brl.graphics
import brl.glgraphics
import brl.glmax2d
AppMetrics^Object{
.Width%&
.Height%&
.FullScreen%&
.Name$&
-New()="_vivid_engine_AppMetrics_New"
-New(w%,h%,app$,fs%)="vivid_engine_AppMetrics_New_iiSi"
}="vivid_engine_AppMetrics"
Application^Object{
-New()="vivid_engine_Application_New"
-CreateApp%(metrics:AppMetrics)="vivid_engine_Application_CreateApp_TAppMetrics"
-UpdateApp%()="vivid_engine_Application_UpdateApp"
-RenderApp%()="vivid_engine_Application_RenderApp"
-InitApp%()="vivid_engine_Application_InitApp"
-Run%(ups%=25,fps%=50)="vivid_engine_Application_Run_ii"
}="vivid_engine_Application"