import brl.blitz
AppMetrics^Object{
.Width%&
.Height%&
.FullScreen%&
.Name$&
-New()="_vivid_engine_application_AppMetrics_New"
-New(w%,h%,app$,fs%)="vivid_engine_application_AppMetrics_New_iiSi"
}="vivid_engine_application_AppMetrics"
Application^Object{
-New()="vivid_engine_application_Application_New"
-CreateApp%(metrics:AppMetrics)="vivid_engine_application_Application_CreateApp_TAppMetrics"
}="vivid_engine_application_Application"