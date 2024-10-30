@echo on

rem set PROJECT_DIR=%~dp0\..\STM32 FW Project\Official latest release 221117
set PROJECT_DIR=%~dp0\..\STM32 FW Project\Official release with BLE Remocon - 170318
call %~dp0\setenv_iar_ewarm.bat

set WKSP=%cd%\wksp_cli
set REPORTS=%cd%\reports

rmdir /q /s "%WKSP%" "%REPORTS%"\sca
cpptestcli ^
  -data "%WKSP%" -showdetails -appconsole stdout ^
  -settings "%~dp0\cpptestcli.settings" ^
  -import "%PROJECT_DIR%" ^
  -config "%~dp0\MISRA_C_2023_No_Limit.properties" ^
  -report "%REPORTS%"\sca ^
  -property "report.format=html,sarif-azure" ^
  %*
dir "%REPORTS%"\sca

