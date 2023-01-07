@echo on

rem %1 - branch or revision to checkout
rem %2 - build ID
rem %3 - publish

rem CHECKOUT=cpptest
set CHECKOUT=%1
rem set BUILD_ID=ST_Drone_FCU_F401_bczwartk-%CHECKOUT%-%date%-%time%
set BUILD_ID=%2 
rem set PUBLISH=-publish
set PUBLISH=%3

echo CHECKOUT:  %CHECKOUT%
echo BUILD_ID:  %BUILD_ID%
echo PUBLISH:   %PUBLISH%

rem goto END_CI_CD

set SANDBOX=c:\tmp\st_drone_sandbox
rmdir /q /s %SANDBOX%
mkdir %SANDBOX%

pushd %SANDBOX%

git clone https://github.com/bczwartk/ST_Drone_FCU_F401.git
pushd .\ST_Drone_FCU_F401

git checkout %CHECKOUT%
git branch -a

call %~dp0\setenv_iar_ewarm.bat

set PROJECT_DIR=.\STM32 FW Project\Official release with BLE Remocon - 170318
set WKSP=%cd%\wksp_cli
set REPORTS=%cd%\reports

rmdir /q /s "%WKSP%" "%REPORTS%"\sca "%REPORTS%"\ut

date /t
time /t
call .\scripts\make_bdf.bat

date /t
time /t
cpptestcli ^
  -data "%WKSP%" -showdetails -appconsole stdout ^
  -settings "%~dp0\cpptestcli.settings" ^
  -import "%PROJECT_DIR%"

date /t
time /t
cpptestcli ^
  -data "%WKSP%" -showdetails -appconsole stdout ^
  -settings "%~dp0\cpptestcli.settings" ^
  -config "%~dp0\MISRA_C_2012_No_Limit.properties" ^
  -report "%REPORTS%"\sca ^
  -resource ST_Drone_FCU_F401_Official_BLE_Remocon_170318 ^
  -property build.id=%BUILD_ID% ^
  %PUBLISH%
dir "%REPORTS%"\sca

date /t
time /t
cpptestcli ^
  -data "%WKSP%" -showdetails -appconsole stdout ^
  -settings "%~dp0\cpptestcli.settings" ^
  -config "%~dp0\Run_IAR_EW_Tests_ST_Drone_FCU_F401_Official_BLE_Remocon_170318.properties" ^
  -report "%REPORTS%"\ut ^
  -resource ST_Drone_FCU_F401_Official_BLE_Remocon_170318 ^
  -property build.id=%BUILD_ID% ^
  %PUBLISH% 
dir "%REPORTS%"\ut

date /t
time /t

rem back from .\ST_Drone_FCU_F401
popd

rem back from %SANDBOX%
popd 


:END_CI_CD

