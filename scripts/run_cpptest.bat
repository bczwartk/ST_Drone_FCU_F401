@echo on

set BUILD_ID=%1
set PUBLISH=-publish

call d:\work\projects\ST_Drone_FCU_F401_dtp\scripts\setenv_iar_ewarm.bat 

rmdir /q /s c:\tmp\reports C:\tmp\workspace_st_drone_cli

%CPPTEST_HOME%\cpptestcli.exe ^
  -showdetails -appconsole stdout -property console.verbosity.level=high ^
  -data C:\tmp\workspace_st_drone_cli ^
  -settings C:\tmp\cpptest.settings ^
  -config "c:\tmp\MISRA_C_2023_No_Limit.properties" ^
  -property "build.id=%BUILD_ID%" ^
  -property "dtp.project=ST_Drone_FCU_F401" %PUBLISH% ^
  -report c:\tmp\reports\sca ^
  -import "d:\work\projects\ST_Drone_FCU_F401_dtp\STM32 FW Project\Official release with BLE Remocon - 170318"
  
%CPPTEST_HOME%\cpptestcli.exe ^
  -showdetails -appconsole stdout -property console.verbosity.level=high ^
  -data C:\tmp\workspace_st_drone_cli ^
  -settings C:\tmp\cpptest.settings ^
  -config "builtin://Metrics" ^
  -property "build.id=%BUILD_ID%" ^
  -property "dtp.project=ST_Drone_FCU_F401" %PUBLISH% ^
  -report c:\tmp\reports\mm

%CPPTEST_HOME%\cpptestcli.exe ^
  -showdetails -appconsole stdout -property console.verbosity.level=high ^
  -data C:\tmp\workspace_st_drone_cli ^
  -settings C:\tmp\cpptest.settings ^
  -config "c:\tmp\Run_IAR_EW_Tests_ST_Drone_FCU_F401_Official_BLE_Remocon_170318.properties" ^
  -property "build.id=%BUILD_ID%" ^
  -property "dtp.project=ST_Drone_FCU_F401" %PUBLISH% ^
  -report c:\tmp\reports\ut

rem if all runs are successful, preserve them in DTP using:
rem "C:\Program Files\Git\usr\bin\bash.exe" -c "/c/tmp/preserve_build.sh %BUILD_ID%"
  