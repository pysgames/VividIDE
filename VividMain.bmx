SuperStrict

Framework SDL.SDL

Import Vivid.Engine
Import SDL.SDLFreeAudio

Print "Starting App."


'Local a:Application = New Application

Type VividIDE Extends Application

	Method New(metrics:AppMetrics)
	
		CreateApp(metrics)
	
	End Method 


End Type 

Local metrics:AppMetrics = New AppMetrics(800,600,"Vivid3D",False)



Local app:VividIDE = New VividIDE(metrics)


app.Run()
Print "Running."