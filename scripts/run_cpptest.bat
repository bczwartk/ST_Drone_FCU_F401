@echo on

set WORK_DIR=%CD%
set WORKSPACE=%WORK_DIR%\workspace_cli
set REPORTS=%WORK_DIR%\reports_cli
set BUILD_ID=%1
rem set PUBLISH=-publish
rem set DEBUG=echo 
set DEBUG=

rem defines environment, CPPTEST_HOME, ...
rem call "%~dp0\setenv_iar_ewarm.bat"

rem call script to fresh-build the project and create BDF (also sets environment)
call "%~dp0\make_bdf.bat"

set COMMON_OPTS=-showdetails -appconsole stdout -property console.verbosity.level=high ^
    -data "%WORKSPACE%" -settings "%~dp0\cpptest.settings" ^
    -property "build.id=%BUILD_ID%" -property "dtp.project=ST_Drone_FCU_F401" %PUBLISH%
echo "%COMMON_OPTS%"

rmdir /q /s "%REPORTS%" "%WORKSPACE%"

rem import project into a fresh workspace
%DEBUG% "%CPPTEST_HOME%\cpptestcli.exe" ^
  %COMMON_OPTS% ^
  -import "%~dp0\..\STM32 FW Project\Official release with BLE Remocon - 170318"
rem -resource ST_Drone_FCU_F401_Official_BLE_Remocon_170318

rem run SCA
%DEBUG% "%CPPTEST_HOME%\cpptestcli.exe" ^
  %COMMON_OPTS% ^
  -config "%~dp0\MISRA_C_2023_No_Limit.properties" ^
  -report "%REPORTS%\sca" ^
  
rem run metrics
%DEBUG% "%CPPTEST_HOME%\cpptestcli.exe" ^
  %COMMON_OPTS% ^
  -config "builtin://Metrics" ^
  -report "%REPORTS%\mm"

rem run unit tests with coverage
%DEBUG% "%CPPTEST_HOME%\cpptestcli.exe" ^
  %COMMON_OPTS% ^
  -config "%~dp0\Run_IAR_EW_Tests_ST_Drone_FCU_F401_Official_BLE_Remocon_170318.properties" ^
  -report "%REPORTS%\ut"

rem if all runs are successful, preserve them in DTP using:
rem "C:\Program Files\Git\usr\bin\bash.exe" -c "'%~dp0\preserve_build.sh' %BUILD_ID%"

