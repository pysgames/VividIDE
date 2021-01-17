
Type AppMetrics

	
	Field Width:Int,Height:Int
	Field FullScreen:Int 
	Field Name:String
	
	Method New(w:Int,h:Int,app:String,fs:Int)
	
		Width = w
		Height = h
		Name = app
		fullscreen = fullscreen
	
	End Method 
	

End Type 

Type Application

	Method New()
	
	
	End Method
	
	Method CreateApp(metrics:AppMetrics)
	
		Print "Creating App W:"+metrics.Width+" H:"+metrics.height+" App:"+metrics.Name+" FS:"+metrics.fullscreen
	
		SetGraphicsDriver GLMax2DDriver()
		Graphics 800,600




	
	'\//CreateWindow
	
	
	 
			
	
		''Print "Creating App. W:"+metrics.Width.ToString()+" H:":+metrics.Height.toString()+" FS:"+metrics.fullscreen.toString()+" Title:"+metrics.Name
	
	End Method 
	
	Method UpdateApp()
	
	End Method
	
	Method RenderApp()
	
	End Method
	
	Method InitApp()
	
	End Method
	
	Method Run(ups:Int = 25,fps:Int  = 50)
	
		InitApp()
	
		While True
			
			Cls
			
			UpdateApp()
			
			RenderApp()
		
			Flip
		
		Wend 
	
	End Method 

End Type 
