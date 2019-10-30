# invoke SourceDir generated makefile for app.pm4fg
app.pm4fg: .libraries,app.pm4fg
.libraries,app.pm4fg: package/cfg/app_pm4fg.xdl
	$(MAKE) -f /home/satish/workspace_v9/esp8266_tm4c123/src/makefile.libs

clean::
	$(MAKE) -f /home/satish/workspace_v9/esp8266_tm4c123/src/makefile.libs clean

